//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol JDRVCIsAllowAccessDelegate <NSObject>
- (void)IAAUpMessageWithPhoneNumber:(NSString *)arg1 userMsg1:(NSString *)arg2 userMsg2:(NSString *)arg3;
- (void)IAADownMessageWithPhoneNumber:(NSString *)arg1 userMsg1:(NSString *)arg2 userMsg2:(NSString *)arg3;
- (void)IAAVoiceVerificationWithPhoneNumber:(NSString *)arg1 userMsg1:(NSString *)arg2 userMsg2:(NSString *)arg3;
- (void)IAAShowQuestion:(NSString *)arg1 msg:(NSString *)arg2;
- (void)IAAShowCaptcha:(NSString *)arg1;
- (void)IAANeedLogoutWithMsg:(NSString *)arg1;
- (void)IAANeedLoginWithMsg:(NSString *)arg1;
- (void)IAAShowInstantToastWithMsg:(NSString *)arg1 resultCode:(int)arg2;
@end
