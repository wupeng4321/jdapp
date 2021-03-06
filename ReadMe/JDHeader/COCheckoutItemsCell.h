//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class COCheckoutGoodsView, COCheckoutItemsVM, COCheckoutMainGoodsServiceView, COCheckoutMainLocStoreView, JDImageView, NSMutableArray, UILabel, UIView;

@interface COCheckoutItemsCell : UITableViewCell
{
    COCheckoutItemsVM *_viewModel;
    COCheckoutGoodsView *_goodsImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_priceLabel;
    UILabel *_plusPriceLabel;
    JDImageView *_plusPriceIcon;
    JDImageView *_samPriceIcon;
    UILabel *_numberLabel;
    NSMutableArray *_tagLabelArray;
    COCheckoutMainGoodsServiceView *_serviceView;
    COCheckoutMainLocStoreView *_storeView;
    UIView *_bottomLine;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) COCheckoutMainLocStoreView *storeView; // @synthesize storeView=_storeView;
@property(retain, nonatomic) COCheckoutMainGoodsServiceView *serviceView; // @synthesize serviceView=_serviceView;
@property(retain, nonatomic) NSMutableArray *tagLabelArray; // @synthesize tagLabelArray=_tagLabelArray;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) JDImageView *samPriceIcon; // @synthesize samPriceIcon=_samPriceIcon;
@property(retain, nonatomic) JDImageView *plusPriceIcon; // @synthesize plusPriceIcon=_plusPriceIcon;
@property(retain, nonatomic) UILabel *plusPriceLabel; // @synthesize plusPriceLabel=_plusPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) COCheckoutGoodsView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) COCheckoutItemsVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateDefaultCellLayout;
- (void)updateExchangeCellLayout;
- (void)updateSuitHeaderCellLayout;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

