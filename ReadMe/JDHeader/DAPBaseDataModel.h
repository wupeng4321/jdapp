//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DAPModel.h"

@class NSString;

@interface DAPBaseDataModel : DAPModel
{
    NSString *_sdkName;
    NSString *_sdkVersion;
    NSString *_UUID;
    NSString *_userIdIdentifer;
    NSString *_sessionKey;
    NSString *_mode;
    NSString *_quickPassDeviceToken;
    NSString *_createTime;
    NSString *_netType;
    NSString *_carrier;
    NSString *_locationCoordinate;
}

@property(copy, nonatomic) NSString *locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property(copy, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(copy, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *quickPassDeviceToken; // @synthesize quickPassDeviceToken=_quickPassDeviceToken;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(copy, nonatomic) NSString *userIdIdentifer; // @synthesize userIdIdentifer=_userIdIdentifer;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *sdkName; // @synthesize sdkName=_sdkName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

