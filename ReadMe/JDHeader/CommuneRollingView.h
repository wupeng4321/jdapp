//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIImage, UIImageView, UILabel;

@interface CommuneRollingView : UIView
{
    _Bool _stateUp;
    UIImage *_image;
    NSAttributedString *_attributedString;
    UIImageView *_imageView;
    UILabel *_titleView;
}

@property(nonatomic) _Bool stateUp; // @synthesize stateUp=_stateUp;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)rollingUp:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDeviceType;

@end

