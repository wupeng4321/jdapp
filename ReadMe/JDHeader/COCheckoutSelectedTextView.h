//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@interface COCheckoutSelectedTextView : UITextView
{
    CDUnknownBlockType _actionBlock;
    struct _NSRange _targetRange;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) struct _NSRange targetRange; // @synthesize targetRange=_targetRange;
- (void).cxx_destruct;
- (struct CGRect)characterRectAtIndex:(unsigned long long)arg1;
- (_Bool)lastCharacterNewline;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

