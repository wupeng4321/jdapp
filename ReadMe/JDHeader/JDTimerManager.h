//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSTimer;

@interface JDTimerManager : NSObject
{
    NSHashTable *_containerManger;
    NSTimer *_timer;
}

+ (id)sharedTimerManager;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSHashTable *containerManger; // @synthesize containerManger=_containerManger;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

