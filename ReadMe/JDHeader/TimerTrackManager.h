//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TimerTrackManager : NSObject
{
    NSMutableDictionary *_timerTrackModels;
    NSObject<OS_dispatch_queue> *serialQueue;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedTimerTrackManager;
- (void)endTaskSignWithKey:(id)arg1 modelKey:(id)arg2;
- (void)startTaskSignKey:(id)arg1 modelKey:(id)arg2;
- (void)registerModel:(id)arg1 timeOut:(double)arg2;
- (void)timeTrackDone:(id)arg1;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

