//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BJWelfareCouponModel, UIImageView, UILabel;

@interface CCCouponWelfareCollectionView : UIView
{
    UIImageView *_bgView;
    UILabel *_couponFacelValueLabel;
    UILabel *_couponUseConditionLabel;
    UILabel *_couponLimitDescriptionLabel;
    UIImageView *_receiveBtn;
    CDUnknownBlockType _receiveCouponBlock;
    BJWelfareCouponModel *_item;
}

@property(retain, nonatomic) BJWelfareCouponModel *item; // @synthesize item=_item;
@property(copy, nonatomic) CDUnknownBlockType receiveCouponBlock; // @synthesize receiveCouponBlock=_receiveCouponBlock;
@property(retain, nonatomic) UIImageView *receiveBtn; // @synthesize receiveBtn=_receiveBtn;
@property(retain, nonatomic) UILabel *couponLimitDescriptionLabel; // @synthesize couponLimitDescriptionLabel=_couponLimitDescriptionLabel;
@property(retain, nonatomic) UILabel *couponUseConditionLabel; // @synthesize couponUseConditionLabel=_couponUseConditionLabel;
@property(retain, nonatomic) UILabel *couponFacelValueLabel; // @synthesize couponFacelValueLabel=_couponFacelValueLabel;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)receiveCoupon:(id)arg1;
- (void)updateCouponInfoWithItemB:(id)arg1 receiveCoupon:(CDUnknownBlockType)arg2;
- (void)updateCouponInfoWithItem:(id)arg1 receiveCoupon:(CDUnknownBlockType)arg2;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

