//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MyJdContentFocusedTopBarCell, NSArray, NSString, UICollectionView;
@protocol MyJdCContentFocusedTopBarDelegate;

@interface MyJdContentFocusedTopBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_barModelArray;
    id <MyJdCContentFocusedTopBarDelegate> _delegate;
    UICollectionView *_collectionView;
    MyJdContentFocusedTopBarCell *_selectedCell;
}

@property(nonatomic) __weak MyJdContentFocusedTopBarCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MyJdCContentFocusedTopBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *barModelArray; // @synthesize barModelArray=_barModelArray;
- (void).cxx_destruct;
- (void)adjustMovementTo:(id)arg1;
- (_Bool)isFixedLayout;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

