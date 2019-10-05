//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDIconLabel, JDImageView, JDLabel, SimilarProductModel, UIButton, UILabel, UIView;
@protocol sameStyleProductCellDelegate;

@interface sameStyleProductCell : UITableViewCell
{
    SimilarProductModel *_productModel;
    id <sameStyleProductCellDelegate> _delegate;
    JDImageView *_productImage;
    JDIconLabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_icon3PriceLabel;
    JDIconLabel *_icon3IconLabel;
    UILabel *_underlinePriceLabel;
    UIView *_underlineView;
    JDIconLabel *_priceIconLabel;
    JDLabel *_commentLabel;
    JDLabel *_goodCommentRateLabel;
    UIButton *_addingCartButton;
    UIView *_seperateLine;
}

@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UIButton *addingCartButton; // @synthesize addingCartButton=_addingCartButton;
@property(retain, nonatomic) JDLabel *goodCommentRateLabel; // @synthesize goodCommentRateLabel=_goodCommentRateLabel;
@property(retain, nonatomic) JDLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) JDIconLabel *priceIconLabel; // @synthesize priceIconLabel=_priceIconLabel;
@property(retain, nonatomic) UIView *underlineView; // @synthesize underlineView=_underlineView;
@property(retain, nonatomic) UILabel *underlinePriceLabel; // @synthesize underlinePriceLabel=_underlinePriceLabel;
@property(retain, nonatomic) JDIconLabel *icon3IconLabel; // @synthesize icon3IconLabel=_icon3IconLabel;
@property(retain, nonatomic) UILabel *icon3PriceLabel; // @synthesize icon3PriceLabel=_icon3PriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) JDIconLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *productImage; // @synthesize productImage=_productImage;
@property(nonatomic) __weak id <sameStyleProductCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SimilarProductModel *productModel; // @synthesize productModel=_productModel;
- (void).cxx_destruct;
- (void)tapProductItem:(id)arg1;
- (void)addingCartTapped;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
