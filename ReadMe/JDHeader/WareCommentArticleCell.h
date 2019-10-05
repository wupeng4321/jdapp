//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class JDImageView, NSString, UICollectionView, UILabel, UIView, WareCommentArticleInfoModel, WareCommentArticleModel;
@protocol WareCommentArticleCellDelegate;

@interface WareCommentArticleCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    JDImageView *_headerImageView;
    UILabel *_titleLabel;
    double _offer;
    UIView *_mainView;
    NSString *_wareId;
    NSString *_category;
    long long _selectedIndex;
    WareCommentArticleModel *_model;
    WareCommentArticleInfoModel *_selectedModel;
    id <WareCommentArticleCellDelegate> _delegate;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WareCommentArticleCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WareCommentArticleInfoModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(retain, nonatomic) WareCommentArticleModel *model; // @synthesize model=_model;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
- (void).cxx_destruct;
- (void)scrollToSelectedInde:(long long)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
