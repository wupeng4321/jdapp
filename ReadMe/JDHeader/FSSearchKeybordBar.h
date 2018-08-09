//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "VoiceRecognizeprotocol-Protocol.h"

@class CALayer, CATextLayer, FSSearchAudioView, NSString, UIImageView, UITextField;

@interface FSSearchKeybordBar : UIView <CAAnimationDelegate, VoiceRecognizeprotocol>
{
    int _recordState;
    CALayer *_micLayer;
    CATextLayer *_titleLayer;
    CALayer *_toolBarBg;
    CALayer *_containerLayerBg;
    CALayer *_containerLayer;
    _Bool _keyboardBarHaveShown;
    _Bool _isGetingRecordPermission;
    _Bool _haveStopRecording;
    _Bool _haveGetSearchWord;
    double _beginRecordTime;
    NSString *_audioSearchKeyword;
    _Bool _isAudioRecording;
    int _source;
    int _currentAudioSource;
    NSString *_MTA_videoClick;
    UIView *_toolbarView;
    UIImageView *_alertView;
    UITextField *_fieldText;
    NSString *_alertTxt;
    CDUnknownBlockType _inputBlock;
    CDUnknownBlockType _wordsGetSuccess;
    CDUnknownBlockType _hotWordsBlock;
    FSSearchAudioView *_audioView;
}

+ (void)dismissAlertInField:(id)arg1;
+ (void)clearToTextViewOrTextField:(id)arg1;
+ (void)addToTextViewOrTextField:(id)arg1 source:(int)arg2 hotWordsBlock:(CDUnknownBlockType)arg3 barInputBlock:(CDUnknownBlockType)arg4 wordsGetSuccess:(CDUnknownBlockType)arg5;
@property(nonatomic) _Bool isAudioRecording; // @synthesize isAudioRecording=_isAudioRecording;
@property(nonatomic) int currentAudioSource; // @synthesize currentAudioSource=_currentAudioSource;
@property(retain, nonatomic) FSSearchAudioView *audioView; // @synthesize audioView=_audioView;
@property(copy, nonatomic) CDUnknownBlockType hotWordsBlock; // @synthesize hotWordsBlock=_hotWordsBlock;
@property(copy, nonatomic) CDUnknownBlockType wordsGetSuccess; // @synthesize wordsGetSuccess=_wordsGetSuccess;
@property(copy, nonatomic) CDUnknownBlockType inputBlock; // @synthesize inputBlock=_inputBlock;
@property(retain, nonatomic) NSString *alertTxt; // @synthesize alertTxt=_alertTxt;
@property(nonatomic) __weak UITextField *fieldText; // @synthesize fieldText=_fieldText;
@property(retain, nonatomic) UIImageView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) int recordState; // @synthesize recordState=_recordState;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(copy, nonatomic) NSString *MTA_videoClick; // @synthesize MTA_videoClick=_MTA_videoClick;
@property(nonatomic) int source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)lastControllerInNavigation;
- (_Bool)isRecording;
- (void)onResultError:(id)arg1;
- (void)jumpToProductList;
- (void)onResult:(id)arg1 withBool:(_Bool)arg2;
- (void)finishRecordWithBool:(_Bool)arg1;
- (void)hiddenAudioSearchView;
- (void)interaptAudioSearch;
- (void)finishRecordByUser;
- (void)startRecordInSDKWithButtonY:(double)arg1;
- (void)audioCancel;
- (void)audioConfirm;
- (void)audioFresh:(_Bool)arg1;
- (void)audioBeganWithButtonY:(double)arg1 source:(int)arg2 retBlock:(CDUnknownBlockType)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)keyboardDidHidden;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)keyboardDidShow;
- (void)activeRecordingUpdateUI:(_Bool)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

