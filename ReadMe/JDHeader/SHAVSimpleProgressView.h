//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, NSArray, UIColor;

@interface SHAVSimpleProgressView : UIView
{
    UIColor *_cacheColor;
    NSArray *_progressColors;
    CALayer *_loadLayer;
    CAGradientLayer *_processLayer;
    double _loadNum;
    double _processNum;
}

@property(nonatomic) double processNum; // @synthesize processNum=_processNum;
@property(nonatomic) double loadNum; // @synthesize loadNum=_loadNum;
@property(retain, nonatomic) CAGradientLayer *processLayer; // @synthesize processLayer=_processLayer;
@property(retain, nonatomic) CALayer *loadLayer; // @synthesize loadLayer=_loadLayer;
@property(retain, nonatomic) NSArray *progressColors; // @synthesize progressColors=_progressColors;
@property(retain, nonatomic) UIColor *cacheColor; // @synthesize cacheColor=_cacheColor;
- (void).cxx_destruct;
- (void)updateViewWithProgressNum:(double)arg1;
- (void)updateViewWithCacheNum:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
