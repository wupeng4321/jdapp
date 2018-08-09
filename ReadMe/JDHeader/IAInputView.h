//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class IAInputMoreContainerView, IAInputToolBar, JDBaseToastView, NSString;
@protocol IAInputActionDelegate, IAInputDelegate;

@interface IAInputView : UIView <UITextViewDelegate>
{
    long long _inputType;
    double _inputTextViewOlderHeight;
    _Bool _notRespondKeybordNotifi;
    long long _maxTextLength;
    double _inputBottomViewHeight;
    IAInputToolBar *_toolBar;
    IAInputMoreContainerView *_moreContainer;
    long long _recordPhase;
    id <IAInputDelegate> _inputDelegate;
    id <IAInputActionDelegate> _actionDelegate;
    JDBaseToastView *_toast;
    double _beginRecordTime;
}

@property(nonatomic) double beginRecordTime; // @synthesize beginRecordTime=_beginRecordTime;
@property(retain, nonatomic) JDBaseToastView *toast; // @synthesize toast=_toast;
@property(nonatomic) __weak id <IAInputActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <IAInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(nonatomic) long long recordPhase; // @synthesize recordPhase=_recordPhase;
@property(nonatomic) _Bool notRespondKeybordNotifi; // @synthesize notRespondKeybordNotifi=_notRespondKeybordNotifi;
@property(retain, nonatomic) IAInputMoreContainerView *moreContainer; // @synthesize moreContainer=_moreContainer;
@property(retain, nonatomic) IAInputToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(nonatomic) double inputBottomViewHeight; // @synthesize inputBottomViewHeight=_inputBottomViewHeight;
@property(nonatomic) long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)validateBeginRecordTime;
- (void)updateBeginRecordTime;
- (void)_didPressSend:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)endEditing:(_Bool)arg1;
- (void)enterKeyboardStatus;
- (void)onTouchLeftBtn:(id)arg1;
- (void)onTouchMoreBtn:(id)arg1;
- (void)onTouchVoiceBtn:(id)arg1;
- (void)startRecord;
- (void)updateInputTopViewFrame:(struct CGRect)arg1;
- (void)inputTextViewToHeight:(double)arg1;
- (void)willShowBottomHeight:(double)arg1;
- (void)willShowKeyboardFromFrame:(struct CGRect)arg1 toFrame:(struct CGRect)arg2;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)setRecordPhase:(long long)arg1 isResponseDelegate:(_Bool)arg2;
- (void)dismissRecordIndicator;
- (void)showRecordIndicator;
- (void)updateInputBarForRecordStatus;
- (double)getTextViewContentH:(id)arg1;
- (void)updateLeftBtnImages;
- (void)updateMoreBtnImages:(_Bool)arg1;
- (void)updateVoiceBtnImages:(_Bool)arg1;
- (void)updateAllButtonStatus;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)addListenEvents;
- (void)configMoreBtnModels:(id)arg1;
- (void)configMaxLength:(long long)arg1 placeHolder:(id)arg2 recordingText:(id)arg3;
- (void)initUIComponents;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

