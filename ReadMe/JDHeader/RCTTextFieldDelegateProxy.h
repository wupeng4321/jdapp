//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface RCTTextFieldDelegateProxy : NSObject <UITextFieldDelegate>
{
}

- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

