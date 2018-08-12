//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderFollowRecommendModel, UICollectionView, UIImageView, UILabel;

@interface FinderFollowRecommendView : UIView
{
    CDUnknownBlockType _clickFoldImageBlock;
    CDUnknownBlockType _clickRecommendAuthorBlock;
    CDUnknownBlockType _clickAuthorLikeBlock;
    FinderFollowRecommendModel *_dataModel;
    UILabel *_hintLabel;
    UIImageView *_foldImageView;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *foldImageView; // @synthesize foldImageView=_foldImageView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) FinderFollowRecommendModel *dataModel; // @synthesize dataModel=_dataModel;
@property(copy, nonatomic) CDUnknownBlockType clickAuthorLikeBlock; // @synthesize clickAuthorLikeBlock=_clickAuthorLikeBlock;
@property(copy, nonatomic) CDUnknownBlockType clickRecommendAuthorBlock; // @synthesize clickRecommendAuthorBlock=_clickRecommendAuthorBlock;
@property(copy, nonatomic) CDUnknownBlockType clickFoldImageBlock; // @synthesize clickFoldImageBlock=_clickFoldImageBlock;
- (void).cxx_destruct;
- (void)clickFoldImageRecognizer:(id)arg1;
- (void)clickFollowWithModel:(id)arg1;
- (void)assignModel:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
