//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class CommentReplyInputTextView, JDButton, NSString, ShareOrderUserAuth, UILabel;
@protocol ShareOrderEditViewDelegate;

@interface ShareOrderEditView : UIView <UITextViewDelegate>
{
    UILabel *titleLable;
    UILabel *_inputLable;
    JDButton *_sendButton;
    JDButton *_fullSendButton;
    JDButton *_fullScreenButton;
    double _statusoffsetY;
    UILabel *_textNumLable;
    UIView *inPutBackView;
    double appearTime;
    double beginTime;
    UIView *coverView;
    _Bool _voiceSwitch;
    _Bool _isUserAuth;
    _Bool _isFullScreenStatus;
    _Bool _isShowVoice;
    NSString *_placeholderText;
    NSString *_inputText;
    NSString *_fullScreenTitle;
    long long _maxLength;
    id <ShareOrderEditViewDelegate> _delegate;
    UIView *_inputPadView;
    UIView *_fullHeadView;
    CommentReplyInputTextView *_inputTextView;
    ShareOrderUserAuth *_shareorderUserAuth;
    double _voiceViewHeight;
    double _keyboardH;
    double _textViewH;
    long long _voiceCnt;
    JDButton *_voiceButton;
    UIView *_editToolView;
}

+ (id)showKeyboardViewOnWindow;
@property(nonatomic) _Bool isShowVoice; // @synthesize isShowVoice=_isShowVoice;
@property(retain, nonatomic) UIView *editToolView; // @synthesize editToolView=_editToolView;
@property(nonatomic) _Bool isFullScreenStatus; // @synthesize isFullScreenStatus=_isFullScreenStatus;
@property(retain, nonatomic) JDButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(nonatomic) long long voiceCnt; // @synthesize voiceCnt=_voiceCnt;
@property(nonatomic) double textViewH; // @synthesize textViewH=_textViewH;
@property(nonatomic) double keyboardH; // @synthesize keyboardH=_keyboardH;
@property(nonatomic) double voiceViewHeight; // @synthesize voiceViewHeight=_voiceViewHeight;
@property(retain, nonatomic) ShareOrderUserAuth *shareorderUserAuth; // @synthesize shareorderUserAuth=_shareorderUserAuth;
@property(nonatomic) _Bool isUserAuth; // @synthesize isUserAuth=_isUserAuth;
@property(retain, nonatomic) CommentReplyInputTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) UIView *fullHeadView; // @synthesize fullHeadView=_fullHeadView;
@property(retain, nonatomic) UIView *inputPadView; // @synthesize inputPadView=_inputPadView;
@property(nonatomic) __weak id <ShareOrderEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) _Bool voiceSwitch; // @synthesize voiceSwitch=_voiceSwitch;
@property(copy, nonatomic) NSString *fullScreenTitle; // @synthesize fullScreenTitle=_fullScreenTitle;
@property(copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (void).cxx_destruct;
- (void)textChanged:(long long)arg1;
- (void)inputVoiceText:(id)arg1;
- (void)voiceInput;
- (double)measureHeightOfUITextView:(id)arg1;
- (void)setupKeyboard;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)changeInputFrameWithVoiceHeight:(double)arg1;
- (void)changeFrameWithFullScreenStatus:(double)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (id)currentText;
- (void)sendComment;
- (void)fullScreen;
- (void)closeEditView;
- (void)clickCover:(id)arg1;
- (void)closeKeyboard;
- (void)closeButtonClick;
- (_Bool)resultUserAuth:(id)arg1;
- (void)layoutSubviews;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

