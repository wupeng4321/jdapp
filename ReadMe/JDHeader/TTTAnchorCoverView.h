//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

@class TTTFloorModel, UICollectionView, UIImageView, UILabel, UIView;

@interface TTTAnchorCoverView : TTTBaseView
{
    UIView *_contentView;
    UIView *_headView;
    UILabel *_changeFloorLabel;
    UICollectionView *_cateCollectionView;
    UIImageView *_pullBackImageview;
    TTTFloorModel *_floorModel;
}

+ (id)showAtPoint:(struct CGPoint)arg1 data:(id)arg2;
@property(retain, nonatomic) TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) UIImageView *pullBackImageview; // @synthesize pullBackImageview=_pullBackImageview;
@property(retain, nonatomic) UICollectionView *cateCollectionView; // @synthesize cateCollectionView=_cateCollectionView;
@property(retain, nonatomic) UILabel *changeFloorLabel; // @synthesize changeFloorLabel=_changeFloorLabel;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tapBack:(id)arg1;
- (void)p_removeSelf;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)p_adjustHeight;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 orgin:(struct CGPoint)arg2;

@end

