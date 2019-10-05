//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDXFanHomeFeedsListCell_Base.h"

#import "JDXFanHomeFeedsListCellVideoProtocol-Protocol.h"

@class CAGradientLayer, JDActivityIndicatorView, NSString, UIButton, UIImageView, UILabel, UIView;

@interface JDXFanHomeFeedsListCell_Video2 : JDXFanHomeFeedsListCell_Base <JDXFanHomeFeedsListCellVideoProtocol>
{
    UIView *_videoContainerV;
    UIImageView *_videoPosterV;
    UIView *_videoPlayerContianerV;
    UILabel *_durationLB;
    UIView *_progressV;
    UIView *_progressIndicateV;
    UIImageView *_playAcitonIconV;
    UIView *_maskView;
    CAGradientLayer *_progressBGGradiantLayer;
    UILabel *_titleLB;
    UIImageView *_avatarImgV;
    UILabel *_nickNameLB;
    UIButton *_authorBtn;
    UIImageView *_shopBagImgV;
    UILabel *_shopBagLB;
    UIView *_bottomLine;
    JDActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *shopBagLB; // @synthesize shopBagLB=_shopBagLB;
@property(retain, nonatomic) UIImageView *shopBagImgV; // @synthesize shopBagImgV=_shopBagImgV;
@property(retain, nonatomic) UIButton *authorBtn; // @synthesize authorBtn=_authorBtn;
@property(retain, nonatomic) UILabel *nickNameLB; // @synthesize nickNameLB=_nickNameLB;
@property(retain, nonatomic) UIImageView *avatarImgV; // @synthesize avatarImgV=_avatarImgV;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) CAGradientLayer *progressBGGradiantLayer; // @synthesize progressBGGradiantLayer=_progressBGGradiantLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *playAcitonIconV; // @synthesize playAcitonIconV=_playAcitonIconV;
@property(retain, nonatomic) UIView *progressIndicateV; // @synthesize progressIndicateV=_progressIndicateV;
@property(retain, nonatomic) UIView *progressV; // @synthesize progressV=_progressV;
@property(retain, nonatomic) UILabel *durationLB; // @synthesize durationLB=_durationLB;
@property(retain, nonatomic) UIView *videoPlayerContianerV; // @synthesize videoPlayerContianerV=_videoPlayerContianerV;
@property(retain, nonatomic) UIImageView *videoPosterV; // @synthesize videoPosterV=_videoPosterV;
@property(retain, nonatomic) UIView *videoContainerV; // @synthesize videoContainerV=_videoContainerV;
- (void).cxx_destruct;
- (id)timeFormatWithsecondCount:(long long)arg1;
- (void)updateCountdownTime:(double)arg1;
- (void)updateDuration:(long long)arg1;
- (void)showLoading:(_Bool)arg1;
- (void)updateProgress:(double)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setDataModel:(id)arg1;
- (void)setDataService:(id)arg1;
- (void)authorBtnAction:(id)arg1;
- (void)configActionHander;
- (void)sizeToFit;
- (void)relayoutSubViews;
- (void)setUpSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
