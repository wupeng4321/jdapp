//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol WJLoginVerifySlideAndPhoneProtocol <NSObject>

@optional
- (void)onVerifySlideAndPhoneError:(NSError *)arg1;
- (void)onVerifySlideAndPhoneFailed:(int)arg1 errorMessage:(NSString *)arg2 expireTime:(int)arg3 limitTime:(int)arg4 pin:(NSString *)arg5 imageURL:(NSString *)arg6;
- (void)onVerifySlideAndPhoneSuccess;
@end

