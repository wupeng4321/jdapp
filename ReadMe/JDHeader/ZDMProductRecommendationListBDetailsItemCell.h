//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, UILabel, ZDMLabel;

@interface ZDMProductRecommendationListBDetailsItemCell : UICollectionViewCell
{
    JDImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    ZDMLabel *_referencePriceLabel;
}

@property(retain, nonatomic) ZDMLabel *referencePriceLabel; // @synthesize referencePriceLabel=_referencePriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)render:(id)arg1;
- (void)awakeFromNib;

@end

