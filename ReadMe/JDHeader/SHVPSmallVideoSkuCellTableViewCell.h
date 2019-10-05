//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPSmallVideoBaseCell.h"

@class SHVPSmallVideoImageView, SHVPSmallVideoShopCartModel, UIImage, UILabel, UIView;

@interface SHVPSmallVideoSkuCellTableViewCell : SHVPSmallVideoBaseCell
{
    CDUnknownBlockType _clickAddShoppingCart;
    CDUnknownBlockType _clickEnterVC;
    SHVPSmallVideoImageView *_skuImageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_marketPriceLabel;
    UILabel *_cartLabel;
    SHVPSmallVideoShopCartModel *_model;
    UIView *_separatorView;
    UIImage *_skuImage;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImage *skuImage; // @synthesize skuImage=_skuImage;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) SHVPSmallVideoShopCartModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *cartLabel; // @synthesize cartLabel=_cartLabel;
@property(retain, nonatomic) UILabel *marketPriceLabel; // @synthesize marketPriceLabel=_marketPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SHVPSmallVideoImageView *skuImageView; // @synthesize skuImageView=_skuImageView;
@property(copy, nonatomic) CDUnknownBlockType clickEnterVC; // @synthesize clickEnterVC=_clickEnterVC;
@property(copy, nonatomic) CDUnknownBlockType clickAddShoppingCart; // @synthesize clickAddShoppingCart=_clickAddShoppingCart;
- (void).cxx_destruct;
- (void)clickCartImageView:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end
