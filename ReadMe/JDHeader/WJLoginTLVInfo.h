//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface WJLoginTLVInfo : NSObject <NSCopying>
{
    unsigned char _status;
    _Bool _isInternational;
    _Bool _refreshAuthCode;
    unsigned char _replyCode;
    unsigned char _type;
    unsigned char _cReportType;
    short _len;
    short _mainCmd;
    short _subCmd;
    short _headerVersion;
    short _guidVersion;
    short _terminalType;
    short _dbBufVer;
    short _appID;
    short _regType;
    short _isAgree;
    int _len_int;
    int _partion;
    int _seq;
    int _clientIP;
    int _osVer;
    int _getSig;
    int _elapsedTime;
    int _isNeedFigureUrl;
    int _startNo;
    int _terminalType_face;
    int _switchStatus;
    int _expirationDate_fb;
    int _refreshDate_fb;
    long long _uid;
    NSString *_account;
    NSString *_password;
    NSString *_guid;
    NSString *_strHexVerAndGUID;
    NSString *_clientType;
    NSString *_clientOSVersion;
    NSString *_appClientVer;
    NSString *_screen;
    NSString *_appName;
    NSString *_networkType;
    NSString *_area;
    NSString *_uuid;
    NSString *_sdkVersion;
    NSString *_build;
    NSString *_partner;
    NSData *_tgtA2;
    NSString *_pin;
    NSString *_token;
    NSString *_encryptKey;
    NSString *_authCode;
    NSString *_appToH5Url;
    NSString *_phoneNumber;
    NSString *_messagePwd;
    NSString *_wxCode;
    NSString *_qqAccessToken;
    NSString *_qqOpenID;
    NSString *_qrCodeKey;
    NSString *_tips;
    NSString *_buttionTips;
    NSString *_medicalPassword;
    NSString *_whwswswws;
    NSString *_deviceName;
    NSString *_deviceModel;
    NSString *_deviceBrand;
    NSString *_deviceReserve;
    NSString *_countryDistrictCode;
    NSString *_imageURL;
    NSString *_appSignture;
    NSString *_url;
    NSString *_model;
    NSString *_macAddress;
    NSString *_openUDID;
    NSString *_IDFA;
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
    NSString *_osPlatform;
    NSString *_osVersion;
    NSString *_resolution;
    NSString *_reserve;
    NSString *_faceVerificationData;
    NSString *_JDTDID;
    NSString *_EID;
    NSString *_FP;
    NSString *_reserve_0x65;
    NSString *_picKey;
    NSString *_countryType;
    NSString *_appID_fb;
    NSString *_declinedPermissions_fb;
    NSString *_permissions_fb;
    NSString *_token_fb;
    NSString *_userID_fb;
    NSString *_realName;
    NSString *_sid;
    NSString *_histroryName;
    NSString *_enEmail;
    NSString *_enPin;
}

