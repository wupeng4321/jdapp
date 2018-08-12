//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIColor, UIImage;

@interface SingleSpikeGoodsPageControl : UIControl
{
    int _currentPage;
    int _numberOfPages;
    _Bool hidesForSinglePage;
    UIColor *coreNormalColor;
    UIColor *coreSelectedColor;
    UIColor *strokeNormalColor;
    UIColor *strokeSelectedColor;
    int _pageControlStyle;
    int _strokeWidth;
    int diameter;
    int gapWidth;
    CAShapeLayer *shapeLayer;
    _Bool _isThumbImageFit;
    _Bool _hideTaps;
    UIImage *thumbImage;
    UIImage *selectedThumbImage;
    CAShapeLayer *_shapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) _Bool hideTaps; // @synthesize hideTaps=_hideTaps;
@property(nonatomic) _Bool isThumbImageFit; // @synthesize isThumbImageFit=_isThumbImageFit;
@property(retain, nonatomic) UIImage *selectedThumbImage; // @synthesize selectedThumbImage;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage;
@property(nonatomic) int gapWidth; // @synthesize gapWidth;
@property(nonatomic) int diameter; // @synthesize diameter;
@property(nonatomic) int _strokeWidth; // @synthesize _strokeWidth;
@property(nonatomic) int _pageControlStyle; // @synthesize _pageControlStyle;
@property(retain, nonatomic) UIColor *strokeSelectedColor; // @synthesize strokeSelectedColor;
@property(retain, nonatomic) UIColor *strokeNormalColor; // @synthesize strokeNormalColor;
@property(retain, nonatomic) UIColor *coreSelectedColor; // @synthesize coreSelectedColor;
@property(retain, nonatomic) UIColor *coreNormalColor; // @synthesize coreNormalColor;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage;
@property(nonatomic) int _currentPage; // @synthesize _currentPage;
@property(nonatomic) int _numberOfPages; // @synthesize _numberOfPages;
- (int)numberOfPages;
- (void)setNumberOfPages:(int)arg1;
- (int)currentPage;
- (void)setCurrentPage:(int)arg1;
- (void)setPageControlStyle:(int)arg1;
- (int)pageControlStyle;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)onTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

