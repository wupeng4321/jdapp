//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol JDRVCRefreshAuthDelegate <NSObject>
- (void)RASuccessWithContent:(NSString *)arg1 authWay:(int)arg2 userMsg1:(NSString *)arg3 userMsg2:(NSString *)arg4;
- (void)RAShowInstantToastWithMsg:(NSString *)arg1 resultCode:(int)arg2;
- (void)RANeedLoginWithMsg:(NSString *)arg1;
@end

