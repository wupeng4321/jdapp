//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, SingleKillSpikeGoodsProductModel, UILabel;

@interface SingleKillSpikeProductView : UIView
{
    JDImageView *_goodsImage;
    JDImageView *_soldOutView;
    UILabel *_titleLabel;
    UILabel *_opera;
    UILabel *_priceLabel;
    SingleKillSpikeGoodsProductModel *_productModel;
    UILabel *_stateButton;
    UIView *_verticalLine;
}

@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UILabel *stateButton; // @synthesize stateButton=_stateButton;
@property(retain, nonatomic) SingleKillSpikeGoodsProductModel *productModel; // @synthesize productModel=_productModel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *opera; // @synthesize opera=_opera;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *soldOutView; // @synthesize soldOutView=_soldOutView;
@property(retain, nonatomic) JDImageView *goodsImage; // @synthesize goodsImage=_goodsImage;
- (void).cxx_destruct;
- (void)checkoutStateButton;
- (void)configCellWithModel:(id)arg1;
- (void)jumpToSpikeGoods;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

