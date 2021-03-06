//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, UILabel;
@protocol ShareOrderKeyboardToolDelegate;

@interface ShareOrderKeyboardTool : UIView
{
    double _statusoffsetY;
    UILabel *_textNumLable;
    _Bool _voiceSwitch;
    long long _maxLength;
    unsigned long long _currentLength;
    id <ShareOrderKeyboardToolDelegate> _delegate;
    JDButton *_voiceButton;
    double _voiceViewHeight;
}

+ (id)tool;
@property(nonatomic) double voiceViewHeight; // @synthesize voiceViewHeight=_voiceViewHeight;
@property(retain, nonatomic) JDButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(nonatomic) __weak id <ShareOrderKeyboardToolDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long currentLength; // @synthesize currentLength=_currentLength;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) _Bool voiceSwitch; // @synthesize voiceSwitch=_voiceSwitch;
- (void).cxx_destruct;
- (void)textChanged:(long long)arg1;
- (void)voiceInput;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

