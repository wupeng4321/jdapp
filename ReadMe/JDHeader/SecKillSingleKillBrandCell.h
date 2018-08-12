//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseCell.h"

@class BrandItemView, BrandKillBrandModel, NSMutableArray, UIImageView, UILabel, UIView;

@interface SecKillSingleKillBrandCell : SecKillBaseCell
{
    BrandKillBrandModel *_brandModel;
    UIView *_lineView;
    UIImageView *_tagImageView;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subLabel;
    UILabel *_moreLabel;
    UIImageView *_arrowImage;
    BrandItemView *_brandItemView1;
    BrandItemView *_brandItemView2;
    BrandItemView *_brandItemView3;
    NSMutableArray *_brandItemViewArray;
}

+ (double)cellHeightForWidth:(double)arg1;
@property(retain, nonatomic) NSMutableArray *brandItemViewArray; // @synthesize brandItemViewArray=_brandItemViewArray;
@property(retain, nonatomic) BrandItemView *brandItemView3; // @synthesize brandItemView3=_brandItemView3;
@property(retain, nonatomic) BrandItemView *brandItemView2; // @synthesize brandItemView2=_brandItemView2;
@property(retain, nonatomic) BrandItemView *brandItemView1; // @synthesize brandItemView1=_brandItemView1;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) BrandKillBrandModel *brandModel; // @synthesize brandModel=_brandModel;
- (void).cxx_destruct;
- (void)fillData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

