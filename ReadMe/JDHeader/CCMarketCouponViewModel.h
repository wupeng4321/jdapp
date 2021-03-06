//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCCouponCenterBaseViewModel.h"

@class BJChoiceCouponModel, BJMarketCouponModel, NSString, UIColor, UIImage;

@interface CCMarketCouponViewModel : CCCouponCenterBaseViewModel
{
}

@property(readonly, nonatomic) BJChoiceCouponModel *mh_transferChoiceCouponItem;
@property(readonly, nonatomic) UIColor *mh_assignmentViceCouponColor;
@property(readonly, nonatomic) UIImage *mh_assignmentBGImage;
@property(readonly, nonatomic) UIColor *transferCouponColorWithSwitch;
@property(readonly, nonatomic) double transferStringAlpha;
@property(readonly, copy, nonatomic) NSString *transferDisplayString;
@property(readonly, nonatomic) UIImage *iconImage;
@property(readonly, copy, nonatomic) NSString *mainButtonImage;
@property(readonly, nonatomic) UIColor *progressBGColor;
@property(readonly, copy, nonatomic) NSString *viceCouponImage;
@property(readonly, nonatomic) UIColor *viceCouponColorB;
@property(readonly, nonatomic) UIColor *viceCouponColorA;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) BJMarketCouponModel *model; // @dynamic model;

@end

