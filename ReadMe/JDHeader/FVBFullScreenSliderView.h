//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIView;

@interface FVBFullScreenSliderView : UISlider
{
    double _cacheValue;
    UIView *_cacheProgressView;
    UIView *_sliderBgView;
    UIView *_slidervalueView;
}

@property(retain, nonatomic) UIView *slidervalueView; // @synthesize slidervalueView=_slidervalueView;
@property(retain, nonatomic) UIView *sliderBgView; // @synthesize sliderBgView=_sliderBgView;
@property(retain, nonatomic) UIView *cacheProgressView; // @synthesize cacheProgressView=_cacheProgressView;
@property(nonatomic) double cacheValue; // @synthesize cacheValue=_cacheValue;
- (void).cxx_destruct;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

