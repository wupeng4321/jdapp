//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, ShareInfoModel, UIWebView;

@protocol JDSHNavItemViewShareDelegate <NSObject>

@optional
- (void)shareWithInfo:(ShareInfoModel *)arg1 channelParams:(NSArray *)arg2 webView:(UIWebView *)arg3;
- (void)shareWithInfo:(ShareInfoModel *)arg1;
@end
