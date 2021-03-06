//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, SHVPLiveQAWaveView, UIImage, UIImageView;

@interface SHVPLiveQATipIconView : UIView
{
    SHVPLiveQAWaveView *_waveView;
    UIImageView *_iconImgView;
    UIImageView *_suceedImgView;
    UIImage *_iconImg;
    long long _status;
    NSMutableArray *_succeedImages;
}

+ (id)getViewWithStatus:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *succeedImages; // @synthesize succeedImages=_succeedImages;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
@property(retain, nonatomic) UIImageView *suceedImgView; // @synthesize suceedImgView=_suceedImgView;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) SHVPLiveQAWaveView *waveView; // @synthesize waveView=_waveView;
- (void).cxx_destruct;
- (void)resetCountDownShow;
- (void)stopAnimation;
- (void)startAnimationComplete:(CDUnknownBlockType)arg1;
- (void)updateViewWithStatus:(long long)arg1;
- (void)layoutSubviews;
- (void)loadsucceedImages;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

