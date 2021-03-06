//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JCapVerifyProtocol-Protocol.h"

@class JCapVerify, NSString;

@interface JDReactCapVerify : UIView <JCapVerifyProtocol>
{
    _Bool _isShowLoading;
    NSString *_sessionId;
    CDUnknownBlockType _onSessionExpried;
    CDUnknownBlockType _onCheckSuccess;
    JCapVerify *_verify;
}

@property(retain, nonatomic) JCapVerify *verify; // @synthesize verify=_verify;
@property(copy, nonatomic) CDUnknownBlockType onCheckSuccess; // @synthesize onCheckSuccess=_onCheckSuccess;
@property(copy, nonatomic) CDUnknownBlockType onSessionExpried; // @synthesize onSessionExpried=_onSessionExpried;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isShowLoading; // @synthesize isShowLoading=_isShowLoading;
- (void).cxx_destruct;
- (_Bool)JCapVerifySmartViewCanTouch;
- (void)JCapVerifyDefaultSmartLoading:(id)arg1;
- (void)JCapVerifySessionExpried;
- (void)JCapVerifyCheckSuccess:(id)arg1;
- (void)JCapVerifyAskViewSuccess:(id)arg1;
- (void)reset;
- (void)close;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

