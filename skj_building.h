#ifndef __SKJ_BUILDING_H__
#define __SKJ_BUILDING_H__

#include "minijson.h"
#include "SK_API.h"

int build_SleepMessage(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LLCControl(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LLCControlAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AppControl(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AppControlAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AppQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AppQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPCallServerReset(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ClearIPCallServerSoftware(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPCallServerResetAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ClearIPCallServerSoftwareAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7CLLIConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7CLLIQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7CLLIQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AdjustExnetAssigns(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_WirelessMobilityConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_WirelessMobilityQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_WirelessMobilityQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ClearSoftware(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ClearSoftwareAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_H323TimerChannelRanges(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SSAInternalMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MessageWrapper(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MessageWrapperAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CSAPPLConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CSAPPLTimerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnFSConvert(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnFSDefrag(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnFSQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnFSReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnSingleDelete(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AppConnectionQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AppConnectionQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AppPopulationQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ARPCacheQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ARPCacheReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectionStatusMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DS0StatusChange(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_V5Config(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_V5Query(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_V5QueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AllInService(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AllOutOfService(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GenericReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DynamicConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DynamicConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DroppedNotice(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RedundantLLCRegister(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ProductLicenseDownloadAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ProductLicenseDownload(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ProductLicenseQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ProductLicenseQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PingLLC(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PingLLCAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RBICardConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RBICardConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RBICardConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SubrateConnectionManagement(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceAttributeConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceAttributeQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceAttributeQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPAddressConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPAddressConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPAddressQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPAddressQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AllocateChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AllocateChannelAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AllocateChannelGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AllocateChannelGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelGroupContentsQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelGroupContentsQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelGroupPopulationQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelGroupPopulationQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLTool(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_HexTool(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecordedAnnouncement(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RequestStandbyPoll(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MonitorCardTrickle(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MonitorCardTrickleAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RouteControl(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RouteControlAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TftpManage(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TftpManageAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_VOIPProtocolConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_VOIPProtocolQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_VOIPProtocolQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MediaGatewayConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MediaGatewayQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MediaGatewayQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssignNode(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CCSRedundancyConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NodeStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RingStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RingStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RingStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SystemResourceUtilQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SystemResourceUtilQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MultiHostConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MultiHostConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SCCPTCAPConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SCCPTCAPQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SCCPTCAPQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NodeConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NodeConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NodeConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NodeConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NodeStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NodeStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssignEXSHostSlave(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssignEXSHostSlaveAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CCSRedundancyQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CCSRedundancyQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CCSRedundancyReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_InterAppMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_InterAppMsgAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_UserTimer(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_UserTimerAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DiagnosticsIndication(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ISDNQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ISDNQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ISDNTerminalConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ISDNInterfaceConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelProblem(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TransferChanMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TransferChanMsgAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssignNotifyMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_Alarm(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_OutseizeControl(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_OutseizeControlAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SystemRegisterMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SubMessageRegister(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ClearChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ClearAllChanGroups(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IgnoreChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_WatchChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ForceGroupState(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ForceGroupStateAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AppDescriptionData(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ActivateMatrix(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResetStandbyMatrix(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GenerateLogMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LogLevel(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AttachGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RegisterVirtualName(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_BroadcastLoad(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_MonitorChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AttachGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssociateChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RemoveChannelsFromGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConfigChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CancelUserTimer(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CancelUserTimerAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AnswerSuperviseConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CardStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CardStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CardStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_Connect(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnConnect(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnDownloadInit(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnDownload(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectTonePattern(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelParameterQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelParameterQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DistantReleaseConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LocalReleaseConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ReleaseCacheChannels(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelReleaseRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PollIntervalConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PollRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PollRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_T1SpanConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TrunkTypeConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ServiceStateConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssignSpan(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssignSpanAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PollMessage(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CardPopulationQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CardPopulationQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_VersionRequestQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_VersionRequestQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelStateTransition(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RequestChannelMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RequestChannelAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DownloadBeginBRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DownloadBeginSRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DownloadBRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DownloadSRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DownloadComplete(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AlarmCleared(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_BChannelBlock(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_BChannelConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_BecomeActive(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_BusyOut(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_BusyOutFlagConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CallProcessingEvent(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CPAClassConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CPAPatternConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CPAResult(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelReleased(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelReleasedWithData(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ClearSystemSoftware(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CollectDigitString(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConferenceCreate(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConferenceDeleteRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConferenceDeleted(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectOneWay(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectOneWayForced(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectOneWayToConference(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectToConference(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectWait(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectWithData(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectWithPad(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CPCDetection(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CrossConnectChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CrossConnectSpan(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CrossDisconnectChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CrossDisconnectSpan(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DChannelAssign(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DisconnectTonePattern(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_FilterTimerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_FlashTimingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GenerateCallProcessingEvent(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_InpulsingParametersConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_InseizeControl(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_InseizeInstrListConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LoopTimingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DSPSIMMConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TimeSet(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TagConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_T1SpanFormatQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_T1SpanFormatQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SystemLogQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SystemLogQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SynchPriorityQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SynchPriorityQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SynchPriorityConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_StartDialConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SpanStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SpanStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SpanFilterQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SpanFilterQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SpanFilterConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResetMatrix(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResetConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RFSWithData(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RequestForService(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ReleaseChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PCMEncodingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ParkChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_OutseizeInstrListConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_OutpulseDigits(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConferenceCreateAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConferenceDeleteRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectOneWayToConferenceAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectToConferenceAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConnectWaitAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnConnectAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnDisconnect(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnDisconnectAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CallControlInstructionsQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CallControlInstructionsQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelConnectionStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ChannelConnectionStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_E1SpanFormatQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_E1SpanFormatQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_FaultLogQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_FaultLogQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_InpulsingParametersQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_InpulsingParametersQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLCreate(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLDataQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLDataQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLProtocolQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLProtocolQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLAssign(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLAuditQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLAuditQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLAuditConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLDelete(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLEventIndication(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLEventRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLEventRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLTableDownload(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLTableDownloadAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLInitiateDownload(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLTimerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PPLTransmitSignalConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TransmitSignalingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ReceiveSignalingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TransmitToneConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TransmitCadencePatternQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TransmitCadencePatternQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TransmitToneQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TransmitToneQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ISDNCardConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ISDNFeatureRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ISDNFeatureRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DChannelDeAssign(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DChannelConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DChannelFacilityListConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResumeISDNCall(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SuspendISDNCall(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_StandbyLineCardConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LineCardSwitchover(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_E1SpanConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_J1SpanConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SystemConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SystemConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SystemConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LoopBackConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LoopBackConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecAnnDelete(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_BChannelQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_BChannelQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DChannelQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DChannelQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DChannelFacilityListQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DChannelFacilityListQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CPAConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CPAConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DSPServiceCancel(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DSPServiceRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ReleaseWithData(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TransmitCadencePatternConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7CICConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7CICQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7CICQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7ISUPMessageFormatConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7ISUPMessageQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7ISUPMessageQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7TUPMessageFormatConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7TUPMessageQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7TUPMessageQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingStackConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingStackQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingStackQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingLinkSetConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingLinkSetQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingLinkSetQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingLinkConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingLinkQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingLinkQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingRouteConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingRouteQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SS7SignalingRouteQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_WriteCfgFile(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_WriteCfgFileAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssignPanelID(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConfigureExternalAlarms(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConfigurePager(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DS3GenericMessage(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DS3GenericMessageAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SNMPConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CallDetailRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SSLConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SSLQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SSLQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AddLLCNode(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AddLLCNodeAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AddLLCCard(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AddLLCCardAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AddSS7TCAPCard(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RemoveLLCRoutingID(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RemoveLLCRoutingIDAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AddLLCTCAPNode(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AddLLCTCAPNodeAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_WatchDogRegister(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_WatchDogRegisterAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_WatchDogStatusMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConfigStatusMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_VirtualSlotConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_VirtualSpanControl(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_UpgradeQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_UpgradeQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_UpgradeDownloadBegin(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_UpgradeActivate(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_UpgradeSoftwarePatch(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_UpgradeSoftwarePatchAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AdjustMessageTimeout(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AdjustMessageTimeoutAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TCAPMessageRegister(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_TCAPMessageRegisterAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SwitchBackFromStandby(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SwitchBackFromStandbyConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SwitchBackFromStandbyAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RegisterAsRedundantApp(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RegisterAsRedundantAppAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ReselectPrimaryApp(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ReselectPrimaryAppAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RedundantAppStatusMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConfigSwitch(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ConfigSwitchAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RedundantAppPoolsQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RedundantAppPoolsQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RedundantAppPoolMembersQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RedundantAppQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RedundantAppQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ClearLog(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ClearLogAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CreateNodeGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CreateNodeGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssocNodeGroups(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AssocNodeGroupsAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AddNodeToGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_AddNodeToGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LLCQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_LLCQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_CreateConnection(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DeviceServerEx(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DeviceServerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DeviceServerQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DeviceServerQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DeviceServerStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPSocketConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPSocketQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPSocketQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_IPSocketStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GELConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GELConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ServerStatusChange(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_HostAlarm(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_HostAlarmAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ServerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ServerConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ServerQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ServerQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ServerStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ServerHostPoll(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RemoveNodeFromGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RemoveNodeFromGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GenericLLCReport(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GenericCardConfigure(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GenericCardConfigureAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_DSPCacheModify(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GenericCardQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_GenericCardQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PlayFileStart(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PlayFileStartAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PlayFileModify(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PlayFileModifyAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PlayFileStop(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_PlayFileStopAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecordFileModify(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecordFileModifyAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecordFileStop(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecordFileStopAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecordFileStart(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_RecordFileStartAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_StatisticsQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_StatisticsQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceCreate(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceCreateAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceModify(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceModifyAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceDelete(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceDeleteAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceConnect(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceConnectAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceDisconnect(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceDisconnectAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAConfigure(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAConfigureAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAConfigureQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAConfigureQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAServiceConfigure(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAServiceConfigureAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAServiceQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAServiceQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAStateQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAStateQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_NGAStateNotify(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceDeleteIndication(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceInfoNotify(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceReleaseRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceReleaseRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ResourceReleaseIndication(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SwitchMgrQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_SwitchMgrQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ReAssignChannelAck(char *error_buffer, property_t props[], int count, MsgStruct *msg);

int build_ReAssignChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg);

#endif
