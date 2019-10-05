//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UIImageView, UILabel;

@interface VBColumnItemView : UIView
{
    _Bool _large;
    _Bool _hidenPlayBtn;
    JDImageView *_bgImageView;
    UILabel *_titleLabel;
    UIImageView *_eyeImgView;
    UILabel *_playedTimesLabel;
    UIImageView *_playImageView;
    UILabel *_timeDurationLabel;
    UIView *_coverView;
}

@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UILabel *timeDurationLabel; // @synthesize timeDurationLabel=_timeDurationLabel;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UILabel *playedTimesLabel; // @synthesize playedTimesLabel=_playedTimesLabel;
@property(retain, nonatomic) UIImageView *eyeImgView; // @synthesize eyeImgView=_eyeImgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) _Bool hidenPlayBtn; // @synthesize hidenPlayBtn=_hidenPlayBtn;
@property(nonatomic) _Bool large; // @synthesize large=_large;
- (void).cxx_destruct;
- (void)assignValue:(id)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
