//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDButton, JDImageView, UILabel, UIView;

@interface ChargeCouponCell : UITableViewCell
{
    JDButton *checkBox;
    JDImageView *couponTypeView;
    UIView *iconView;
    UILabel *symbolLabel;
    UILabel *discountLabel;
    UILabel *conditionLabel;
    UILabel *couponTypeLabel;
    UILabel *limitInfoLabel;
    UILabel *dateLabel;
    JDImageView *greatView;
}

- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)setCellSelected:(_Bool)arg1;
- (void)setGreatCoupon:(_Bool)arg1;
- (id)timeWithTimeIntervalString:(id)arg1;
- (void)setCellData:(id)arg1 canUsed:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

