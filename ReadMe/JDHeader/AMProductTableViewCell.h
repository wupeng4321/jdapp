//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AMProductModel, UIButton, UIImageView, UILabel;
@protocol AMProductInfoCellButtonClickedDelegate;

@interface AMProductTableViewCell : UITableViewCell
{
    id <AMProductInfoCellButtonClickedDelegate> _buttonDelegate;
    UIImageView *_mainImageView;
    UILabel *_productNameLabel;
    UILabel *_priceLabel;
    UIButton *_addCartButton;
    AMProductModel *_productInfo;
}

@property(retain, nonatomic) AMProductModel *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) UIButton *addCartButton; // @synthesize addCartButton=_addCartButton;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *productNameLabel; // @synthesize productNameLabel=_productNameLabel;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(nonatomic) __weak id <AMProductInfoCellButtonClickedDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
- (void).cxx_destruct;
- (void)addCartButtonOnClicked:(id)arg1;
- (void)showCellWithProductModel:(id)arg1 andCanShowPrice:(_Bool)arg2;
- (void)forbidClickButtonQuickly:(id)arg1;
- (id)rebuildJDPriceLabelTextWithPrice:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
