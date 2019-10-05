//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TTTPlusPriceView : UIView
{
    long long _showStyle;
    double _twoLineNotAlignSpace;
    UILabel *_priceLabel;
    UILabel *_plusPriceLabel;
    UIImageView *_plusIcon;
    UIImageView *_tagImageView;
}

@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UIImageView *plusIcon; // @synthesize plusIcon=_plusIcon;
@property(retain, nonatomic) UILabel *plusPriceLabel; // @synthesize plusPriceLabel=_plusPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) double twoLineNotAlignSpace; // @synthesize twoLineNotAlignSpace=_twoLineNotAlignSpace;
@property(nonatomic) long long showStyle; // @synthesize showStyle=_showStyle;
- (void).cxx_destruct;
- (void)configPriceFont:(double)arg1 plusPriceFont:(double)arg2;
- (void)updatePriceFrame;
- (void)updatePriceFrameIfNewTag:(_Bool)arg1;
- (void)configPrice:(id)arg1 priceColor:(id)arg2 plusPrice:(id)arg3 plusColor:(id)arg4 isNewTag:(_Bool)arg5 style:(long long)arg6;
- (void)configPrice:(id)arg1 priceColor:(id)arg2 plusPrice:(id)arg3 plusColor:(id)arg4 style:(long long)arg5;
- (void)configPrice:(id)arg1 priceColor:(id)arg2 plusPrice:(id)arg3 plusColor:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end
