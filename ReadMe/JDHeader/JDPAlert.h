//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface JDPAlert : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _cancelButtonBlock;
    CDUnknownBlockType _otherButtonBlock;
}

+ (id)sharedAlert;
@property(copy, nonatomic) CDUnknownBlockType otherButtonBlock; // @synthesize otherButtonBlock=_otherButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonBlock; // @synthesize cancelButtonBlock=_cancelButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)appRootViewController;
- (void)showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 tapBlock:(CDUnknownBlockType)arg5;
- (void)showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 cancelButtonBlock:(CDUnknownBlockType)arg4 otherButtonTitle:(id)arg5 otherButtonBlock:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

