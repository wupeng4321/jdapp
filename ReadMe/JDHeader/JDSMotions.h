//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, NSString;

@interface JDSMotions : NSObject
{
    CMMotionManager *_motionManager;
    NSString *_accelerationCacheString;
    NSString *_gyroCacheString;
}

+ (id)magnetometer;
+ (id)gravity;
+ (id)acceleration;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *gyroCacheString; // @synthesize gyroCacheString=_gyroCacheString;
@property(copy, nonatomic) NSString *accelerationCacheString; // @synthesize accelerationCacheString=_accelerationCacheString;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (id)init;
- (void)stopMotionDetect;

@end
