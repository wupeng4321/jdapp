//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UILabel;

@interface AuthorRecFollowCellSubTitleView : UIView
{
    _Bool _isShowCartoon;
    CALayer *_backgroundLayer;
    UILabel *_subTitle;
    CALayer *_maskLayer;
    struct CGSize _subTitleSize;
}

@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) _Bool isShowCartoon; // @synthesize isShowCartoon=_isShowCartoon;
@property(nonatomic) struct CGSize subTitleSize; // @synthesize subTitleSize=_subTitleSize;
- (void).cxx_destruct;
- (void)startLightAnimation;
- (void)setSubLabelTitle:(id)arg1;
- (void)setUpViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
