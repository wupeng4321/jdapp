//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BJChoiceCouponModel, CCCMainCouponView, CCCViceCouponBeanView, CCCViceCouponNomoreView, CCCViceCouponProgressView, CCCViceCouponReceivedView, CCCViceCouponTrailerView, UIColor;

@interface CCCouponComplexCell : UITableViewCell
{
    long long currentTime;
    long long processRate;
    unsigned char timerFlag;
    BJChoiceCouponModel *_couponModel;
    CCCMainCouponView *_mainCouponView;
    CCCViceCouponReceivedView *_viceCouponReceivedView;
    CCCViceCouponTrailerView *_viceCouponTrailerView;
    CCCViceCouponProgressView *_viceCouponProgressView;
    CCCViceCouponBeanView *_viceCouponBeanView;
    CCCViceCouponNomoreView *_viceCouponNomoreView;
    CDUnknownBlockType _action;
    UIColor *_progressBackgroundColor;
}

@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) CCCViceCouponNomoreView *viceCouponNomoreView; // @synthesize viceCouponNomoreView=_viceCouponNomoreView;
@property(retain, nonatomic) CCCViceCouponBeanView *viceCouponBeanView; // @synthesize viceCouponBeanView=_viceCouponBeanView;
@property(retain, nonatomic) CCCViceCouponProgressView *viceCouponProgressView; // @synthesize viceCouponProgressView=_viceCouponProgressView;
@property(retain, nonatomic) CCCViceCouponTrailerView *viceCouponTrailerView; // @synthesize viceCouponTrailerView=_viceCouponTrailerView;
@property(retain, nonatomic) CCCViceCouponReceivedView *viceCouponReceivedView; // @synthesize viceCouponReceivedView=_viceCouponReceivedView;
@property(retain, nonatomic) CCCMainCouponView *mainCouponView; // @synthesize mainCouponView=_mainCouponView;
@property(retain, nonatomic) BJChoiceCouponModel *couponModel; // @synthesize couponModel=_couponModel;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)updateProcessRate;
- (void)updateViewWithItem:(id)arg1 categoryItem:(id)arg2 noticationAction:(CDUnknownBlockType)arg3 placeholderCellDown:(_Bool)arg4;
- (void)setCouponOriginalState;
- (void)updateViewWithItemB:(id)arg1 placeholderCellDown:(_Bool)arg2;
- (void)updateViewWithItem:(id)arg1 placeholderCellDown:(_Bool)arg2;
- (void)setupPositiveView;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

