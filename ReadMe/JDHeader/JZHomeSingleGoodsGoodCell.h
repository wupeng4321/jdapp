//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, JZHomeGoodModel, MASConstraint, UILabel;

@interface JZHomeSingleGoodsGoodCell : UICollectionViewCell
{
    _Bool hasShadow;
    MASConstraint *_ptSpace;
    MASConstraint *_picSize;
    JZHomeGoodModel *_model;
    JDImageView *_pic;
    UILabel *_title;
    UILabel *_promoPrice;
    UILabel *_originPrice;
    UILabel *_spTag;
    JDImageView *_rightIcon;
}

@property(retain, nonatomic) JDImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UILabel *spTag; // @synthesize spTag=_spTag;
@property(retain, nonatomic) UILabel *originPrice; // @synthesize originPrice=_originPrice;
@property(retain, nonatomic) UILabel *promoPrice; // @synthesize promoPrice=_promoPrice;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) JDImageView *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) JZHomeGoodModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MASConstraint *picSize; // @synthesize picSize=_picSize;
@property(retain, nonatomic) MASConstraint *ptSpace; // @synthesize ptSpace=_ptSpace;
- (void).cxx_destruct;
- (void)setMode:(id)arg1;
- (void)fillNotStartTag;
- (void)clearContents;
- (void)fillShadow;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

