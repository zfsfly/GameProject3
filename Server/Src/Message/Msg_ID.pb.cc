// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg_ID.proto

#include "Msg_ID.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
namespace protobuf_Msg_5fID_2eproto {
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Msg_ID.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014Msg_ID.proto*\260*\n\tMessageID\022\r\n\tMSG_BEGI"
      "N\020\000\022\034\n\026MSG_NORMAL_MSGID_BEGIN\020\300\204=\022\033\n\025MSG"
      "_CHECK_VERSION_REQ\020\301\204=\022\033\n\025MSG_CHECK_VERS"
      "ION_ACK\020\302\204=\022\031\n\023MSG_ACCOUNT_REG_REQ\020\303\204=\022\031"
      "\n\023MSG_ACCOUNT_REG_ACK\020\304\204=\022\033\n\025MSG_ACCOUNT"
      "_LOGIN_REQ\020\305\204=\022\033\n\025MSG_ACCOUNT_LOGIN_ACK\020"
      "\306\204=\022\030\n\022MSG_DB_EXE_SQL_REQ\020\307\204=\022\030\n\022MSG_DB_"
      "EXE_SQL_ACK\020\310\204=\022\031\n\023MSG_SERVER_LIST_REQ\020\311"
      "\204=\022\031\n\023MSG_SERVER_LIST_ACK\020\312\204=\022\033\n\025MSG_SEL"
      "ECT_SERVER_REQ\020\313\204=\022\033\n\025MSG_SELECT_SERVER_"
      "ACK\020\314\204=\022\037\n\031MSG_LOGIC_REGTO_LOGIN_REQ\020\315\204="
      "\022\037\n\031MSG_LOGIC_REGTO_LOGIN_ACK\020\316\204=\022\032\n\024MSG"
      "_SEAL_ACCOUNT_REQ\020\317\204=\022\032\n\024MSG_SEAL_ACCOUN"
      "T_ACK\020\320\204=\022\036\n\030MSG_GAME_REGTO_LOGIC_REQ\020\321\204"
      "=\022\036\n\030MSG_GAME_REGTO_LOGIC_ACK\020\322\204=\022 \n\032MSG"
      "_LOGIC_REGTO_CENTER_REQ\020\323\204=\022 \n\032MSG_LOGIC"
      "_REGTO_CENTER_ACK\020\324\204=\022\026\n\020MSG_LOG_DATA_NT"
      "F\020\325\204=\022\033\n\025MSG_WATCH_SVR_PHP_REQ\020\326\204=\022\033\n\025MS"
      "G_WATCH_SVR_PHP_ACK\020\327\204=\022\036\n\030MSG_WATCH_HEA"
      "RT_BEAT_REQ\020\330\204=\022\036\n\030MSG_WATCH_HEART_BEAT_"
      "ACK\020\331\204=\022\035\n\027MSG_WATCH_START_SVR_REQ\020\332\204=\022\035"
      "\n\027MSG_WATCH_START_SVR_ACK\020\333\204=\022\034\n\026MSG_WAT"
      "CH_STOP_SVR_REQ\020\334\204=\022\034\n\026MSG_WATCH_STOP_SV"
      "R_ACK\020\335\204=\022\030\n\022MSG_DISCONNECT_NTY\020\336\204=\022\032\n\024M"
      "SG_NORMAL_MSGID_END\020\377\210z\022\036\n\030MSG_LOGICSVR_"
      "MSGID_BEGIN\020\200\211z\022\027\n\021MSG_ROLE_LIST_REQ\020\201\211z"
      "\022\027\n\021MSG_ROLE_LIST_ACK\020\202\211z\022\031\n\023MSG_ROLE_CR"
      "EATE_REQ\020\203\211z\022\031\n\023MSG_ROLE_CREATE_ACK\020\204\211z\022"
      "\031\n\023MSG_ROLE_DELETE_REQ\020\205\211z\022\031\n\023MSG_ROLE_D"
      "ELETE_ACK\020\206\211z\022\030\n\022MSG_ROLE_LOGIN_REQ\020\207\211z\022"
      "\030\n\022MSG_ROLE_LOGIN_ACK\020\210\211z\022\031\n\023MSG_ROLE_LO"
      "GOUT_REQ\020\211\211z\022\031\n\023MSG_ROLE_LOGOUT_ACK\020\212\211z\022"
      "\025\n\017MSG_DATA_UPDATE\020\213\211z\022\033\n\025MSG_NOTIFY_INT"
      "O_SCENE\020\216\211z\022\035\n\027MSG_COPYINFO_REPORT_REQ\020\220"
      "\211z\022\027\n\021MSG_MAIN_COPY_REQ\020\221\211z\022\027\n\021MSG_MAIN_"
      "COPY_ACK\020\222\211z\022\030\n\022MSG_COPY_ABORT_REQ\020\223\211z\022\030"
      "\n\022MSG_COPY_ABORT_ACK\020\224\211z\022\032\n\024MSG_BACK_TO_"
      "CITY_REQ\020\225\211z\022\032\n\024MSG_BACK_TO_CITY_ACK\020\226\211z"
      "\022\033\n\025MSG_BATTLE_RESULT_NTY\020\227\211z\022\035\n\027MSG_MAI"
      "NCOPY_RESULT_NTY\020\230\211z\022\030\n\022MSG_ROLE_CHANG_N"
      "TY\020\231\211z\022\030\n\022MSG_BAG_CHANGE_NTY\020\232\211z\022\030\n\022MSG_"
      "PET_CHANGE_NTY\020\233\211z\022\032\n\024MSG_EQUIP_CHANGE_N"
      "TY\020\234\211z\022\034\n\026MSG_PARTNER_CHANGE_NTY\020\235\211z\022\032\n\024"
      "MSG_MOUNT_CHANGE_NTY\020\236\211z\022\036\n\030MSG_ROLE_OTH"
      "ER_LOGIN_NTY\020\237\211z\022\032\n\024MSG_CHAT_MESSAGE_REQ"
      "\020\240\211z\022\032\n\024MSG_CHAT_MESSAGE_ACK\020\241\211z\022\032\n\024MSG_"
      "CHAT_MESSAGE_NTY\020\242\211z\022\031\n\023MSG_SETUP_EQUIP_"
      "REQ\020\243\211z\022\031\n\023MSG_SETUP_EQUIP_ACK\020\244\211z\022\027\n\021MS"
      "G_SETUP_PET_REQ\020\245\211z\022\027\n\021MSG_SETUP_PET_ACK"
      "\020\246\211z\022\033\n\025MSG_SETUP_PARTNER_REQ\020\247\211z\022\033\n\025MSG"
      "_SETUP_PARTNER_ACK\020\250\211z\022\031\n\023MSG_SETUP_MOUN"
      "T_REQ\020\251\211z\022\031\n\023MSG_SETUP_MOUNT_ACK\020\252\211z\022\026\n\020"
      "MSG_USE_ITEM_REQ\020\253\211z\022\026\n\020MSG_USE_ITEM_ACK"
      "\020\254\211z\022\034\n\026MSG_ROLE_RECONNECT_REQ\020\255\211z\022\034\n\026MS"
      "G_ROLE_RECONNECT_ACK\020\256\211z\022\031\n\023MSG_MAIL_CHA"
      "NGE_NTY\020\257\211z\022\031\n\023MSG_TASK_CHANGE_NTY\020\260\211z\022\036"
      "\n\030MSG_BROAD_MESSAGE_NOTIFY\020\263\211z\022\037\n\031MSG_GA"
      "SVR_REGTO_PROXY_REQ\020\264\211z\022\037\n\031MSG_GASVR_REG"
      "TO_PROXY_ACK\020\265\211z\022\035\n\026MSG_LOGICSVR_MSGID_E"
      "ND\020\277\215\267\001\022\037\n\030MSG_SCENESVR_MSGID_BEGIN\020\300\215\267\001"
      "\022\033\n\024MSG_CREATE_SCENE_REQ\020\301\215\267\001\022\033\n\024MSG_CRE"
      "ATE_SCENE_ACK\020\302\215\267\001\022\033\n\024MSG_DELETE_SCENE_R"
      "EQ\020\303\215\267\001\022\033\n\024MSG_DELETE_SCENE_ACK\020\304\215\267\001\022\034\n\025"
      "MSG_SCENE_DESTROY_REQ\020\305\215\267\001\022\034\n\025MSG_SCENE_"
      "DESTROY_ACK\020\306\215\267\001\022\034\n\025MSG_TRANSFER_DATA_RE"
      "Q\020\307\215\267\001\022\034\n\025MSG_TRANSFER_DATA_ACK\020\310\215\267\001\022 \n\031"
      "MSG_NOTIFY_ROLE_ENTER_REQ\020\311\215\267\001\022 \n\031MSG_NO"
      "TIFY_ROLE_ENTER_ACK\020\312\215\267\001\022\032\n\023MSG_ENTER_SC"
      "ENE_REQ\020\313\215\267\001\022\032\n\023MSG_ENTER_SCENE_ACK\020\314\215\267\001"
      "\022\032\n\023MSG_LEAVE_SCENE_REQ\020\315\215\267\001\022\032\n\023MSG_LEAV"
      "E_SCENE_ACK\020\316\215\267\001\022\031\n\022MSG_SKILL_CAST_REQ\020\317"
      "\215\267\001\022\031\n\022MSG_SKILL_CAST_ACK\020\320\215\267\001\022\031\n\022MSG_SK"
      "ILL_CAST_NTF\020\321\215\267\001\022\033\n\024MSG_SKILL_RESULT_NT"
      "F\020\322\215\267\001\022\031\n\022MSG_OBJECT_NEW_NTF\020\323\215\267\001\022\034\n\025MSG"
      "_OBJECT_CHANGE_NTF\020\324\215\267\001\022\034\n\025MSG_OBJECT_RE"
      "MOVE_NTF\020\325\215\267\001\022\034\n\025MSG_OBJECT_ACTION_REQ\020\326"
      "\215\267\001\022\034\n\025MSG_OBJECT_ACTION_ACK\020\327\215\267\001\022\031\n\022MSG"
      "_HEART_BEAT_REQ\020\330\215\267\001\022\031\n\022MSG_HEART_BEAT_A"
      "CK\020\331\215\267\001\022\035\n\026MSG_USE_HP_BOOTTLE_REQ\020\332\215\267\001\022\035"
      "\n\026MSG_USE_HP_BOOTTLE_ACK\020\333\215\267\001\022\035\n\026MSG_USE"
      "_MP_BOOTTLE_REQ\020\334\215\267\001\022\035\n\026MSG_USE_MP_BOOTT"
      "LE_ACK\020\335\215\267\001\022\034\n\025MSG_OBJECT_DIE_NOTIFY\020\336\215\267"
      "\001\022\032\n\023MSG_BATTLE_CHAT_REQ\020\337\215\267\001\022\032\n\023MSG_BAT"
      "TLE_CHAT_ACK\020\340\215\267\001\022\031\n\022MSG_BULLET_NEW_NTF\020"
      "\341\215\267\001\022\035\n\026MSG_SCENESVR_MSGID_END\020\377\221\364\001\022\022\n\rM"
      "SG_REQ_LOGIN\020\351\007\022\022\n\rMSG_ACK_LOGIN\020\352\007\022\030\n\023M"
      "SG_REQ_LOGINSERVER\020\353\007\022\030\n\023MSG_ACK_LOGINSE"
      "RVER\020\354\007\022\032\n\025MSG_REQ_GETSERVERLIST\020\355\007\022\032\n\025M"
      "SG_ACK_GETSERVERLIST\020\356\007\022\027\n\022MSG_REQ_CREAT"
      "EROLE\020\357\007\022\027\n\022MSG_ACK_CREATEROLE\020\360\007\022\026\n\021MSG"
      "_REQ_ENTERGAME\020\361\007\022\026\n\021MSG_ACK_ENTERGAME\020\362"
      "\007\022\025\n\020MSG_REQ_REGISTER\020\363\007\022\025\n\020MSG_ACK_REGI"
      "STER\020\364\007\022\024\n\017MSG_REQ_SORTBAG\020\315\010\022\024\n\017MSG_ACK"
      "_SORTBAG\020\316\010\022\024\n\017MSG_REQ_USEITEM\020\317\010\022\024\n\017MSG"
      "_ACK_USEITEM\020\320\010\022\030\n\023MSG_REQ_DRESS_EQUIP\020\321"
      "\010\022\030\n\023MSG_ACK_DRESS_EQUIP\020\322\010\022\031\n\024MSG_REQ_U"
      "NLOAD_EQUIP\020\323\010\022\031\n\024MSG_ACK_UNLOAD_EQUIP\020\324"
      "\010\022\026\n\021MSG_REQ_DRESS_GEM\020\325\010\022\026\n\021MSG_ACK_DRE"
      "SS_GEM\020\326\010\022\027\n\022MSG_REQ_UNLOAD_GEM\020\327\010\022\027\n\022MS"
      "G_ACK_UNLOAD_GEM\020\330\010\022\031\n\024MSG_REQ_COMPOSE_C"
      "HIP\020\331\010\022\031\n\024MSG_ACK_COMPOSE_CHIP\020\332\010\022\035\n\030MSG"
      "_REQ_STRENGTHEN_EQUIP\020\333\010\022\035\n\030MSG_ACK_STRE"
      "NGTHEN_EQUIP\020\334\010\022\032\n\025MSG_REQ_ADVANCE_EQUIP"
      "\020\335\010\022\032\n\025MSG_ACK_ADVANCE_EQUIP\020\336\010\022\031\n\024MSG_R"
      "EQ_UPSTAR_EQUIP\020\337\010\022\031\n\024MSG_ACK_UPSTAR_EQU"
      "IP\020\340\010\022\033\n\026MSG_REQ_STRENGTHEN_GEM\020\341\010\022\033\n\026MS"
      "G_ACK_STRENGTHEN_GEM\020\342\010\022\035\n\030MSG_REQ_ONEKE"
      "YTODRESSGEM\020\377\010\022\035\n\030MSG_ACK_ONEKEYTODRESSG"
      "EM\020\200\t\022\036\n\031MSG_REQ_ONEKEYTOUNLOADGEM\020\201\t\022\036\n"
      "\031MSG_ACK_ONEKEYTOUNLOADGEM\020\202\t\022\035\n\030MSG_REQ"
      "_GET_CHAPTERAWARD\020\261\t\022\035\n\030MSG_ACK_GET_CHAP"
      "TERAWARD\020\262\t\022\031\n\024MSG_REQ_BATTLE_CHECK\020\263\t\022\031"
      "\n\024MSG_ACK_BATTLE_CHECK\020\264\t\022\025\n\020MSG_REQ_PAS"
      "SCOPY\020\265\t\022\025\n\020MSG_ACK_PASSCOPY\020\266\t\022\025\n\020MSG_R"
      "EQ_SETMOUNT\020\225\n\022\025\n\020MSG_ACK_SETMOUNT\020\226\n\022\032\n"
      "\025MSG_REQ_CHARGE_RELICS\020\371\n\022\032\n\025MSG_ACK_CHA"
      "RGE_RELICS\020\372\n\022\033\n\026MSG_REQ_UPGRADE_RELICS\020"
      "\373\n\022\033\n\026MSG_ACK_UPGRADE_RELICS\020\374\n\022\032\n\025MSG_R"
      "EQ_BATTLE_RELICS\020\375\n\022\032\n\025MSG_ACK_BATTLE_RE"
      "LICS\020\376\n\022\032\n\025MSG_REQ_UNLOAD_RELICS\020\377\n\022\032\n\025M"
      "SG_ACK_UNLOAD_RELICS\020\200\013\022\026\n\021MSG_REQ_BUY_S"
      "TORE\020\335\013\022\026\n\021MSG_ACK_BUY_STORE\020\336\013\022\030\n\023MSG_R"
      "EQ_UPGRADE_PET\020\301\014\022\030\n\023MSG_ACK_UPGRADE_PET"
      "\020\302\014\022\027\n\022MSG_REQ_BATTLE_PET\020\303\014\022\027\n\022MSG_ACK_"
      "BATTLE_PET\020\304\014\022\027\n\022MSG_REQ_UNLOAD_PET\020\305\014\022\027"
      "\n\022MSG_ACK_UNLOAD_PET\020\306\014\022\033\n\026MSG_REQ_CHANG"
      "E_PARTNER\020\307\014\022\033\n\026MSG_ACK_CHANGE_PARTNER\020\310"
      "\014\022\034\n\027MSG_REQ_ADVANVE_PARTNER\020\311\014\022\034\n\027MSG_A"
      "CK_ADVANVE_PARTNER\020\312\014\022\034\n\027MSG_REQ_UPGRADE"
      "_PARTNER\020\313\014\022\034\n\027MSG_ACK_UPGRADE_PARTNER\020\314"
      "\014\022\030\n\023MSG_REQ_SUBMIT_TASK\020\315\014\022\030\n\023MSG_ACK_S"
      "UBMIT_TASK\020\316\014\022\030\n\023MSG_REQ_ADDHERO_EXP\020\321\017\022"
      "\030\n\023MSG_ACK_ADDHERO_EXP\020\322\017\022\027\n\022MSG_ENTER_V"
      "IEW_NTF\020\271\027\022\027\n\022MSG_LEAVE_VIEW_NTF\020\272\027\022\036\n\031M"
      "SG_ACTOR_VALUECHANGE_NTF\020\273\027\022\034\n\027MSG_ACTOR"
      "_SKILLCAST_NTF\020\274\027\022\026\n\021MSG_ACTOR_DIE_NTF\020\275"
      "\027b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 5449);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Msg_ID.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Msg_5fID_2eproto
const ::google::protobuf::EnumDescriptor* MessageID_descriptor() {
  protobuf_Msg_5fID_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Msg_5fID_2eproto::file_level_enum_descriptors[0];
}
bool MessageID_IsValid(int value) {
  switch (value) {
    case 0:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 1008:
    case 1009:
    case 1010:
    case 1011:
    case 1012:
    case 1101:
    case 1102:
    case 1103:
    case 1104:
    case 1105:
    case 1106:
    case 1107:
    case 1108:
    case 1109:
    case 1110:
    case 1111:
    case 1112:
    case 1113:
    case 1114:
    case 1115:
    case 1116:
    case 1117:
    case 1118:
    case 1119:
    case 1120:
    case 1121:
    case 1122:
    case 1151:
    case 1152:
    case 1153:
    case 1154:
    case 1201:
    case 1202:
    case 1203:
    case 1204:
    case 1205:
    case 1206:
    case 1301:
    case 1302:
    case 1401:
    case 1402:
    case 1403:
    case 1404:
    case 1405:
    case 1406:
    case 1407:
    case 1408:
    case 1501:
    case 1502:
    case 1601:
    case 1602:
    case 1603:
    case 1604:
    case 1605:
    case 1606:
    case 1607:
    case 1608:
    case 1609:
    case 1610:
    case 1611:
    case 1612:
    case 1613:
    case 1614:
    case 2001:
    case 2002:
    case 3001:
    case 3002:
    case 3003:
    case 3004:
    case 3005:
    case 1000000:
    case 1000001:
    case 1000002:
    case 1000003:
    case 1000004:
    case 1000005:
    case 1000006:
    case 1000007:
    case 1000008:
    case 1000009:
    case 1000010:
    case 1000011:
    case 1000012:
    case 1000013:
    case 1000014:
    case 1000015:
    case 1000016:
    case 1000017:
    case 1000018:
    case 1000019:
    case 1000020:
    case 1000021:
    case 1000022:
    case 1000023:
    case 1000024:
    case 1000025:
    case 1000026:
    case 1000027:
    case 1000028:
    case 1000029:
    case 1000030:
    case 1999999:
    case 2000000:
    case 2000001:
    case 2000002:
    case 2000003:
    case 2000004:
    case 2000005:
    case 2000006:
    case 2000007:
    case 2000008:
    case 2000009:
    case 2000010:
    case 2000011:
    case 2000014:
    case 2000016:
    case 2000017:
    case 2000018:
    case 2000019:
    case 2000020:
    case 2000021:
    case 2000022:
    case 2000023:
    case 2000024:
    case 2000025:
    case 2000026:
    case 2000027:
    case 2000028:
    case 2000029:
    case 2000030:
    case 2000031:
    case 2000032:
    case 2000033:
    case 2000034:
    case 2000035:
    case 2000036:
    case 2000037:
    case 2000038:
    case 2000039:
    case 2000040:
    case 2000041:
    case 2000042:
    case 2000043:
    case 2000044:
    case 2000045:
    case 2000046:
    case 2000047:
    case 2000048:
    case 2000051:
    case 2000052:
    case 2000053:
    case 2999999:
    case 3000000:
    case 3000001:
    case 3000002:
    case 3000003:
    case 3000004:
    case 3000005:
    case 3000006:
    case 3000007:
    case 3000008:
    case 3000009:
    case 3000010:
    case 3000011:
    case 3000012:
    case 3000013:
    case 3000014:
    case 3000015:
    case 3000016:
    case 3000017:
    case 3000018:
    case 3000019:
    case 3000020:
    case 3000021:
    case 3000022:
    case 3000023:
    case 3000024:
    case 3000025:
    case 3000026:
    case 3000027:
    case 3000028:
    case 3000029:
    case 3000030:
    case 3000031:
    case 3000032:
    case 3000033:
    case 3999999:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
