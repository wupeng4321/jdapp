//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CAAnimationDelegate-Protocol.h"
#import "FloatingWindowTouchDelegate-Protocol.h"
#import "JDVideoRecorderControllerDelegate-Protocol.h"
#import "TLChatBarDelegate-Protocol.h"
#import "TLChatMessageDisplayViewDelegate-Protocol.h"
#import "TLKeyboardDelegate-Protocol.h"
#import "TLMessageManagerChatVCDelegate-Protocol.h"
#import "TLMoreKeyboardDelegate-Protocol.h"
#import "UPhoneProtocol-Protocol.h"

@class FloatingWindow, NSDictionary, NSObject, NSString, NSTimer, TLChatBar, TLChatMessageDisplayView, TLMoreKeyboard, UIButton, UIImageView, UILabel, UIView, UIWindow, UPhoneAPI;
@protocol OS_dispatch_source;

@interface JDUPhoneTelphoneVC : UIViewController <TLChatBarDelegate, TLKeyboardDelegate, TLChatMessageDisplayViewDelegate, TLMessageManagerChatVCDelegate, CAAnimationDelegate, FloatingWindowTouchDelegate, JDVideoRecorderControllerDelegate, UPhoneProtocol, TLMoreKeyboardDelegate>
{
    long long lastStatus;
    long long curStatus;
    UIView *view_numBase;
    UIView *view_gongnengBase;
    UIView *view_chaitGongnengBase;
    UIButton *btn_num;
    UILabel *label_notice;
    UILabel *label_noticeNum;
    UIButton *btn_jingyin;
    UIButton *btn_gongfang;
    UIButton *btn_pickup;
    UPhoneAPI *api;
    long long callPhoneTime;
    NSObject<OS_dispatch_source> *_timer;
    NSTimer *colseVCtimer;
    _Bool isJingyin;
    _Bool isConnect;
    long long callPhoneStauts;
    TLChatMessageDisplayView *_messageDisplayView;
    UIView *_view_chatBase;
    TLChatBar *_chatBar;
    NSDictionary *_phoneData;
    FloatingWindow *_floatWindow;
    UIImageView *_portraitImageView;
    UIWindow *_window;
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIImageView *portraitImageView; // @synthesize portraitImageView=_portraitImageView;
@property(retain, nonatomic) FloatingWindow *floatWindow; // @synthesize floatWindow=_floatWindow;
@property(retain, nonatomic) NSDictionary *phoneData; // @synthesize phoneData=_phoneData;
@property(retain, nonatomic) TLChatBar *chatBar; // @synthesize chatBar=_chatBar;
@property(retain, nonatomic) UIView *view_chatBase; // @synthesize view_chatBase=_view_chatBase;
@property(retain, nonatomic) TLChatMessageDisplayView *messageDisplayView; // @synthesize messageDisplayView=_messageDisplayView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)videoRecorderController:(id)arg1 enventChanged:(long long)arg2 info:(id)arg3;
- (void)videoRecorderController:(id)arg1 modeChanged:(long long)arg2;
- (void)videoRecorderController:(id)arg1 didFinishPickingWithInfo:(id)arg2;
- (void)moreKeyboard:(id)arg1 didSelectedFunctionItem:(long long)arg2;
- (void)p_addMasonry;
- (void)reachabilityChanged:(id)arg1;
- (void)sipSIPCallStatusChanged:(int)arg1;
- (void)sipRegisterStatusChanged:(int)arg1;
- (void)clickCloseChat:(id)arg1;
- (void)clickChat:(id)arg1;
- (void)pickupVC:(id)arg1;
- (void)clickVideo:(id)arg1;
- (void)assistiveTocuhs;
- (void)dismissViewController:(id)arg1;
- (void)setAudioJingyin:(id)arg1;
- (void)setAudioWaiFangSession:(id)arg1;
- (void)clickPhoneBtn:(id)arg1;
- (void)clickNum:(id)arg1;
- (id)changeTimeFormater:(long long)arg1;
- (void)configTimer;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) TLMoreKeyboard *moreKeyboard;
- (void)chatKeyboard:(id)arg1 didChangeHeight:(double)arg2;
- (void)chatKeyboardDidShow:(id)arg1 animated:(_Bool)arg2;
- (void)chatKeyboardWillShow:(id)arg1 animated:(_Bool)arg2;
- (void)chatBar:(id)arg1 didChangeTextViewHeight:(double)arg2;
- (void)chatBar:(id)arg1 changeStatusFrom:(long long)arg2 to:(long long)arg3;
- (void)chatBar:(id)arg1 sendText:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dismissKeyboard;
- (void)loadKeyboard;
- (void)chatMessageDisplayViewDidTouched:(id)arg1;
- (void)addToShowMessage:(id)arg1;
- (void)didReceivedMessage:(id)arg1;
- (void)sendMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

