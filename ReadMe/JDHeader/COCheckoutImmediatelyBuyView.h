//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDContentItem.h"

@class COCheckoutImmediatelyBuyBannerModel, COCheckoutImmediatelyBuyCountDownTimeView, COCheckoutImmediatelyBuyCountModel, COCheckoutImmediatelyBuyHistoryView, COCheckoutImmediatelyBuyOnlyOneItemView, COCheckoutImmediatelyBuyProgressBarView;

@interface COCheckoutImmediatelyBuyView : JDContentItem
{
    COCheckoutImmediatelyBuyBannerModel *_model;
    COCheckoutImmediatelyBuyCountDownTimeView *_countDownTimeView;
    COCheckoutImmediatelyBuyHistoryView *_historyView;
    COCheckoutImmediatelyBuyProgressBarView *_progressBarView;
    COCheckoutImmediatelyBuyOnlyOneItemView *_secKillView;
    long long _type;
    COCheckoutImmediatelyBuyCountModel *_countModel;
}

@property(retain, nonatomic) COCheckoutImmediatelyBuyCountModel *countModel; // @synthesize countModel=_countModel;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) COCheckoutImmediatelyBuyOnlyOneItemView *secKillView; // @synthesize secKillView=_secKillView;
@property(retain, nonatomic) COCheckoutImmediatelyBuyProgressBarView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) COCheckoutImmediatelyBuyHistoryView *historyView; // @synthesize historyView=_historyView;
@property(retain, nonatomic) COCheckoutImmediatelyBuyCountDownTimeView *countDownTimeView; // @synthesize countDownTimeView=_countDownTimeView;
@property(retain, nonatomic) COCheckoutImmediatelyBuyBannerModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (long long)getViewCount;
- (void)setAllViewsFrame;
- (void)getAllViews;
- (void)updateUi;
- (void)setBackground;
- (id)init;

@end

