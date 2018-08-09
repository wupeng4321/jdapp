//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSString, UILabel, UIView;

@interface FSSearchFieldText : UITextField
{
    NSString *_flag;
    UILabel *_adhesionWords;
    UIView *_adhesionWordsBg;
}

@property(retain, nonatomic) UIView *adhesionWordsBg; // @synthesize adhesionWordsBg=_adhesionWordsBg;
@property(retain, nonatomic) UILabel *adhesionWords; // @synthesize adhesionWords=_adhesionWords;
@property(copy, nonatomic) NSString *flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (void)adhesionWords:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)matchString:(id)arg1 andFlag:(id)arg2;
- (void)adhesionWordsFrame;
- (void)setFlagWord;
- (void)clearAdHesion;
- (void)addUILable:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textColor:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

