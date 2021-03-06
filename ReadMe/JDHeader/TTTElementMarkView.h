//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

@class JDImageView, UILabel;

@interface TTTElementMarkView : TTTBaseView
{
    JDImageView *_imageView;
    UILabel *_whiteLabel;
    UILabel *_redLabel;
    UILabel *_blackLabel;
    long long _markType;
    double _labelWidth;
}

@property(nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
@property(nonatomic) long long markType; // @synthesize markType=_markType;
@property(retain, nonatomic) UILabel *blackLabel; // @synthesize blackLabel=_blackLabel;
@property(retain, nonatomic) UILabel *redLabel; // @synthesize redLabel=_redLabel;
@property(retain, nonatomic) UILabel *whiteLabel; // @synthesize whiteLabel=_whiteLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGSize)sizeOfMarkText:(id)arg1 textFont:(id)arg2;
- (id)reDrawImage:(id)arg1;
- (void)waresNewRankText:(id)arg1;
- (void)waresText:(id)arg1 backImage:(id)arg2;
- (void)waresBeginStartText:(id)arg1;
- (void)waresTopText:(id)arg1 bottomText:(id)arg2;
- (void)waresMarkText:(id)arg1;
- (void)elementMarkText:(id)arg1 secondText:(id)arg2 imageUrl:(id)arg3 markType:(long long)arg4;
- (void)layoutImage;
- (void)layoutTwoColor;
- (void)layoutRed;
- (void)layoutYellow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

