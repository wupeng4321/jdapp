//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIImageView, UILabel;

@interface JDXiaobingCouponView : UIView
{
    UIImageView *contentView;
    UILabel *couponName;
    UILabel *couponDiscountTip;
    UILabel *couponDiscount;
    UILabel *couponType;
    UILabel *descLabel;
    UILabel *shopName;
    UILabel *moreLabel;
    UIImageView *moreView;
    UIButton *contentBackgroundView;
    int index_;
    NSArray *coupons_;
}

@property(nonatomic) int index; // @synthesize index=index_;
@property(retain, nonatomic) NSArray *coupons; // @synthesize coupons=coupons_;
- (void).cxx_destruct;
- (void)moreItemClick;
- (void)couponItemClick;
- (void)setCouponView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
