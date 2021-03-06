//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMProductRecommendationListCell.h"

@class JDImageView, NSArray, UIButton, UILabel, UIView, ZDMLabel, ZDMProductRecommendationListCallBackView;

@interface ZDMProductRecommendationListBCell : ZDMProductRecommendationListCell
{
    ZDMProductRecommendationListCallBackView *_callBackView;
    UIButton *_showCallBackButton;
    NSArray *_tagList;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    JDImageView *_tagImageView;
    UIButton *_likeCountButton;
    UIButton *_likeButton;
    JDImageView *_product1ImageView;
    UIView *_product1PriceView;
    UILabel *_product1PriceLabel;
    ZDMLabel *_product1ReferencePriceLabel;
    JDImageView *_product2ImageView;
    UIView *_product2PriceView;
    UILabel *_product2PriceLabel;
    ZDMLabel *_product2ReferencePriceLabel;
    JDImageView *_product3ImageView;
    UIView *_product3PriceView;
    UILabel *_product3PriceLabel;
    ZDMLabel *_product3ReferencePriceLabel;
    UILabel *_viewNumLabel;
}

@property(retain, nonatomic) UILabel *viewNumLabel; // @synthesize viewNumLabel=_viewNumLabel;
@property(retain, nonatomic) ZDMLabel *product3ReferencePriceLabel; // @synthesize product3ReferencePriceLabel=_product3ReferencePriceLabel;
@property(retain, nonatomic) UILabel *product3PriceLabel; // @synthesize product3PriceLabel=_product3PriceLabel;
@property(retain, nonatomic) UIView *product3PriceView; // @synthesize product3PriceView=_product3PriceView;
@property(retain, nonatomic) JDImageView *product3ImageView; // @synthesize product3ImageView=_product3ImageView;
@property(retain, nonatomic) ZDMLabel *product2ReferencePriceLabel; // @synthesize product2ReferencePriceLabel=_product2ReferencePriceLabel;
@property(retain, nonatomic) UILabel *product2PriceLabel; // @synthesize product2PriceLabel=_product2PriceLabel;
@property(retain, nonatomic) UIView *product2PriceView; // @synthesize product2PriceView=_product2PriceView;
@property(retain, nonatomic) JDImageView *product2ImageView; // @synthesize product2ImageView=_product2ImageView;
@property(retain, nonatomic) ZDMLabel *product1ReferencePriceLabel; // @synthesize product1ReferencePriceLabel=_product1ReferencePriceLabel;
@property(retain, nonatomic) UILabel *product1PriceLabel; // @synthesize product1PriceLabel=_product1PriceLabel;
@property(retain, nonatomic) UIView *product1PriceView; // @synthesize product1PriceView=_product1PriceView;
@property(retain, nonatomic) JDImageView *product1ImageView; // @synthesize product1ImageView=_product1ImageView;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *likeCountButton; // @synthesize likeCountButton=_likeCountButton;
@property(retain, nonatomic) JDImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) UIButton *showCallBackButton; // @synthesize showCallBackButton=_showCallBackButton;
@property(retain, nonatomic) ZDMProductRecommendationListCallBackView *callBackView; // @synthesize callBackView=_callBackView;
- (void).cxx_destruct;
- (void)render:(id)arg1 favoriteTestVersion:(long long)arg2;
- (void)awakeFromNib;

@end

