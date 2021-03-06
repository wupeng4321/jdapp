//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBLocationManager, NSString;

@interface JDPDeviceUtils : NSObject
{
    CBLocationManager *_locationManager;
    NSString *_idfa;
    NSString *_appIdentifier;
    NSString *_clientVersion;
    NSString *_buildVersion;
    NSString *_deviceType;
    NSString *_osPlatform;
    NSString *_osVersion;
    NSString *_resolution;
    NSString *_idfv;
    NSString *_deviceId;
    NSString *_carrier;
    struct CLLocationCoordinate2D _locationCoordinate2D;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedUtils;
@property(copy, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *idfv; // @synthesize idfv=_idfv;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *osPlatform; // @synthesize osPlatform=_osPlatform;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(copy, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(nonatomic) struct CLLocationCoordinate2D locationCoordinate2D; // @synthesize locationCoordinate2D=_locationCoordinate2D;
@property(retain, nonatomic) CBLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (id)getBasicDeviceInfo;
- (id)getCarrier;
- (id)encryptLocationString;
- (struct CLLocationCoordinate2D)locationCoordinate;
- (id)getCurrentTimeStamp;
- (id)randomStringWithLength:(int)arg1;
- (id)deviceName;
- (id)openUDID;
- (id)networkType;
- (id)realNameVersion;
- (id)clientName;
- (id)init;

@end

