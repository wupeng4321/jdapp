//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WJLoginResponseInfo : NSObject
{
    unsigned char _status;
    unsigned char _type;
    short _TLV;
    short _len;
    short _mainCmd;
    short _subCmd;
    short _appID;
    short _headerVersion;
    short _errorVersion;
    short _errorCode;
    short _specialSwitch;
    short _eggsSwitch;
    int _len_int;
    int _partion;
    int _clientIP;
    int _seq;
    int _refreshInterval;
    int _expiredInterval;
    int _limitTime;
    int _messagePwdExpireTime;
    int _size;
    int _switchStatus;
    NSData *_unusedData;
    long long _uid;
    NSString *_internalError;
    NSString *_errorMessage;
    NSData *_tgtA2;
    NSString *_encryptKey;
    NSData *_picData;
    NSString *_pin;
    NSString *_tokenString;
    NSData *_token;
    NSString *_appToH5Url;
    NSString *_account;
    NSString *_phoneNumber;
    NSString *_welcomeUrl;
    NSString *_tips;
    NSString *_buttionTips;
    NSString *_countryDistrictCodeList;
    NSString *_imageURL;
    NSString *_sid;
    NSString *_histroryName;
    NSString *_enEmail;
    NSString *_enPin;
}

@property(retain, nonatomic) NSString *enPin; // @synthesize enPin=_enPin;
@property(retain, nonatomic) NSString *enEmail; // @synthesize enEmail=_enEmail;
@property(copy, nonatomic) NSString *histroryName; // @synthesize histroryName=_histroryName;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(nonatomic) short eggsSwitch; // @synthesize eggsSwitch=_eggsSwitch;
@property(nonatomic) short specialSwitch; // @synthesize specialSwitch=_specialSwitch;
@property(nonatomic) int switchStatus; // @synthesize switchStatus=_switchStatus;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *countryDistrictCodeList; // @synthesize countryDistrictCodeList=_countryDistrictCodeList;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *buttionTips; // @synthesize buttionTips=_buttionTips;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *welcomeUrl; // @synthesize welcomeUrl=_welcomeUrl;
@property(nonatomic) int messagePwdExpireTime; // @synthesize messagePwdExpireTime=_messagePwdExpireTime;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *appToH5Url; // @synthesize appToH5Url=_appToH5Url;
@property(nonatomic) int limitTime; // @synthesize limitTime=_limitTime;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) NSData *picData; // @synthesize picData=_picData;
@property(copy, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(nonatomic) int expiredInterval; // @synthesize expiredInterval=_expiredInterval;
@property(nonatomic) int refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSData *tgtA2; // @synthesize tgtA2=_tgtA2;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSString *internalError; // @synthesize internalError=_internalError;
@property(nonatomic) short errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) short errorVersion; // @synthesize errorVersion=_errorVersion;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(nonatomic) short headerVersion; // @synthesize headerVersion=_headerVersion;
@property(nonatomic) short appID; // @synthesize appID=_appID;
@property(nonatomic) short subCmd; // @synthesize subCmd=_subCmd;
@property(nonatomic) short mainCmd; // @synthesize mainCmd=_mainCmd;
@property(nonatomic) int clientIP; // @synthesize clientIP=_clientIP;
@property(nonatomic) int partion; // @synthesize partion=_partion;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) int len_int; // @synthesize len_int=_len_int;
@property(nonatomic) short len; // @synthesize len=_len;
@property(nonatomic) short TLV; // @synthesize TLV=_TLV;
@property(retain, nonatomic) NSData *unusedData; // @synthesize unusedData=_unusedData;
- (void).cxx_destruct;

@end

