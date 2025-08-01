﻿#ifndef IDEVICECALLBACK_H
#define IDEVICECALLBACK_H

#include	"CrDefines.h"

namespace SCRSDK
{

class IDeviceCallback
{
public:
	virtual void OnConnected(DeviceConnectionVersioin version) { }

	virtual void OnDisconnected(CrInt32u error) { }

	virtual void OnPropertyChanged() { }

	virtual void OnPropertyChangedCodes(CrInt32u num, CrInt32u* codes) { }

	virtual void OnLvPropertyChanged() { }

	virtual void OnLvPropertyChangedCodes(CrInt32u num, CrInt32u* codes) { }

	virtual void OnCompleteDownload(CrChar* filename, CrInt32u type = 0xFFFFFFFF) { }

	virtual void OnNotifyContentsTransfer(CrInt32u notify, CrContentHandle handle, CrChar* filename = 0) { }

	virtual void OnWarning(CrInt32u warning) { }

	virtual void OnWarningExt(CrInt32u warning, CrInt32 param1, CrInt32 param2, CrInt32 param3) { }

	virtual void OnError(CrInt32u error) { }

	virtual void OnNotifyFTPTransferResult(CrInt32u notify, CrInt32u numOfSuccess, CrInt32u numOfFail) { }

	virtual void OnNotifyRemoteTransferResult(CrInt32u notify, CrInt32u per, CrChar* filename) { }

	virtual void OnNotifyRemoteTransferResult(CrInt32u notify, CrInt32u per, CrInt8u* data, CrInt64u size) { }

	virtual void OnNotifyRemoteTransferContentsListChanged(CrInt32u notify, CrInt32u slotNumber, CrInt32u addSize) { }

	virtual void OnNotifyRemoteFirmwareUpdateResult(CrInt32u notify, const void* param) { }

	virtual void OnReceivePlaybackTimeCode(CrInt32u timeCode) { }

	virtual void OnReceivePlaybackData(CrInt8u mediaType, CrInt32 dataSize, CrInt8u* data, CrInt64 pts, CrInt64 dts, CrInt32 param1, CrInt32 param2) { }

	virtual void OnNotifyMonitorUpdated(CrInt32u type, CrInt32u frameNo) { }

};

}// namespace SCRSDK

#endif // IDEVICECALLBACK_H
