//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UILabel;

@interface ZDMVideoToastView : UIView
{
    UILabel *_toastLab;
    NSAttributedString *_attriText;
}

+ (id)getViewWithTip:(id)arg1;
@property(retain, nonatomic) NSAttributedString *attriText; // @synthesize attriText=_attriText;
@property(retain, nonatomic) UILabel *toastLab; // @synthesize toastLab=_toastLab;
- (void).cxx_destruct;
- (id)getAttributeWithEasyArray:(id)arg1;
- (void)setAttributeText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
