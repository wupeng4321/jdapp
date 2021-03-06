//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, JDShopDynamicProductModel, UIButton, UIImageView, UILabel;
@protocol JDShopDynamicModeBuyerShowProductCellDelegate;

@interface JDShopDynamicModeBuyerShowProductCell : UICollectionViewCell
{
    UIImageView *lineImgView;
    JDImageView *productImgView;
    UILabel *titleLabel;
    UILabel *priceLabel;
    UIButton *buyButton;
    id <JDShopDynamicModeBuyerShowProductCellDelegate> _productDelegate;
    JDShopDynamicProductModel *_productModel;
}

+ (double)heitht;
@property(retain, nonatomic) JDShopDynamicProductModel *productModel; // @synthesize productModel=_productModel;
@property(nonatomic) __weak id <JDShopDynamicModeBuyerShowProductCellDelegate> productDelegate; // @synthesize productDelegate=_productDelegate;
- (void).cxx_destruct;
- (void)buyButtonClick;
- (void)setProductViewWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