@property(retain, nonatomic) NSString *enPin; // @synthesize enPin=_enPin;
@property(retain, nonatomic) NSString *enEmail; // @synthesize enEmail=_enEmail;
@property(copy, nonatomic) NSString *histroryName; // @synthesize histroryName=_histroryName;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(nonatomic) short isAgree; // @synthesize isAgree=_isAgree;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(nonatomic) unsigned char cReportType; // @synthesize cReportType=_cReportType;
@property(nonatomic) short regType; // @synthesize regType=_regType;
@property(nonatomic) int refreshDate_fb; // @synthesize refreshDate_fb=_refreshDate_fb;
@property(nonatomic) int expirationDate_fb; // @synthesize expirationDate_fb=_expirationDate_fb;
@property(copy, nonatomic) NSString *userID_fb; // @synthesize userID_fb=_userID_fb;
@property(copy, nonatomic) NSString *token_fb; // @synthesize token_fb=_token_fb;
@property(copy, nonatomic) NSString *permissions_fb; // @synthesize permissions_fb=_permissions_fb;
@property(copy, nonatomic) NSString *declinedPermissions_fb; // @synthesize declinedPermissions_fb=_declinedPermissions_fb;
@property(copy, nonatomic) NSString *appID_fb; // @synthesize appID_fb=_appID_fb;
@property(retain, nonatomic) NSString *countryType; // @synthesize countryType=_countryType;
@property(copy, nonatomic) NSString *picKey; // @synthesize picKey=_picKey;
@property(copy, nonatomic) NSString *reserve_0x65; // @synthesize reserve_0x65=_reserve_0x65;
@property(copy, nonatomic) NSString *FP; // @synthesize FP=_FP;
@property(copy, nonatomic) NSString *EID; // @synthesize EID=_EID;
@property(copy, nonatomic) NSString *JDTDID; // @synthesize JDTDID=_JDTDID;
@property(copy, nonatomic) NSString *faceVerificationData; // @synthesize faceVerificationData=_faceVerificationData;
@property(nonatomic) int switchStatus; // @synthesize switchStatus=_switchStatus;
@property(copy, nonatomic) NSString *reserve; // @synthesize reserve=_reserve;
@property(nonatomic) int terminalType_face; // @synthesize terminalType_face=_terminalType_face;
@property(nonatomic) int startNo; // @synthesize startNo=_startNo;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *osPlatform; // @synthesize osPlatform=_osPlatform;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *channelInfo; // @synthesize channelInfo=_channelInfo;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *uuid_android; // @synthesize uuid_android=_uuid_android;
@property(copy, nonatomic) NSString *IDFA; // @synthesize IDFA=_IDFA;
@property(copy, nonatomic) NSString *openUDID; // @synthesize openUDID=_openUDID;
@property(copy, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *appSignture; // @synthesize appSignture=_appSignture;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) int isNeedFigureUrl; // @synthesize isNeedFigureUrl=_isNeedFigureUrl;
@property(copy, nonatomic) NSString *countryDistrictCode; // @synthesize countryDistrictCode=_countryDistrictCode;
@property(copy, nonatomic) NSString *deviceReserve; // @synthesize deviceReserve=_deviceReserve;
@property(copy, nonatomic) NSString *deviceBrand; // @synthesize deviceBrand=_deviceBrand;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *whwswswws; // @synthesize whwswswws=_whwswswws;
@property(copy, nonatomic) NSString *medicalPassword; // @synthesize medicalPassword=_medicalPassword;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *buttionTips; // @synthesize buttionTips=_buttionTips;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *qrCodeKey; // @synthesize qrCodeKey=_qrCodeKey;
@property(copy, nonatomic) NSString *qqOpenID; // @synthesize qqOpenID=_qqOpenID;
@property(copy, nonatomic) NSString *qqAccessToken; // @synthesize qqAccessToken=_qqAccessToken;
@property(copy, nonatomic) NSString *wxCode; // @synthesize wxCode=_wxCode;
@property(copy, nonatomic) NSString *messagePwd; // @synthesize messagePwd=_messagePwd;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *appToH5Url; // @synthesize appToH5Url=_appToH5Url;
@property(nonatomic) unsigned char replyCode; // @synthesize replyCode=_replyCode;
@property(nonatomic) int elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) _Bool refreshAuthCode; // @synthesize refreshAuthCode=_refreshAuthCode;
@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) NSData *tgtA2; // @synthesize tgtA2=_tgtA2;
@property(nonatomic) _Bool isInternational; // @synthesize isInternational=_isInternational;
@property(copy, nonatomic) NSString *partner; // @synthesize partner=_partner;
@property(copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(nonatomic) int getSig; // @synthesize getSig=_getSig;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *screen; // @synthesize screen=_screen;
@property(copy, nonatomic) NSString *appClientVer; // @synthesize appClientVer=_appClientVer;
@property(copy, nonatomic) NSString *clientOSVersion; // @synthesize clientOSVersion=_clientOSVersion;
@property(copy, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
@property(nonatomic) short appID; // @synthesize appID=_appID;
@property(nonatomic) short dbBufVer; // @synthesize dbBufVer=_dbBufVer;
@property(copy, nonatomic) NSString *strHexVerAndGUID; // @synthesize strHexVerAndGUID=_strHexVerAndGUID;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) int osVer; // @synthesize osVer=_osVer;
@property(nonatomic) short terminalType; // @synthesize terminalType=_terminalType;
@property(nonatomic) short guidVersion; // @synthesize guidVersion=_guidVersion;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(nonatomic) short headerVersion; // @synthesize headerVersion=_headerVersion;
@property(nonatomic) short subCmd; // @synthesize subCmd=_subCmd;
@property(nonatomic) short mainCmd; // @synthesize mainCmd=_mainCmd;
@property(nonatomic) int clientIP; // @synthesize clientIP=_clientIP;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) int partion; // @synthesize partion=_partion;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) int len_int; // @synthesize len_int=_len_int;
@property(nonatomic) short len; // @synthesize len=_len;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

