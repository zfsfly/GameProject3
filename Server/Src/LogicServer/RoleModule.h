﻿#ifndef __ROLE_MODULE_H__
#define __ROLE_MODULE_H__
#include "ModuleBase.h"

struct RoleDataObject;
class CRoleModule : public CModuleBase
{
public:
	CRoleModule(CPlayerObject* pOwner);

	~CRoleModule();

public:
	BOOL    OnCreate(UINT64 u64RoleID);

	BOOL    OnDestroy();

	BOOL    OnLogin();

	BOOL    OnLogout();

	BOOL    OnNewDay();

	BOOL    InitBaseData(UINT64 u64RoleID, std::string Name, UINT32 dwCarrerID, UINT64 u64AccountID, UINT32 dwChannel);

	BOOL    ReadFromDBLoginData(DBRoleLoginAck& Ack);

	BOOL	SaveToClientLoginData(RoleLoginAck& Ack);

	BOOL	NotifyChange();

	BOOL	CalcFightValue(INT32 nValue[PROPERTY_NUM], INT32 nPercent[PROPERTY_NUM], INT32& FightValue);

	VOID	RegisterMessageHanler();

public:
	//扣除行动力， 如果返回成功，就是扣除成功， 如果返回失败，就是行动力不足
	BOOL    CostAction(UINT32 dwActionID, INT32 nActionNum);

	BOOL    CheckActionEnough(UINT32  dwActionID, INT32 nActionNum);

	UINT64  GetAction(UINT32 dwActionID);

	UINT64  AddAction( UINT32 dwActionID, INT64 nActionNum);

	BOOL    UpdateAction(UINT32 dwActionID);

	BOOL    SetDelete(BOOL bDelete);

	UINT64  AddExp(INT32 nExp);

	UINT64  GetLastLogoffTime();

public:
	UINT32  GetActorID();
	INT32   GetLevel();
	CHAR*	GetName();

	UINT32	GetCarrerID();
public:
	UINT32           m_dwActorID;

	RoleDataObject*  m_pRoleDataObject;
};

#endif //__ROLE_MODULE_H__
