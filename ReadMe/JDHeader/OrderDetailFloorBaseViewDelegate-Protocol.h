//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, OrderDetailInfoModel, OrderWareModel;

@protocol OrderDetailFloorBaseViewDelegate <NSObject>
- (void)refreshOrderForTimeInvalide;
- (void)handleBusiLogic:(int)arg1 paramStr:(NSString *)arg2;
- (void)handleBusiLogic:(int)arg1 wareModel:(OrderWareModel *)arg2 param:(NSDictionary *)arg3;
- (void)handleBusiLogic:(int)arg1 dictionary:(NSDictionary *)arg2;
- (void)handleBusiLogic:(int)arg1 model:(OrderDetailInfoModel *)arg2;
- (void)jumpToViewWithUrl:(NSString *)arg1 type:(int)arg2 isNeedRefresh:(_Bool)arg3;
@end

