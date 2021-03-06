//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SSSpikeGoodsCouponInfoModel, UIImageView, UILabel, UIView;

@interface SSSpikeGoodsCouponCell : UICollectionViewCell
{
    SSSpikeGoodsCouponInfoModel *_couponInfoModel;
    UILabel *_moneyLabel;
    UILabel *_rmbLogo;
    UILabel *_textLabel;
    UILabel *_contentLabel;
    UIImageView *_bgImage;
    UIImageView *_statusImage;
    UIView *_couponMask;
    UILabel *_nostartLabel;
}

@property(retain, nonatomic) UILabel *nostartLabel; // @synthesize nostartLabel=_nostartLabel;
@property(retain, nonatomic) UIView *couponMask; // @synthesize couponMask=_couponMask;
@property(nonatomic) __weak UIImageView *statusImage; // @synthesize statusImage=_statusImage;
@property(nonatomic) __weak UIImageView *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UILabel *rmbLogo; // @synthesize rmbLogo=_rmbLogo;
@property(nonatomic) __weak UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) SSSpikeGoodsCouponInfoModel *couponInfoModel; // @synthesize couponInfoModel=_couponInfoModel;
- (void).cxx_destruct;
- (void)couponNotStart;
- (void)couponGetOver;
- (void)couponHaveGet;
- (void)couponCanReceive;
- (void)commonInit;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

