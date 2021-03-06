//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class JDStoreNetwork, NSString, UIButton, UIImageView, UITextField;
@protocol IAPetAdoptionViewDelegate;

@interface IAPetAdoptionView : UIView <UITextFieldDelegate>
{
    id <IAPetAdoptionViewDelegate> _delegate;
    UIImageView *_backImageView;
    UIView *_backView;
    UIImageView *_personImageOne;
    UIButton *_skipBtn;
    UIButton *_willNameBtn;
    UIView *_nameingView;
    UITextField *_nameTextField;
    JDStoreNetwork *_network;
}

+ (id)petAdoptionView;
@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) UIView *nameingView; // @synthesize nameingView=_nameingView;
@property(retain, nonatomic) UIButton *willNameBtn; // @synthesize willNameBtn=_willNameBtn;
@property(retain, nonatomic) UIButton *skipBtn; // @synthesize skipBtn=_skipBtn;
@property(retain, nonatomic) UIImageView *personImageOne; // @synthesize personImageOne=_personImageOne;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(nonatomic) __weak id <IAPetAdoptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)net_requestWithFinish:(CDUnknownBlockType)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)okBtnClick;
- (void)willNameBtnClick;
- (void)skipBtnClick;
- (void)resignActive;
- (void)willShowKeyboardFromFrame:(struct CGRect)arg1 toFrame:(struct CGRect)arg2;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)removeNotifications;
- (void)registerNotifications;
- (void)setupNameingView;
- (void)setupWillNameBtn;
- (void)setupSkipButton;
- (void)setupPersonImageOne;
- (void)setupBackView;
- (void)dismiss;
- (void)show;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

