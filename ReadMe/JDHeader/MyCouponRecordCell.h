//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyCouponCell.h"

@class JDCoreCouponButton, JDImageView, UILabel;

@interface MyCouponRecordCell : MyCouponCell
{
    JDImageView *stateImageIcon;
    JDCoreCouponButton *couponBtn;
    JDImageView *stateTextIcon;
    UILabel *stateTextInfo;
    long long couponState;
    CDUnknownBlockType _couponShareCancelBlock;
    CDUnknownBlockType _couponSellCancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType couponSellCancelBlock; // @synthesize couponSellCancelBlock=_couponSellCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType couponShareCancelBlock; // @synthesize couponShareCancelBlock=_couponShareCancelBlock;
- (void).cxx_destruct;
- (void)cancelBtnClicek:(id)arg1;
- (void)setCouponModel:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
