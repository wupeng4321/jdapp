//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTAdsModel, UIImageView, UILabel;

@interface TTTAnchorTabView : TTTBaseView <TTTBaseViewProtocol>
{
    UIImageView *_selectedImageView;
    JDImageView *_imageView;
    UILabel *_textLabel;
    double _fontSize;
    NSString *_textColor;
    NSString *_highlightColor;
    TTTAdsModel *_adsModel;
}

@property(nonatomic) __weak TTTAdsModel *adsModel; // @synthesize adsModel=_adsModel;
@property(copy, nonatomic) NSString *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
- (void).cxx_destruct;
- (void)p_displayMode:(long long)arg1 isSelect:(_Bool)arg2;
- (void)updateStatus;
- (void)bindDataWithViewModel:(id)arg1;
- (void)updateTextColor:(id)arg1 highlightColor:(id)arg2 image:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 textFont:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
