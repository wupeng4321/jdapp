//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class FSSearchFieldText, NSArray, NSString, UIButton;

@interface FSSearchBar : UIView <UITextFieldDelegate>
{
    _Bool _hiddenAudioButton;
    _Bool _hiddenOfAppAudioButton;
    _Bool _hiddenOfAppKeyboardAudioButton;
    _Bool _showKeybordView;
    CDUnknownBlockType _textCleared;
    CDUnknownBlockType _textFieldDidBeginEditing;
    CDUnknownBlockType _textFieldDidChange;
    CDUnknownBlockType _textFieldShouldReturn;
    CDUnknownBlockType _funcButtonClicked;
    CDUnknownBlockType _audioSearchSeccess;
    NSArray *_hotWords;
    unsigned long long _comFromType;
    NSString *_suggestAB;
    UIView *_searchBackGroundView;
    FSSearchFieldText *_searchField;
    UIButton *_funcButton;
    UIButton *_clearButton;
    double _searchBarBaseX;
    struct CGRect _bgViewFrame;
}

@property(nonatomic) struct CGRect bgViewFrame; // @synthesize bgViewFrame=_bgViewFrame;
@property(nonatomic) double searchBarBaseX; // @synthesize searchBarBaseX=_searchBarBaseX;
@property(nonatomic) _Bool showKeybordView; // @synthesize showKeybordView=_showKeybordView;
@property(nonatomic) _Bool hiddenOfAppKeyboardAudioButton; // @synthesize hiddenOfAppKeyboardAudioButton=_hiddenOfAppKeyboardAudioButton;
@property(nonatomic) _Bool hiddenOfAppAudioButton; // @synthesize hiddenOfAppAudioButton=_hiddenOfAppAudioButton;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UIButton *funcButton; // @synthesize funcButton=_funcButton;
@property(retain, nonatomic) FSSearchFieldText *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) UIView *searchBackGroundView; // @synthesize searchBackGroundView=_searchBackGroundView;
@property(copy, nonatomic) NSString *suggestAB; // @synthesize suggestAB=_suggestAB;
@property(nonatomic) unsigned long long comFromType; // @synthesize comFromType=_comFromType;
@property(nonatomic) _Bool hiddenAudioButton; // @synthesize hiddenAudioButton=_hiddenAudioButton;
@property(retain, nonatomic) NSArray *hotWords; // @synthesize hotWords=_hotWords;
@property(copy, nonatomic) CDUnknownBlockType audioSearchSeccess; // @synthesize audioSearchSeccess=_audioSearchSeccess;
@property(copy, nonatomic) CDUnknownBlockType funcButtonClicked; // @synthesize funcButtonClicked=_funcButtonClicked;
@property(copy, nonatomic) CDUnknownBlockType textFieldShouldReturn; // @synthesize textFieldShouldReturn=_textFieldShouldReturn;
@property(copy, nonatomic) CDUnknownBlockType textFieldDidChange; // @synthesize textFieldDidChange=_textFieldDidChange;
@property(copy, nonatomic) CDUnknownBlockType textFieldDidBeginEditing; // @synthesize textFieldDidBeginEditing=_textFieldDidBeginEditing;
@property(copy, nonatomic) CDUnknownBlockType textCleared; // @synthesize textCleared=_textCleared;
- (void).cxx_destruct;
- (void)reloadNavigationSearchBarIconWithType:(_Bool)arg1;
- (void)animaitonShowWithDuration:(double)arg1;
- (void)hiddenImageTipView;
- (_Bool)audioRecording;
- (void)interaptAudioSearch;
@property(copy, nonatomic) NSString *textOfTextField;
- (void)placeholderText:(id)arg1;
- (void)clearAdhesionOfTextField;
- (void)tfFirstResponder:(_Bool)arg1;
- (void)updateKeyboardAudioButtonState;
- (void)updateAudioButtonState;
- (void)handleKeyboardAudioButtonShowNotification:(id)arg1;
- (void)handleAudioButtonShowNotification:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)clearClick;
- (void)rightButtonClicked:(id)arg1;
- (void)searchBarIconTypeChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

