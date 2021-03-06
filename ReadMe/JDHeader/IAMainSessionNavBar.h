//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDNavigationBar.h"

@class CALayer, JDImageView, UIButton, UIImageView, UILabel, UIView;
@protocol IAMainSessionNavBarDelegate;

@interface IAMainSessionNavBar : JDNavigationBar
{
    _Bool _canHeaderViewClick;
    id <IAMainSessionNavBarDelegate> _delegate;
    UIButton *_shareButton;
    UIView *_headerView;
    UILabel *_headLabel;
    UIButton *_settingButton;
    UIImageView *_navBarBackImageView;
    UIView *_userInfoView;
    CALayer *_circleLayer;
    UIImageView *_headImageView;
    JDImageView *_circleImageView;
}

@property(retain, nonatomic) JDImageView *circleImageView; // @synthesize circleImageView=_circleImageView;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) CALayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) UIView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) UIImageView *navBarBackImageView; // @synthesize navBarBackImageView=_navBarBackImageView;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) _Bool canHeaderViewClick; // @synthesize canHeaderViewClick=_canHeaderViewClick;
@property(nonatomic) __weak id <IAMainSessionNavBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupSettingButton;
- (void)setupShareButton;
- (void)setupHeaderLabel;
- (void)setupHeaderView;
- (void)setupBackButton;
- (void)setupBarBackImageView;
- (void)customXDImg;
- (void)customBackgroundImage:(id)arg1 urlString:(id)arg2;
- (void)customBackgroundImage:(id)arg1;
- (void)rotation;
- (void)stopAnimation;
- (void)backButtonClicked;
- (void)tapHeaderLabel;
- (void)tapHeaderImage;
- (void)settingButtonTapped:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)showLoading:(_Bool)arg1;
- (void)selectedHeaderView;
- (void)restoreHeaderView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

