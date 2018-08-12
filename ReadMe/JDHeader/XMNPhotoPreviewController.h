//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSMutableArray, UIButton, UIView, XMNBottomBar;

@interface XMNPhotoPreviewController : UICollectionViewController
{
    NSArray *_assets;
    NSMutableArray *_selectedAssets;
    CDUnknownBlockType _didFinishPreviewBlock;
    CDUnknownBlockType _didFinishPickingBlock;
    unsigned long long _currentIndex;
    unsigned long long _maxCount;
    UIView *_topBar;
    UIButton *_stateButton;
    XMNBottomBar *_bottomBar;
}

+ (id)photoPreviewViewLayoutWithSize:(struct CGSize)arg1;
@property(retain, nonatomic) XMNBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(nonatomic) __weak UIButton *stateButton; // @synthesize stateButton=_stateButton;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) CDUnknownBlockType didFinishPickingBlock; // @synthesize didFinishPickingBlock=_didFinishPickingBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishPreviewBlock; // @synthesize didFinishPreviewBlock=_didFinishPreviewBlock;
@property(retain, nonatomic) NSMutableArray *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_setBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTopBarStatus;
- (void)_handleStateChangeAction;
- (void)_handleBackAction;
- (void)_setupConstraints;
- (void)_setupCollectionView;
- (void)_setup;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

