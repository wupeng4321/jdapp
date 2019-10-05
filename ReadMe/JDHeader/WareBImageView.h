//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PDMainImageFloorProtocol-Protocol.h"
#import "PDMainImageMarkViewDelegate-Protocol.h"
#import "PDMainImageVideoViewDelegate-Protocol.h"
#import "PDMainImageViewProtocol-Protocol.h"
#import "PDViewProtocol-Protocol.h"
#import "SDWebImageManagerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class JDImageView, NSArray, NSString, NewProductModel, PDCollectionView, PDGoToMainImageView, PDMainImageMarkView, PDMainImageVideoView, UILabel;
@protocol PDMainImageFloorDelegate;

@interface WareBImageView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, PDMainImageVideoViewDelegate, PDMainImageMarkViewDelegate, SDWebImageManagerDelegate, PDViewProtocol, PDMainImageFloorProtocol, PDMainImageViewProtocol>
{
    _Bool _isMainPicShowExpoMTA;
    _Bool _isPlaceholderImageViewAnimating;
    _Bool _needPlaceHolderAnimation;
    JDImageView *_placeholderImageView;
    id <PDMainImageFloorDelegate> _delegate;
    NSArray *_items;
    NewProductModel *_model;
    PDCollectionView *_contentView;
    UIView *_pageBgView;
    UILabel *_indexLabel;
    PDMainImageVideoView *_mainImageVideoView;
    PDMainImageMarkView *_markView;
    PDGoToMainImageView *_gotoMainImgView;
}

@property(nonatomic) _Bool needPlaceHolderAnimation; // @synthesize needPlaceHolderAnimation=_needPlaceHolderAnimation;
@property(retain, nonatomic) PDGoToMainImageView *gotoMainImgView; // @synthesize gotoMainImgView=_gotoMainImgView;
@property(retain, nonatomic) PDMainImageMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) PDMainImageVideoView *mainImageVideoView; // @synthesize mainImageVideoView=_mainImageVideoView;
@property(nonatomic) _Bool isPlaceholderImageViewAnimating; // @synthesize isPlaceholderImageViewAnimating=_isPlaceholderImageViewAnimating;
@property(nonatomic) _Bool isMainPicShowExpoMTA; // @synthesize isMainPicShowExpoMTA=_isMainPicShowExpoMTA;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) UIView *pageBgView; // @synthesize pageBgView=_pageBgView;
@property(retain, nonatomic) PDCollectionView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <PDMainImageFloorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JDImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void).cxx_destruct;
- (void)changeMainImageIndex:(long long)arg1;
- (void)tryStartBreathAnimate;
- (void)placeHolderImageViewRemoved;
- (void)mainVideoIsShowSettingView:(_Bool)arg1;
- (id)mainVideoGetMainImageSuperView;
- (void)mainVideoDidTapCancelMainImageVideoView;
- (void)dealWithVideoBtnCallBack;
- (void)mainImgMarkViewPressBtnType:(long long)arg1 withObject:(id)arg2;
- (void)setScrollViewEnable:(_Bool)arg1;
- (void)setPlaceholderImageViewWithImageUrl:(id)arg1;
- (long long)currentRow;
- (void)setCurrentRow:(long long)arg1;
- (void)repair3D;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)show3DDisplayIcon:(_Bool)arg1;
- (void)clothesColorChangePlaceholderImageViewByUrl:(id)arg1;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (void)layoutCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
