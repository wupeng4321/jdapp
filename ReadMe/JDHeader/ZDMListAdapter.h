//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "ZDMListContext-Protocol.h"

@class NSArray, NSMutableSet, NSString, UICollectionView, UIViewController, ZDMListAdapterProxy, ZDMSubject;
@protocol UICollectionViewDelegate, UIScrollViewDelegate, ZDMListAdapterDataSource, ZDMListAdapterDelegate;

@interface ZDMListAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, ZDMListContext>
{
    UIViewController *_viewController;
    UICollectionView *_collectionView;
    id <ZDMListAdapterDataSource> _dataSource;
    id <ZDMListAdapterDelegate> _delegate;
    id <UICollectionViewDelegate> _collectionViewDelegate;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    NSArray *_objects;
    NSArray *_sectionControllers;
    ZDMListAdapterProxy *_delegateProxy;
    NSMutableSet *_registeredNibNames;
    NSMutableSet *_registeredClassNames;
    ZDMSubject *_buttomBounceOffset;
}

@property(retain, nonatomic) ZDMSubject *buttomBounceOffset; // @synthesize buttomBounceOffset=_buttomBounceOffset;
@property(retain, nonatomic) NSMutableSet *registeredClassNames; // @synthesize registeredClassNames=_registeredClassNames;
@property(retain, nonatomic) NSMutableSet *registeredNibNames; // @synthesize registeredNibNames=_registeredNibNames;
@property(retain, nonatomic) ZDMListAdapterProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(copy, nonatomic) NSArray *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(copy, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <UICollectionViewDelegate> collectionViewDelegate; // @synthesize collectionViewDelegate=_collectionViewDelegate;
@property(nonatomic) __weak id <ZDMListAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ZDMListAdapterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)dequeueReusableReusableSupplementaryViewOfKind:(id)arg1 forSectionController:(id)arg2 className:(id)arg3 atIndex:(long long)arg4;
- (id)dequeueReusableReusableSupplementaryViewOfKind:(id)arg1 forSectionController:(id)arg2 nibName:(id)arg3 bundle:(id)arg4 atIndex:(long long)arg5;
- (id)dequeueReusableCollectionViewCellWithClassName:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)dequeueReusableCollectionViewCellWithNibName:(id)arg1 bundle:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4;
- (long long)sectionForSectionController:(id)arg1;
@property(readonly, nonatomic) struct CGSize containerSize;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)indexPathForSectionController:(id)arg1 index:(long long)arg2;
- (void)updateCollectionViewDelegate;
- (void)createProxyAndUpdateCollectionViewDelegate;
- (void)scrollToObject:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)rectForObject:(id)arg1;
- (void)reloadItem:(long long)arg1 inObject:(id)arg2;
- (void)reloadDataSourceAnDelegate;
- (void)reloadData;
- (id)initWithViewController:(id)arg1 collectionView:(id)arg2;
- (id)initWithViewController:(id)arg1 tableView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

