//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, ShareOrderCommentSuccessInfoModel, ShareOrderShareGiftModel;

@protocol ShareOrderPublishOrderManagerDelegate <NSObject>
- (void)ShareOrderPublishKeyword;
- (void)processShieldList:(NSArray *)arg1 imageShieldList:(NSArray *)arg2;
- (void)ShareOrderPublishOrderNetWorkStatus:(NSString *)arg1 withMessage:(NSString *)arg2 shareGiftInfo:(ShareOrderShareGiftModel *)arg3 successInfo:(ShareOrderCommentSuccessInfoModel *)arg4;
@end
