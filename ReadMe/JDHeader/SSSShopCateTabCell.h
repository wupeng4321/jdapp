//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, SSSShopCateModel, UILabel;

@interface SSSShopCateTabCell : UICollectionViewCell
{
    SSSShopCateModel *_cateModel;
    UILabel *_titleLabel;
    JDImageView *_titleImage;
}

@property(retain, nonatomic) JDImageView *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSSShopCateModel *cateModel; // @synthesize cateModel=_cateModel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

