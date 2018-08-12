//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class CBPInputBox, NSDate, NSString, NSTimer, UIButton;
@protocol JDPPaymentLoginCaptchaViewDelegate;

@interface JDPPaymentLoginCaptchaView : UIView <UITextFieldDelegate>
{
    unsigned long long _tickCount;
    NSDate *_dateForEnteringBackground;
    _Bool _isTiming;
    id <JDPPaymentLoginCaptchaViewDelegate> _delegate;
    UIButton *_captchaButton;
    CBPInputBox *_captchaBox;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CBPInputBox *captchaBox; // @synthesize captchaBox=_captchaBox;
@property(retain, nonatomic) UIButton *captchaButton; // @synthesize captchaButton=_captchaButton;
@property(nonatomic) __weak id <JDPPaymentLoginCaptchaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)cb_tickTimer;
- (void)cb_handleWillEnterBackground:(id)arg1;
- (void)cb_handleDidEnterBackground:(id)arg1;
- (void)cb_tapButton:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)dealloc;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)imageWithColor:(id)arg1 imageSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

