//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, UIButton, UIImageView, UILabel, UIView, ZDMLabel;

@interface ZDMAlbumBigProductCell : UICollectionViewCell
{
    CDUnknownBlockType _onPressPurchaseButton;
    CDUnknownBlockType _onPressProductImageview;
    UIView *_grayContentView;
    JDImageView *_productImageView;
    UIImageView *_jingdongSelectView;
    UILabel *_priceLabel;
    ZDMLabel *_referencePriceLabel;
    UIButton *_purchaseButton;
    UILabel *_titleLabel;
    UILabel *_shortDescriptionLabel;
}

@property(retain, nonatomic) UILabel *shortDescriptionLabel; // @synthesize shortDescriptionLabel=_shortDescriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) ZDMLabel *referencePriceLabel; // @synthesize referencePriceLabel=_referencePriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *jingdongSelectView; // @synthesize jingdongSelectView=_jingdongSelectView;
@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UIView *grayContentView; // @synthesize grayContentView=_grayContentView;
@property(copy, nonatomic) CDUnknownBlockType onPressProductImageview; // @synthesize onPressProductImageview=_onPressProductImageview;
@property(copy, nonatomic) CDUnknownBlockType onPressPurchaseButton; // @synthesize onPressPurchaseButton=_onPressPurchaseButton;
- (void).cxx_destruct;
- (void)fixLayout;
- (void)tapProductImageView;
- (void)purchaseButtonPressed;
- (void)render:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

