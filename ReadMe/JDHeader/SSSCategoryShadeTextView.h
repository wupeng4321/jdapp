//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SSSCategoryShadeTextView : UIView
{
    UILabel *_blackTextLabel;
    UILabel *_redTextLabel;
    NSString *_textString;
}

@property(copy, nonatomic) NSString *textString; // @synthesize textString=_textString;
@property(retain, nonatomic) UILabel *redTextLabel; // @synthesize redTextLabel=_redTextLabel;
@property(retain, nonatomic) UILabel *blackTextLabel; // @synthesize blackTextLabel=_blackTextLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateTitle;
- (id)init;
- (void)adjustTextViewBlackTextAlpha:(double)arg1 redTextAlpha:(double)arg2;

@end
