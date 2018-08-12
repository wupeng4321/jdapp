//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDFootMarkShopModel, JDNewDynamicCell, JDShopDynamicActivityModel, NSArray, NSString;

@protocol JDNewDynamicCellDelegate <NSObject>

@optional
- (void)showBuyerShowWithActivity:(JDShopDynamicActivityModel *)arg1 frameArray:(NSArray *)arg2 positon:(long long)arg3 dynamicCell:(JDNewDynamicCell *)arg4;
- (void)refreshCellFrame;
- (void)downArrowBtnClick:(JDFootMarkShopModel *)arg1;
- (void)followedBtnClick:(JDFootMarkShopModel *)arg1;
- (void)turnToTopicDynamicView:(JDShopDynamicActivityModel *)arg1;
- (void)turnToLiveView:(JDFootMarkShopModel *)arg1;
- (void)turnToDynamicSetView:(JDFootMarkShopModel *)arg1;
- (void)turnToActivityWebView:(JDFootMarkShopModel *)arg1;
- (void)likeButtonClicked:(JDFootMarkShopModel *)arg1 isLike:(_Bool)arg2;
- (void)turnToShopSignView:(JDFootMarkShopModel *)arg1;
- (void)receiveCoupon:(JDFootMarkShopModel *)arg1;
- (void)commentButtonClicked:(JDFootMarkShopModel *)arg1;
- (void)turnToWareInfoView:(JDFootMarkShopModel *)arg1 wareId:(NSString *)arg2 pos:(long long)arg3;
- (void)turnToDynamicLandingView:(JDFootMarkShopModel *)arg1;
- (void)closeButtonClicked:(JDFootMarkShopModel *)arg1;
- (void)turnToShopHomeView:(JDFootMarkShopModel *)arg1;
@end

