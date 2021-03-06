//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, JDShopDynamicActivityModel, JDShopDynamicProductModel, UIImageView, UILabel;

@interface JDNewDynamicProductView : UIView
{
    UIImageView *_productShadowView;
    JDImageView *_productImgView;
    UILabel *_priceLabel;
    UIView *_shadowView;
    UIView *statusView;
    UILabel *statusLabel;
    UIView *_moreShadowView;
    UILabel *_moreLabel;
    UILabel *_plusLable;
    UIImageView *_promotionIconImgView;
    UIImageView *_part1BgView;
    UIImageView *_part2BgView;
    JDImageView *_couponProductImgView;
    UILabel *_useConditionLabel;
    UILabel *_canUsePriceLable;
    UILabel *_couponDiscountLable;
    UIImageView *_couponGetStatus;
    UILabel *_canNotGetTop;
    UILabel *_canNoteGetBottom;
    UIImageView *_liveStatusView;
    UIImageView *_liveBtnView;
    UILabel *_liveStartTimeLable;
    int m_currentProductType;
    CDUnknownBlockType _tapBlock;
    JDShopDynamicProductModel *_model;
    JDShopDynamicActivityModel *_activityModel;
}

+ (id)formmatPriceString:(id)arg1;
@property(retain, nonatomic) JDShopDynamicActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(retain, nonatomic) JDShopDynamicProductModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (id)dateStringFromTimeStampString:(id)arg1;
- (id)formmatPriceLable:(id)arg1;
- (void)setMoreTextLable:(id)arg1;
- (void)setBuyerShowViewWithModel:(id)arg1 isShowMore:(_Bool)arg2;
- (void)setViewWithSignImgUrl:(id)arg1 signType:(long long)arg2;
- (void)setViewWithCouponModel:(id)arg1;
- (void)setViewWithLiveModele:(id)arg1;
- (void)setViewWithActivityImgUrl:(id)arg1 activitySubType:(long long)arg2 activityType:(long long)arg3;
- (void)setViewWithModel:(id)arg1 isShowMore:(_Bool)arg2;
- (void)setViewWithBuyShowUrl:(id)arg1 isShowMore:(_Bool)arg2;
- (void)setViewWithSingleProductModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)productImageClick;

@end

