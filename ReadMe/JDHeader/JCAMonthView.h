//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface JCAMonthView : UIView
{
    UIImageView *_bgImageView;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
}

@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (double)subTitleBottom;
- (void)layoutMonthViewWithTitle:(id)arg1 subTitle:(id)arg2;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
