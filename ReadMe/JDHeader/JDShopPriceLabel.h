//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDPriceLabel, UIColor, UIImageView;

@interface JDShopPriceLabel : UIView
{
    JDPriceLabel *_priceLabel;
    double defaultFontSize;
    UIColor *defaultTextColor;
    UIImageView *_imageStage;
}

@property(retain, nonatomic) UIImageView *imageStage; // @synthesize imageStage=_imageStage;
- (void)setPriceLabelSize:(struct CGSize)arg1;
- (void)setFontSize:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setStagesPrice:(id)arg1 stagesKinds:(long long)arg2 planStages:(long long)arg3;
- (void)setText:(id)arg1 withFont:(id)arg2 lastFont:(id)arg3 symbolFont:(id)arg4 textColor:(id)arg5 paragraphStyle:(id)arg6;
- (struct CGSize)textSize:(struct CGSize)arg1;
- (void)setPriceFrameTop:(double)arg1;
- (void)setText:(id)arg1 color:(id)arg2;
- (void)setText:(id)arg1 outStock:(_Bool)arg2;
- (void)setText:(id)arg1 withFont:(id)arg2 textColor:(id)arg3 priceType:(unsigned long long)arg4 outStock:(_Bool)arg5;
- (void)setText:(id)arg1 withFont:(id)arg2 lastFont:(id)arg3 symbolFont:(id)arg4 textColor:(id)arg5;
- (void)setText:(id)arg1;
- (id)attrString;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
