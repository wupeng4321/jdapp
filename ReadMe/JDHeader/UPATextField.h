//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface UPATextField : UITextField
{
    _Bool allowPaste;
    _Bool allowSelect;
    _Bool allowSelectAll;
}

@property _Bool allowSelectAll; // @synthesize allowSelectAll;
@property _Bool allowSelect; // @synthesize allowSelect;
@property _Bool allowPaste; // @synthesize allowPaste;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

