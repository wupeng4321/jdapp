//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, UIButton, UIImageView, UILabel, UIView;

@interface ZDMArticleDetailsBigProductParagraphCell : UICollectionViewCell
{
    CDUnknownBlockType _onPressPurchaseButton;
    JDImageView *_productImageView;
    UIView *_bottomView;
    UILabel *_priceLabel;
    UILabel *_opPriceLabel;
    UIButton *_viewDetailButton;
    UIImageView *_jdSelectionImageView;
    JDImageView *_activityImageView;
}

@property(retain, nonatomic) JDImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
@property(retain, nonatomic) UIImageView *jdSelectionImageView; // @synthesize jdSelectionImageView=_jdSelectionImageView;
@property(retain, nonatomic) UIButton *viewDetailButton; // @synthesize viewDetailButton=_viewDetailButton;
@property(retain, nonatomic) UILabel *opPriceLabel; // @synthesize opPriceLabel=_opPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(copy, nonatomic) CDUnknownBlockType onPressPurchaseButton; // @synthesize onPressPurchaseButton=_onPressPurchaseButton;
- (void).cxx_destruct;
- (id)validatePrice:(id)arg1;
- (void)viewProductDetails;
- (void)render:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

