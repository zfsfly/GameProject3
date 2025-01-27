﻿#include "stdafx.h"
#include "PlayerManager.h"
#include "RoleModule.h"
#include "../ServerData/RoleData.h"
#include "../Message/Msg_ID.pb.h"
#include "TimerManager.h"

CPlayerManager::CPlayerManager()
{
	TimerManager::GetInstancePtr()->AddFixTimer(0, 1, &CPlayerManager::ZeroTimer, this);
}

CPlayerManager::~CPlayerManager()
{

}

CPlayerManager* CPlayerManager::GetInstancePtr()
{
	static CPlayerManager _PlayerManager;

	return &_PlayerManager;
}

CPlayerObject* CPlayerManager::CreatePlayer(UINT64 u64RoleID)
{
	CPlayerObject* pPlayer = CreatePlayerByID(u64RoleID);
	return pPlayer;
}

CPlayerObject* CPlayerManager::GetPlayer( UINT64 u64RoleID )
{
	return GetByKey(u64RoleID);
}

CPlayerObject* CPlayerManager::CreatePlayerByID( UINT64 u64RoleID )
{
	return InsertAlloc(u64RoleID);
}

BOOL CPlayerManager::ReleasePlayer( UINT64 u64RoleID )
{
	CPlayerObject* pPlayer = GetByKey(u64RoleID);

	ERROR_RETURN_FALSE(pPlayer != NULL);

	pPlayer->Uninit();

	return Delete(u64RoleID);
}

BOOL CPlayerManager::BroadMessageToAll(UINT32 dwMsgID, const google::protobuf::Message& pdata)
{
	char szBuff[10240] = { 0 };
	ERROR_RETURN_FALSE(pdata.ByteSize() < 10240);
	ERROR_RETURN_FALSE(pdata.SerializePartialToArray(szBuff, pdata.ByteSize()));

	BroadMessageNotify Nty;
	Nty.set_msgdata(szBuff, pdata.ByteSize());
	Nty.set_msgid(dwMsgID);

	CPlayerManager::TNodeTypePtr pNode = CPlayerManager::GetInstancePtr()->MoveFirst();
	ERROR_RETURN_FALSE(pNode != NULL);

	UINT32 dwProxyID = 0;
	CPlayerObject* pTempObj = NULL;
	for (; pNode != NULL; pNode = CPlayerManager::GetInstancePtr()->MoveNext(pNode))
	{
		pTempObj = pNode->GetValue();
		ERROR_RETURN_FALSE(pTempObj != NULL);

		if (!pTempObj->IsOnline())
		{
			continue;
		}

		Nty.add_connid(pTempObj->m_dwClientConnID);

		if(pTempObj->m_dwProxyConnID != 0)
		{
			dwProxyID = pTempObj->m_dwProxyConnID;
		}
	}

	//因为所有玩家是一个ProxyID
	ServiceBase::GetInstancePtr()->SendMsgProtoBuf(dwProxyID, MSG_BROAD_MESSAGE_NOTIFY, 0, 0, Nty);

	return TRUE;
}

BOOL CPlayerManager::ZeroTimer(UINT32 nParam)
{
	CPlayerManager::TNodeTypePtr pNode = CPlayerManager::GetInstancePtr()->MoveFirst();
	ERROR_RETURN_FALSE(pNode != NULL);

	CPlayerObject* pTempObj = NULL;
	for (; pNode != NULL; pNode = CPlayerManager::GetInstancePtr()->MoveNext(pNode))
	{
		pTempObj = pNode->GetValue();
		ERROR_RETURN_FALSE(pTempObj != NULL);

		if (!pTempObj->IsOnline())
		{
			continue;
		}

		pTempObj->OnNewDay();
	}

	return TRUE;
}

BOOL CPlayerManager::OnUpdate(UINT64 uTick)
{
	if (GetCount() <= 0)
	{
		return TRUE;
	}

	UINT64 uMinLeaveTime = 0x0fffffffff;
	UINT64 uReleaseRoleID = 0;

	CPlayerManager::TNodeTypePtr pNode = CPlayerManager::GetInstancePtr()->MoveFirst();
	ERROR_RETURN_FALSE(pNode != NULL);

	CPlayerObject* pTempObj = NULL;
	for (; pNode != NULL; pNode = CPlayerManager::GetInstancePtr()->MoveNext(pNode))
	{
		pTempObj = pNode->GetValue();
		ERROR_RETURN_FALSE(pTempObj != NULL);

		if (pTempObj->IsOnline())
		{
			pTempObj->NotifyChange();
		}
		else
		{
			CRoleModule* pRoleModule = (CRoleModule*)pTempObj->GetModuleByType(MT_ROLE);
			ERROR_RETURN_FALSE(pRoleModule != NULL);

			if (uMinLeaveTime > pRoleModule->m_pRoleDataObject->m_uLogoffTime)
			{
				uMinLeaveTime = pRoleModule->m_pRoleDataObject->m_uLogoffTime;
				uReleaseRoleID = pTempObj->GetObjectID();
			}
		}
	}

	if (uReleaseRoleID != 0 && GetCount() > 3000)
	{
		//当内存中的人数超过3000人，就清理一个离线时间最长的玩家
		ReleasePlayer(uReleaseRoleID);
	}

	return TRUE;
}

