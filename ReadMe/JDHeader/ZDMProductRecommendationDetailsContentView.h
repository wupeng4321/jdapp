//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NSLayoutConstraint, UIButton, UIImageView, UILabel, ZDMArticleProductParagraph, ZDMProduct;

@interface ZDMProductRecommendationDetailsContentView : UIView
{
    CDUnknownBlockType _onPressAuthorButton;
    ZDMProduct *_product;
    ZDMArticleProductParagraph *_productDetails;
    unsigned long long _type;
    UIImageView *_jingdongSelectView;
    UILabel *_titleLabel;
    UIView *_productPromotionTagsView;
    NSLayoutConstraint *_productPromotionTagsViewHeight;
    UIView *_productPromotionTagView1;
    UILabel *_productPromotionTagLabel1;
    UIView *_productPromotionTagView2;
    UILabel *_productPromotionTagLabel2;
    UIView *_productPromotionTagView3;
    UILabel *_productPromotionTagLabel3;
    UILabel *_shortDescriptionLabel;
    UIButton *_authorButton;
    JDImageView *_overseaImageView;
    UILabel *_countryNameLabel;
    UIView *_overSeaBoardView;
    NSLayoutConstraint *_overseaImageViewWidth;
    NSLayoutConstraint *_overSeaBoardWidth;
    NSLayoutConstraint *_overseaBoardViewLeftWidth;
}

@property(retain, nonatomic) NSLayoutConstraint *overseaBoardViewLeftWidth; // @synthesize overseaBoardViewLeftWidth=_overseaBoardViewLeftWidth;
@property(retain, nonatomic) NSLayoutConstraint *overSeaBoardWidth; // @synthesize overSeaBoardWidth=_overSeaBoardWidth;
@property(retain, nonatomic) NSLayoutConstraint *overseaImageViewWidth; // @synthesize overseaImageViewWidth=_overseaImageViewWidth;
@property(retain, nonatomic) UIView *overSeaBoardView; // @synthesize overSeaBoardView=_overSeaBoardView;
@property(retain, nonatomic) UILabel *countryNameLabel; // @synthesize countryNameLabel=_countryNameLabel;
@property(retain, nonatomic) JDImageView *overseaImageView; // @synthesize overseaImageView=_overseaImageView;
@property(retain, nonatomic) UIButton *authorButton; // @synthesize authorButton=_authorButton;
@property(retain, nonatomic) UILabel *shortDescriptionLabel; // @synthesize shortDescriptionLabel=_shortDescriptionLabel;
@property(retain, nonatomic) UILabel *productPromotionTagLabel3; // @synthesize productPromotionTagLabel3=_productPromotionTagLabel3;
@property(retain, nonatomic) UIView *productPromotionTagView3; // @synthesize productPromotionTagView3=_productPromotionTagView3;
@property(retain, nonatomic) UILabel *productPromotionTagLabel2; // @synthesize productPromotionTagLabel2=_productPromotionTagLabel2;
@property(retain, nonatomic) UIView *productPromotionTagView2; // @synthesize productPromotionTagView2=_productPromotionTagView2;
@property(retain, nonatomic) UILabel *productPromotionTagLabel1; // @synthesize productPromotionTagLabel1=_productPromotionTagLabel1;
@property(retain, nonatomic) UIView *productPromotionTagView1; // @synthesize productPromotionTagView1=_productPromotionTagView1;
@property(retain, nonatomic) NSLayoutConstraint *productPromotionTagsViewHeight; // @synthesize productPromotionTagsViewHeight=_productPromotionTagsViewHeight;
@property(retain, nonatomic) UIView *productPromotionTagsView; // @synthesize productPromotionTagsView=_productPromotionTagsView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *jingdongSelectView; // @synthesize jingdongSelectView=_jingdongSelectView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) ZDMArticleProductParagraph *productDetails; // @synthesize productDetails=_productDetails;
@property(retain, nonatomic) ZDMProduct *product; // @synthesize product=_product;
@property(copy, nonatomic) CDUnknownBlockType onPressAuthorButton; // @synthesize onPressAuthorButton=_onPressAuthorButton;
- (void).cxx_destruct;
- (void)authorButtonPressed:(id)arg1;
- (void)renderProductContent:(id)arg1;
- (void)renderVideoContent:(id)arg1;
- (void)renderImageContent:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

