//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTTextField.h"

@class UIToolbar;

@interface RCTJDReactTextField : RCTTextField
{
    _Bool _showAccessoryView;
    UIToolbar *_topView;
}

@property(retain, nonatomic) UIToolbar *topView; // @synthesize topView=_topView;
@property(nonatomic) _Bool showAccessoryView; // @synthesize showAccessoryView=_showAccessoryView;
- (void).cxx_destruct;
- (void)dealKeyboardHide;
- (void)setTextFieldInputAccessoryView;
- (id)initWithEventDispatcher:(id)arg1;

@end

