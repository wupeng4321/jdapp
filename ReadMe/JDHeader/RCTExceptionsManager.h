//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTExceptionsManagerDelegate;

@interface RCTExceptionsManager : NSObject <RCTBridgeModule>
{
    id <RCTExceptionsManagerDelegate> _delegate;
    RCTBridge *_bridge;
    unsigned long long _maxReloadAttempts;
}

+ (id)__rct_export__803;
+ (id)__rct_export__692;
+ (id)__rct_export__481;
+ (id)__rct_export__370;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) unsigned long long maxReloadAttempts; // @synthesize maxReloadAttempts=_maxReloadAttempts;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)reportUnhandledException:(id)arg1 stack:(id)arg2;
- (void)updateExceptionMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)reportFatalException:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)reportSoftException:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

