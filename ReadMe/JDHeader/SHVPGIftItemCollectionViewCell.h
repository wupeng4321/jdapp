//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, SHVPGiftBonePriceView, SHVPGiftListItemModel, UIImageView, UILabel;

@interface SHVPGIftItemCollectionViewCell : UICollectionViewCell
{
    UIImageView *_bgImageView;
    JDImageView *_img;
    UILabel *_titleLab;
    SHVPGiftBonePriceView *_bonePriceView;
    SHVPGiftListItemModel *_model;
}

@property(retain, nonatomic) SHVPGiftListItemModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SHVPGiftBonePriceView *bonePriceView; // @synthesize bonePriceView=_bonePriceView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) JDImageView *img; // @synthesize img=_img;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setIsSelectedStatus:(_Bool)arg1 model:(id)arg2;
- (void)configCellWithModel:(id)arg1;
- (void)setUpViews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

