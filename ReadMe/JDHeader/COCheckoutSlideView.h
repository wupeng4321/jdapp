//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class NSArray, UIColor, UIFont, UIScrollView, UIView;

@interface COCheckoutSlideView : JDView
{
    long long _currentIndex;
    CDUnknownBlockType _actionBlock;
    NSArray *_dataArray;
    UIScrollView *_scrollView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIView *_scrollLineView;
    double _buttonWidth;
    UIColor *_normalTitleColor;
    UIColor *_highLightedTitleColor;
    unsigned long long _scrollLineType;
    double _scrollLineAddtionWidth;
    UIFont *_tabButtonFont;
}

@property(retain, nonatomic) UIFont *tabButtonFont; // @synthesize tabButtonFont=_tabButtonFont;
@property(nonatomic) double scrollLineAddtionWidth; // @synthesize scrollLineAddtionWidth=_scrollLineAddtionWidth;
@property(nonatomic) unsigned long long scrollLineType; // @synthesize scrollLineType=_scrollLineType;
@property(retain, nonatomic) UIColor *highLightedTitleColor; // @synthesize highLightedTitleColor=_highLightedTitleColor;
@property(retain, nonatomic) UIColor *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(retain, nonatomic) UIView *scrollLineView; // @synthesize scrollLineView=_scrollLineView;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)setScrollLineWidthType:(unsigned long long)arg1 width:(double)arg2;
- (void)setScrollLineColor:(id)arg1 height:(double)arg2;
- (void)setTopLineColor:(id)arg1 bottomLineColor:(id)arg2;
- (void)setTopLineHidden:(_Bool)arg1 bottomLineHidden:(_Bool)arg2;
- (void)setTabFont:(id)arg1;
- (void)setTabWidth:(double)arg1;
- (void)setTitleNormalColor:(id)arg1 highLightedColor:(id)arg2;
- (void)setSelectedIndex:(long long)arg1 animation:(_Bool)arg2;
- (void)resetDataArray:(id)arg1;
- (void)pressTabAction:(id)arg1;
- (void)highlightedTabScrollToCenterWithAnimation:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)refreshUI;
- (void)initTabButtons;
- (id)initWithFrame:(struct CGRect)arg1 dataArray:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

