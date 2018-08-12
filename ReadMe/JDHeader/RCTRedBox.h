//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTRedBox : NSObject <RCTBridgeModule>
{
}

+ (id)moduleName;
- (void)dismiss;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2 isUpdate:(_Bool)arg3;
- (void)updateErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withRawStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withDetails:(id)arg2;
- (void)showErrorMessage:(id)arg1;
- (void)showError:(id)arg1;
- (void)registerErrorCustomizer:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

