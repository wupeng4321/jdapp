//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewKitBaseContainer.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class JDVKLazyScrollView, JDViewKitComponentFactory, NSMutableArray, NSString, UICollectionView, UIScrollView;

@interface JDViewKitFlatView : JDViewKitBaseContainer <UICollectionViewDelegate, UICollectionViewDataSource>
{
    JDViewKitComponentFactory *_componentFactory;
    UICollectionView *_flatContent;
    UIScrollView *_scrollContent;
    JDVKLazyScrollView *_lazyScrollContent;
    NSMutableArray *_lazyScrollDataSource;
}

@property(retain, nonatomic) NSMutableArray *lazyScrollDataSource; // @synthesize lazyScrollDataSource=_lazyScrollDataSource;
@property(retain, nonatomic) JDVKLazyScrollView *lazyScrollContent; // @synthesize lazyScrollContent=_lazyScrollContent;
@property(retain, nonatomic) UIScrollView *scrollContent; // @synthesize scrollContent=_scrollContent;
@property(retain, nonatomic) UICollectionView *flatContent; // @synthesize flatContent=_flatContent;
@property(retain, nonatomic) JDViewKitComponentFactory *componentFactory; // @synthesize componentFactory=_componentFactory;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateViewWithData:(id)arg1;
- (void)reloadContainer;
- (void)setupView;
- (void)setupLazyScrollContent;
- (void)setupScrollContent;
- (void)setContainerFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

