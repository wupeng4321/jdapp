//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDIcon, JDIconLabel, JDShopFansPriceView, JDShopGroupPriceView, JDShopInSearchWareModel, JDShopPlusPriceView, JDShopPriceLabel, JDShopProductImageView, JDShopSamPriceView, UIImageView, UILabel;

@interface JDShopInResultGridCollectionCell : UICollectionViewCell
{
    UILabel *m_titleLabel;
    JDShopPriceLabel *m_priceLabel;
    JDShopSamPriceView *m_samPriceLabel;
    JDShopPlusPriceView *m_plusPriceLabel;
    JDShopFansPriceView *m_fansPriceLabel;
    JDShopGroupPriceView *m_groupPriceLabel;
    JDIcon *m_tagIcon;
    JDIconLabel *m_promotionIcon1;
    JDIconLabel *m_promotionIcon2;
    JDIconLabel *m_jdDeliverIcon;
    UILabel *m_ScoreLabel;
    JDShopProductImageView *_m_imageView;
    JDShopInSearchWareModel *_wareModel;
    UIImageView *_stockLayer;
}

+ (double)JDShopInResultGridCollectionCellWidth;
+ (_Bool)bLeaseSkuWithModel:(id)arg1;
+ (double)setJDPriceLabelWithModel:(id)arg1 outStock:(_Bool)arg2 priceLabel:(id)arg3 bLeaseSku:(_Bool)arg4;
@property(retain, nonatomic) UIImageView *stockLayer; // @synthesize stockLayer=_stockLayer;
@property(retain, nonatomic) JDShopInSearchWareModel *wareModel; // @synthesize wareModel=_wareModel;
@property(retain, nonatomic) JDShopProductImageView *m_imageView; // @synthesize m_imageView=_m_imageView;
- (void).cxx_destruct;
- (void)fetchIconLabel:(id)arg1 WithDic:(id)arg2 andKey:(id)arg3;
- (void)fetchTagIconWithDic:(id)arg1 andKey:(id)arg2;
- (void)handleStock:(_Bool)arg1 withUnderCarriage:(_Bool)arg2;
- (void)handleScoreLable:(id)arg1 scoreLblWidth:(double)arg2;
- (void)loadSearchViewWithDic:(id)arg1;
- (void)updatePromotionWithDic:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

