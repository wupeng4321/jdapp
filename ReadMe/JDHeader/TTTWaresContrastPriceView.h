//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTTDiscountView, UIImageView, UILabel;

@interface TTTWaresContrastPriceView : UIView
{
    UILabel *_currentPriceLabel;
    UILabel *_originPriceLabel;
    UILabel *_promotionLabel;
    TTTDiscountView *_discountView;
    UIView *_lineView;
    long long _layoutStyle;
    UIImageView *_tagImageView;
}

@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) TTTDiscountView *discountView; // @synthesize discountView=_discountView;
@property(retain, nonatomic) UILabel *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
@property(retain, nonatomic) UILabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(retain, nonatomic) UILabel *currentPriceLabel; // @synthesize currentPriceLabel=_currentPriceLabel;
- (void).cxx_destruct;
- (void)layoutStylePriceWithNewTag;
- (void)layoutStylePriceWithDis;
- (void)layoutStyleRushAllPrice;
- (void)layoutStyleRushCurrentPrice;
- (void)layoutStylePriceWithPromotion;
- (void)layoutStyleCurrentPrice;
- (void)layoutStyleAllPrice;
- (void)adjustLabelLayout;
- (id)validataString:(id)arg1;
- (void)setCurrentPrice:(id)arg1 originPrice:(id)arg2 promotionTag:(id)arg3 isNewTag:(_Bool)arg4 style:(long long)arg5;
- (void)setCurrentPrice:(id)arg1 originPrice:(id)arg2 promotionTag:(id)arg3 style:(long long)arg4;
- (void)layoutSubviews;
- (void)setCurrentPriceColor:(id)arg1 originPriceColor:(id)arg2 promotionTagColor:(id)arg3;
- (void)setCurrentPriceColor:(id)arg1 originPriceColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 currentPriceFont:(double)arg2 currentColor:(id)arg3 originPriceFont:(double)arg4 originColor:(id)arg5;

@end
