//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class COCheckoutFreightRiskModel, JDButton, NSMutableArray, NSString, UICollectionView, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface COCheckoutReturnExchangeCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    _Bool _isLastCell;
    COCheckoutFreightRiskModel *_returnExchangeModel;
    UIView *_bgWhiteView;
    UIView *_titleView;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UIView *_topLineView;
    UIView *_secondLineView;
    JDButton *_checkBox;
    UIView *_thirdLineView;
    UILabel *_explainLabel;
    UIView *_bottomLineView;
    UITapGestureRecognizer *_tapGesture;
    UICollectionView *_collectView;
    NSMutableArray *_imagesArray;
}

@property(retain, nonatomic) NSMutableArray *imagesArray; // @synthesize imagesArray=_imagesArray;
@property(retain, nonatomic) UICollectionView *collectView; // @synthesize collectView=_collectView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *explainLabel; // @synthesize explainLabel=_explainLabel;
@property(retain, nonatomic) UIView *thirdLineView; // @synthesize thirdLineView=_thirdLineView;
@property(retain, nonatomic) JDButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) UIView *secondLineView; // @synthesize secondLineView=_secondLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *bgWhiteView; // @synthesize bgWhiteView=_bgWhiteView;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(retain, nonatomic) COCheckoutFreightRiskModel *returnExchangeModel; // @synthesize returnExchangeModel=_returnExchangeModel;
- (void).cxx_destruct;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)handleTapGesture;
- (id)generalLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

