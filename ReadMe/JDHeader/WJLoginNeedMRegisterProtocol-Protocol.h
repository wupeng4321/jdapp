//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol WJLoginNeedMRegisterProtocol <NSObject>

@optional
- (void)onNeedMRegisterEnterPriseRegisterWithJumpurl:(NSString *)arg1;
- (void)onNeedMRegisterError:(NSError *)arg1;
- (void)onNeedMRegisterfail;
- (void)onNeedMRegisterSuccessWithJumpurl:(NSString *)arg1;
@end
