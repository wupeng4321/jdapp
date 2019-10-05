//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPFullBaseViewController.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface JDPayPaymentCodeConfirmViewController : JDPFullBaseViewController
{
    _Bool _isPush;
    UIImageView *_topAvatarImageView;
    UIView *_checkBoxBackgroundView;
    UIButton *_checkBoxStateButton;
    UILabel *_checkBoxTipLabel;
    UIButton *_checkBoxTipButton;
    UIButton *_confirmButton;
    double _acceptEventTime;
}

@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(nonatomic) double acceptEventTime; // @synthesize acceptEventTime=_acceptEventTime;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *checkBoxTipButton; // @synthesize checkBoxTipButton=_checkBoxTipButton;
@property(retain, nonatomic) UILabel *checkBoxTipLabel; // @synthesize checkBoxTipLabel=_checkBoxTipLabel;
@property(retain, nonatomic) UIButton *checkBoxStateButton; // @synthesize checkBoxStateButton=_checkBoxStateButton;
@property(retain, nonatomic) UIView *checkBoxBackgroundView; // @synthesize checkBoxBackgroundView=_checkBoxBackgroundView;
@property(retain, nonatomic) UIImageView *topAvatarImageView; // @synthesize topAvatarImageView=_topAvatarImageView;
- (void).cxx_destruct;
- (void)resetEntraceCondition;
- (void)confirmButtonClick:(id)arg1;
- (void)jdp_checkBoxTipButtonClick:(id)arg1;
- (void)jdp_checkBoxStateButtonClick:(id)arg1;
- (void)jd_addSubviewsAndMakeConstraints;
- (void)jdp_configNaviBar;
- (long long)preferredStatusBarStyle;
- (void)navBarLeftButtonAction:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
