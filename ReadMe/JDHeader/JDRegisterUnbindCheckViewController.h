//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDRegisterBaseViewController.h"

@class JDButton, NSString, UIImageView, UILabel;

@interface JDRegisterUnbindCheckViewController : JDRegisterBaseViewController
{
    NSString *_pin;
    NSString *_imageURL;
    UIImageView *_headImageView;
    UIImageView *_headCoverImage;
    UILabel *_pinLabel;
    UILabel *_tipLabel;
    JDButton *_gotoLoginButton;
    JDButton *_continueRegisterButton;
}

@property(retain, nonatomic) JDButton *continueRegisterButton; // @synthesize continueRegisterButton=_continueRegisterButton;
@property(retain, nonatomic) JDButton *gotoLoginButton; // @synthesize gotoLoginButton=_gotoLoginButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *pinLabel; // @synthesize pinLabel=_pinLabel;
@property(retain, nonatomic) UIImageView *headCoverImage; // @synthesize headCoverImage=_headCoverImage;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)onUnbindPhoneError:(id)arg1;
- (void)onUnbindPhoneFailed:(int)arg1 errorMessage:(id)arg2 expireTime:(int)arg3 limitTime:(int)arg4;
- (void)onUnbindPhoneSuccessWithExpireTime:(int)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)backButtonClicked;
- (void)continueRegister;
- (void)gotoLogin;
- (void)initConstraints;
- (void)initContrls;
- (void)viewDidLoad;
- (id)initWithPin:(id)arg1 imageURL:(id)arg2;

@end

