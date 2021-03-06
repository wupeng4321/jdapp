//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DPGDetailTableViewCell.h"

@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface DPGDetailTitleCell : DPGDetailTableViewCell
{
    UILabel *_titleLabel;
    UIView *_gradientLabelView;
    CAGradientLayer *_titleGradientLayer;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
}

@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) CAGradientLayer *titleGradientLayer; // @synthesize titleGradientLayer=_titleGradientLayer;
@property(retain, nonatomic) UIView *gradientLabelView; // @synthesize gradientLabelView=_gradientLabelView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

