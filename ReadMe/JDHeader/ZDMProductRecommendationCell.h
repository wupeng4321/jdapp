//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, NSArray, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView, ZDMProductRecommendation;

@interface ZDMProductRecommendationCell : UICollectionViewCell
{
    JDImageView *_productImageView;
    UIView *_productMarkView;
    UILabel *_productMarkLabel;
    UIImageView *_jingdongSelectView;
    UILabel *_titleLabel;
    UILabel *_shortDescriptionLabel;
    UIButton *_likeButton;
    UIButton *_actionButton;
    UIView *_dislikeView2;
    UIButton *_dislikeButton2;
    JDImageView *_overseaImageView;
    UILabel *_countryNameLabel;
    UIView *_overSeaBoardView;
    NSLayoutConstraint *_overseaImageViewWidth;
    NSLayoutConstraint *_overSeaBoardWidth;
    UIView *_whiteImageMaskView;
    JDImageView *_videoIconImageView;
    JDImageView *_activityIconImageView;
    CDUnknownBlockType _onLongPress;
    CDUnknownBlockType _onPressLikeButton;
    CDUnknownBlockType _onPressActionButton;
    CDUnknownBlockType _onPressDislikeButton;
    ZDMProductRecommendation *_productRecommendation;
    unsigned long long _style;
    UIButton *_likeCountButton;
    NSLayoutConstraint *_overSeaBoardViewHeight;
    NSLayoutConstraint *_likeButtonWidth;
    NSLayoutConstraint *_likeButtonHeight;
    NSLayoutConstraint *_titleLeftGap;
    NSArray *_BgGaps;
    NSLayoutConstraint *_desLBBottomGap;
    NSArray *_productImageGaps;
    NSLayoutConstraint *_titleLabelTopGap;
    NSLayoutConstraint *_desLBLeftGap;
    NSLayoutConstraint *_desRightGap;
    NSLayoutConstraint *_desLBTopGap;
}

@property(retain, nonatomic) NSLayoutConstraint *desLBTopGap; // @synthesize desLBTopGap=_desLBTopGap;
@property(retain, nonatomic) NSLayoutConstraint *desRightGap; // @synthesize desRightGap=_desRightGap;
@property(retain, nonatomic) NSLayoutConstraint *desLBLeftGap; // @synthesize desLBLeftGap=_desLBLeftGap;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopGap; // @synthesize titleLabelTopGap=_titleLabelTopGap;
@property(retain, nonatomic) NSArray *productImageGaps; // @synthesize productImageGaps=_productImageGaps;
@property(retain, nonatomic) NSLayoutConstraint *desLBBottomGap; // @synthesize desLBBottomGap=_desLBBottomGap;
@property(retain, nonatomic) NSArray *BgGaps; // @synthesize BgGaps=_BgGaps;
@property(retain, nonatomic) NSLayoutConstraint *titleLeftGap; // @synthesize titleLeftGap=_titleLeftGap;
@property(retain, nonatomic) NSLayoutConstraint *likeButtonHeight; // @synthesize likeButtonHeight=_likeButtonHeight;
@property(retain, nonatomic) NSLayoutConstraint *likeButtonWidth; // @synthesize likeButtonWidth=_likeButtonWidth;
@property(retain, nonatomic) NSLayoutConstraint *overSeaBoardViewHeight; // @synthesize overSeaBoardViewHeight=_overSeaBoardViewHeight;
@property(retain, nonatomic) UIButton *likeCountButton; // @synthesize likeCountButton=_likeCountButton;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) ZDMProductRecommendation *productRecommendation; // @synthesize productRecommendation=_productRecommendation;
@property(copy, nonatomic) CDUnknownBlockType onPressDislikeButton; // @synthesize onPressDislikeButton=_onPressDislikeButton;
@property(copy, nonatomic) CDUnknownBlockType onPressActionButton; // @synthesize onPressActionButton=_onPressActionButton;
@property(copy, nonatomic) CDUnknownBlockType onPressLikeButton; // @synthesize onPressLikeButton=_onPressLikeButton;
@property(copy, nonatomic) CDUnknownBlockType onLongPress; // @synthesize onLongPress=_onLongPress;
@property(retain, nonatomic) JDImageView *activityIconImageView; // @synthesize activityIconImageView=_activityIconImageView;
@property(retain, nonatomic) JDImageView *videoIconImageView; // @synthesize videoIconImageView=_videoIconImageView;
@property(retain, nonatomic) UIView *whiteImageMaskView; // @synthesize whiteImageMaskView=_whiteImageMaskView;
@property(retain, nonatomic) NSLayoutConstraint *overSeaBoardWidth; // @synthesize overSeaBoardWidth=_overSeaBoardWidth;
@property(retain, nonatomic) NSLayoutConstraint *overseaImageViewWidth; // @synthesize overseaImageViewWidth=_overseaImageViewWidth;
@property(retain, nonatomic) UIView *overSeaBoardView; // @synthesize overSeaBoardView=_overSeaBoardView;
@property(retain, nonatomic) UILabel *countryNameLabel; // @synthesize countryNameLabel=_countryNameLabel;
@property(retain, nonatomic) JDImageView *overseaImageView; // @synthesize overseaImageView=_overseaImageView;
@property(retain, nonatomic) UIButton *dislikeButton2; // @synthesize dislikeButton2=_dislikeButton2;
@property(retain, nonatomic) UIView *dislikeView2; // @synthesize dislikeView2=_dislikeView2;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *shortDescriptionLabel; // @synthesize shortDescriptionLabel=_shortDescriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *jingdongSelectView; // @synthesize jingdongSelectView=_jingdongSelectView;
@property(retain, nonatomic) UILabel *productMarkLabel; // @synthesize productMarkLabel=_productMarkLabel;
@property(retain, nonatomic) UIView *productMarkView; // @synthesize productMarkView=_productMarkView;
@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleCallBackRefesh;
- (void)handClickLike:(id)arg1;
- (void)dislikeButtonPressed:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)likeButtonPressed:(id)arg1;
- (void)hideDislikeView;
- (void)showDislikeView;
- (void)addWhiteImageMaskView;
- (void)updateData:(id)arg1;
- (void)render:(id)arg1 favoriteTestVersion:(long long)arg2 style:(unsigned long long)arg3;
- (void)awakeFromNib;

@end

