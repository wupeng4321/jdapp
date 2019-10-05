//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JZHomeBaseCollectionViewCell.h"

@class JDImageView, JZHomeGoodModel, JZPriceAndPlusView, UILabel, UIView;

@interface JZAllGoodsCollectionViewCell : JZHomeBaseCollectionViewCell
{
    JDImageView *_goodImage;
    UILabel *_goodTextLabel;
    JZHomeGoodModel *_goodModel;
    JZPriceAndPlusView *_priceAndPlusView;
    UIView *_rightSpaceLine;
    UIView *_bottomSpaceLine;
    UILabel *_saleStateLabel;
}

@property(retain, nonatomic) UILabel *saleStateLabel; // @synthesize saleStateLabel=_saleStateLabel;
@property(retain, nonatomic) UIView *bottomSpaceLine; // @synthesize bottomSpaceLine=_bottomSpaceLine;
@property(retain, nonatomic) UIView *rightSpaceLine; // @synthesize rightSpaceLine=_rightSpaceLine;
@property(retain, nonatomic) JZPriceAndPlusView *priceAndPlusView; // @synthesize priceAndPlusView=_priceAndPlusView;
@property(retain, nonatomic) JZHomeGoodModel *goodModel; // @synthesize goodModel=_goodModel;
@property(retain, nonatomic) UILabel *goodTextLabel; // @synthesize goodTextLabel=_goodTextLabel;
@property(retain, nonatomic) JDImageView *goodImage; // @synthesize goodImage=_goodImage;
- (void).cxx_destruct;
- (void)clearContent;
- (void)bindData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
