//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTEventDispatcher : NSObject <RCTBridgeModule>
{
    NSLock *_eventQueueLock;
    NSMutableDictionary *_events;
    NSMutableArray *_eventQueue;
    _Bool _eventsDispatchScheduled;
    NSMutableArray *_observers;
    NSLock *_observersLock;
    RCTBridge *_bridge;
}

+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)flushEventsQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)dispatchEvent:(id)arg1;
- (void)removeDispatchObserver:(id)arg1;
- (void)addDispatchObserver:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendTextEventWithType:(long long)arg1 reactTag:(id)arg2 text:(id)arg3 key:(id)arg4 eventCount:(long long)arg5;
- (void)sendInputEventWithName:(id)arg1 body:(id)arg2;
- (void)sendDeviceEventWithName:(id)arg1 body:(id)arg2;
- (void)sendAppEventWithName:(id)arg1 body:(id)arg2;
- (void)setBridge:(id)arg1;
- (void)sendFakeScrollEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

