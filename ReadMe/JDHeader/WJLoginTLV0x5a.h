//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJLoginTLVBase.h"

@class NSString;

@interface WJLoginTLV0x5a : WJLoginTLVBase
{
    short _modelLen;
    short _imeiLen;
    short _macAddressLen;
    short _openUDIDLen;
    short _IDFALen;
    short _ipLen;
    short _localIpLen;
    short _uuidLen;
    short _appIdLen;
    short _channelInfoLen;
    short _countryLen;
    short _provinceLen;
    short _cityLen;
    short _clientVersionLen;
    short _deviceTypeLen;
    short _latitudeLen;
    short _longitudeLen;
    short _networkTypeLen;
    short _osPlatformLen;
    short _osVersionLen;
    short _resolutionLen;
    short _reserveLen;
    int _startNo;
    int _terminalType_face;
    NSString *_model;
    NSString *_imei;
    NSString *_macAddress;
    NSString *_openUDID;
    NSString *_IDFA;
    NSString *_ip;
    NSString *_localIp;
    NSString *_uuid_android;
    NSString *_appId;
    NSString *_channelInfo;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_clientVersion;
    NSString *_deviceType;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_networkType;
    NSString *_osPlatform;
    NSString *_osVersion;
    NSString *_resolution;
    NSString *_reserve;
}

@property(copy, nonatomic) NSString *reserve; // @synthesize reserve=_reserve;
@property(nonatomic) short reserveLen; // @synthesize reserveLen=_reserveLen;
@property(nonatomic) int terminalType_face; // @synthesize terminalType_face=_terminalType_face;
@property(nonatomic) int startNo; // @synthesize startNo=_startNo;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(nonatomic) short resolutionLen; // @synthesize resolutionLen=_resolutionLen;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(nonatomic) short osVersionLen; // @synthesize osVersionLen=_osVersionLen;
@property(copy, nonatomic) NSString *osPlatform; // @synthesize osPlatform=_osPlatform;
@property(nonatomic) short osPlatformLen; // @synthesize osPlatformLen=_osPlatformLen;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) short networkTypeLen; // @synthesize networkTypeLen=_networkTypeLen;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(nonatomic) short longitudeLen; // @synthesize longitudeLen=_longitudeLen;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) short latitudeLen; // @synthesize latitudeLen=_latitudeLen;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) short deviceTypeLen; // @synthesize deviceTypeLen=_deviceTypeLen;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) short clientVersionLen; // @synthesize clientVersionLen=_clientVersionLen;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) short cityLen; // @synthesize cityLen=_cityLen;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(nonatomic) short provinceLen; // @synthesize provinceLen=_provinceLen;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) short countryLen; // @synthesize countryLen=_countryLen;
@property(copy, nonatomic) NSString *channelInfo; // @synthesize channelInfo=_channelInfo;
@property(nonatomic) short channelInfoLen; // @synthesize channelInfoLen=_channelInfoLen;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) short appIdLen; // @synthesize appIdLen=_appIdLen;
@property(copy, nonatomic) NSString *uuid_android; // @synthesize uuid_android=_uuid_android;
@property(nonatomic) short uuidLen; // @synthesize uuidLen=_uuidLen;
@property(copy, nonatomic) NSString *localIp; // @synthesize localIp=_localIp;
@property(nonatomic) short localIpLen; // @synthesize localIpLen=_localIpLen;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(nonatomic) short ipLen; // @synthesize ipLen=_ipLen;
@property(copy, nonatomic) NSString *IDFA; // @synthesize IDFA=_IDFA;
@property(nonatomic) short IDFALen; // @synthesize IDFALen=_IDFALen;
@property(copy, nonatomic) NSString *openUDID; // @synthesize openUDID=_openUDID;
@property(nonatomic) short openUDIDLen; // @synthesize openUDIDLen=_openUDIDLen;
@property(copy, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
@property(nonatomic) short macAddressLen; // @synthesize macAddressLen=_macAddressLen;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(nonatomic) short imeiLen; // @synthesize imeiLen=_imeiLen;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) short modelLen; // @synthesize modelLen=_modelLen;
- (void).cxx_destruct;
- (unsigned long long)getTLVLength;
- (int)encodeWithBuffer:(id)arg1;
- (void)fillTLVWithTLVInfo:(id)arg1;

@end

