//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDIconLabel, JDImageView, JDPriceLabel, UILabel;

@interface WareFavoriteTypeItem : UIView
{
    _Bool _showPrice;
    JDImageView *_imageView;
    JDPriceLabel *_priceLabel;
    JDImageView *_priceBG;
    UILabel *_titleLabel;
    JDIconLabel *iconLabel;
    UIView *_markView;
    JDIconLabel *_productNewIcon;
}

@property(readonly, nonatomic) JDIconLabel *productNewIcon; // @synthesize productNewIcon=_productNewIcon;
@property(retain, nonatomic) UIView *markView; // @synthesize markView=_markView;
@property(readonly, nonatomic) JDIconLabel *iconLabel; // @synthesize iconLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) JDImageView *priceBG; // @synthesize priceBG=_priceBG;
@property(readonly, nonatomic) JDPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(readonly, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showPrice; // @synthesize showPrice=_showPrice;
- (void).cxx_destruct;
- (void)setWithModel:(id)arg1 textColor:(id)arg2;
- (void)setWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

