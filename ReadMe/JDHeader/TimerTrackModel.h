//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableDictionary, NSString, NSTimer;

@interface TimerTrackModel : JDModel
{
    NSMutableDictionary *_tasks;
    NSString *_modelKey;
    NSString *_taskKey;
    double _firstStartTime;
    double _timeOut;
    double _timestamp;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double timeOut; // @synthesize timeOut=_timeOut;
@property(nonatomic) double firstStartTime; // @synthesize firstStartTime=_firstStartTime;
@property(copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
@property(copy, nonatomic) NSString *modelKey; // @synthesize modelKey=_modelKey;
- (unsigned long long)getTaskCount;
- (void)removeAllTasks;
- (void)removeTaskSignWithKey:(id)arg1;
- (id)getTaskSignWithKey:(id)arg1;
- (void)addTaskSign:(id)arg1 key:(id)arg2;
- (void)stopTimer;
- (void)startRecord;
- (void)timeOutFired:(id)arg1;
- (void)dealloc;

@end
