//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ShareToChannelEventHandler : NSObject
{
}

+ (int)hashData:(char *)arg1 andOffset:(int)arg2 andLength:(int)arg3 andSeed:(int)arg4;
+ (int)deviceIdHash:(id)arg1;
+ (int)takeMoldForDevice:(id)arg1;
+ (_Bool)hasPlusMemberShare;
+ (id)reBuildShareAppletsPath:(id)arg1;
+ (void)shareIncentiveToQQWithModel:(id)arg1 qqType:(id)arg2;
+ (void)shareIncentiveToWechatWithModel:(id)arg1 wechatType:(id)arg2;
+ (void)shareToSinaWeiboWithImage:(id)arg1;
+ (void)shareToQQWithImage:(id)arg1;
+ (void)shareToWechatWithImage:(id)arg1 wechatType:(long long)arg2;
+ (void)shareCopyURL:(id)arg1;
+ (void)shareOnsiteWithModel:(id)arg1;
+ (void)shareToQQWithModel:(id)arg1 qqType:(id)arg2;
+ (id)pictureClipping:(id)arg1 length:(long long)arg2 sizeProportion:(double)arg3;
+ (void)shareToWechatWithModel:(id)arg1 wechatType:(id)arg2;
+ (void)shareToSinaWeiboWithModel:(id)arg1;

@end

