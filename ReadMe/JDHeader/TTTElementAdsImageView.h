//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UIButton;

@interface TTTElementAdsImageView : UIView
{
    CDUnknownBlockType _imageTap;
    JDImageView *_imageView;
    UIButton *_tapButton;
}

@property(retain, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType imageTap; // @synthesize imageTap=_imageTap;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1 data:(id)arg2;
- (void)imageClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

