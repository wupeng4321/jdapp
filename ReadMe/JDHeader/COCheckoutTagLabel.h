//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface COCheckoutTagLabel : UIView
{
    double _tagAlpha;
    double _maxWidth;
    double _minWidth;
    UILabel *_textLabel;
}

+ (id)createTagLabelWithFrame:(struct CGRect)arg1 tagLabelVM:(id)arg2;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double tagAlpha; // @synthesize tagAlpha=_tagAlpha;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setTitle:(id)arg1 backgroundColor:(id)arg2 titleColor:(id)arg3;
- (void)setBorderColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

