//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BJMarketCouponModel, CCCMainCouponView, CCCMarketViceCouponBeanView, CCCMarketViceCouponReceivedView, CCMarketCouponViewModel, UIButton, UIColor, UIImageView, UILabel;

@interface CCCMarketCouponCell : UITableViewCell
{
    UIButton *_backgroudndImageView;
    UIImageView *_iconImageView;
    UILabel *_assignmentPeopleNum;
    CCCMainCouponView *_mainCouponView;
    CCCMarketViceCouponReceivedView *_viceCouponReceivedView;
    CCCMarketViceCouponBeanView *_viceCouponBeanView;
    BJMarketCouponModel *_couponModel;
    CDUnknownBlockType _receive;
    UIColor *_progressBackgroundColor;
    CCMarketCouponViewModel *_viewModel;
}

@property(retain, nonatomic) CCMarketCouponViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(copy, nonatomic) CDUnknownBlockType receive; // @synthesize receive=_receive;
@property(retain, nonatomic) BJMarketCouponModel *couponModel; // @synthesize couponModel=_couponModel;
@property(retain, nonatomic) CCCMarketViceCouponBeanView *viceCouponBeanView; // @synthesize viceCouponBeanView=_viceCouponBeanView;
@property(retain, nonatomic) CCCMarketViceCouponReceivedView *viceCouponReceivedView; // @synthesize viceCouponReceivedView=_viceCouponReceivedView;
@property(retain, nonatomic) CCCMainCouponView *mainCouponView; // @synthesize mainCouponView=_mainCouponView;
@property(retain, nonatomic) UILabel *assignmentPeopleNum; // @synthesize assignmentPeopleNum=_assignmentPeopleNum;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *backgroudndImageView; // @synthesize backgroudndImageView=_backgroudndImageView;
- (void).cxx_destruct;
- (void)setCouponOriginalState;
- (void)receiveCouponAction:(id)arg1;
- (void)updateViewWithItemB:(id)arg1 receiveAction:(CDUnknownBlockType)arg2;
- (void)updateViewWithItem:(id)arg1 receiveAction:(CDUnknownBlockType)arg2;
- (void)setupContentViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

