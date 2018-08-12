//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDCoreCouponIcon, JDLabel, JDShopCouponFaceView, JDShopSignPrizeModel, NSString, TTTAttributedLabel, UIImageView;

@interface JDShopSignBaseCouponCell : UITableViewCell
{
    UIImageView *bgImageView;
    UIImageView *unApplicabilityImgView;
    JDShopCouponFaceView *faceView;
    JDCoreCouponIcon *icon;
    TTTAttributedLabel *titleLabel;
    JDLabel *dateLabel;
    int type;
    int couponUIType;
    JDShopSignPrizeModel *coupon;
    NSString *typeStr;
}

@property(copy, nonatomic) NSString *typeStr; // @synthesize typeStr;
@property(nonatomic) int couponUIType; // @synthesize couponUIType;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) JDShopSignPrizeModel *coupon; // @synthesize coupon;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView;
- (void).cxx_destruct;
- (double)cellTitleWith;
- (int)getCouponType:(int)arg1;
- (void)setMyCoupon:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

