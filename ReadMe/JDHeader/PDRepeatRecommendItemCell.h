//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, NSDictionary, NSString, NewProductModel, UIButton, UILabel;

@interface PDRepeatRecommendItemCell : UICollectionViewCell
{
    NewProductModel *_model;
    NSDictionary *_data;
    JDImageView *_skuImgView;
    UILabel *_skuNameLabel;
    UIButton *_addCartButton;
    UILabel *_skuPriceLabel;
    NSString *_wareId;
}

@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(retain, nonatomic) UILabel *skuPriceLabel; // @synthesize skuPriceLabel=_skuPriceLabel;
@property(retain, nonatomic) UIButton *addCartButton; // @synthesize addCartButton=_addCartButton;
@property(retain, nonatomic) UILabel *skuNameLabel; // @synthesize skuNameLabel=_skuNameLabel;
@property(retain, nonatomic) JDImageView *skuImgView; // @synthesize skuImgView=_skuImgView;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)showAddCartToast:(long long)arg1 msg:(id)arg2 responseInfo:(id)arg3;
- (void)addCartClick:(id)arg1;
- (void)setWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
