//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UIButton, UILabel;

@interface TTTElementAdsWordLabel : UIView
{
    CDUnknownBlockType _wordTap;
    JDImageView *_bgImageView;
    UILabel *_wordLabel;
    UIButton *_tapButton;
}

@property(retain, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(retain, nonatomic) UILabel *wordLabel; // @synthesize wordLabel=_wordLabel;
@property(retain, nonatomic) JDImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) CDUnknownBlockType wordTap; // @synthesize wordTap=_wordTap;
- (void).cxx_destruct;
- (struct CGRect)textLabelFrameWithText:(id)arg1 font:(id)arg2 numLine:(long long)arg3;
- (void)p_configBackground:(id)arg1 bgStyle:(id)arg2;
- (void)setFrame:(struct CGRect)arg1 elementModel:(id)arg2 wordModel:(id)arg3 ratio:(double)arg4;
- (void)wordClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

