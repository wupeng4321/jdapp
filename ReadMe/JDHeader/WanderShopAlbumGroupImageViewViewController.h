//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDPhotoViewDelegate-Protocol.h"
#import "WanderShopAlbumAssetCellDelegate-Protocol.h"
#import "WanderShopImageViewerDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, UIButton, WanderShopAssetPallet, WanderShopImageViewer;

@interface WanderShopAlbumGroupImageViewViewController : JDViewController <WanderShopAlbumAssetCellDelegate, JDPhotoViewDelegate, WanderShopImageViewerDelegate>
{
    _Bool _isExitSuperNavBar;
    UIButton *checkButton;
    WanderShopAssetPallet *palletView;
    _Bool _isHidePallet;
    long long _selectedIndex;
    NSMutableArray *_items;
    NSMutableSet *_visibleImageViews;
    NSMutableSet *_reusedImageViews;
    CDUnknownBlockType _assetsProductChange;
    WanderShopImageViewer *_imageViewer;
}

@property(retain, nonatomic) WanderShopImageViewer *imageViewer; // @synthesize imageViewer=_imageViewer;
@property(copy, nonatomic) CDUnknownBlockType assetsProductChange; // @synthesize assetsProductChange=_assetsProductChange;
@property(retain, nonatomic) NSMutableSet *reusedImageViews; // @synthesize reusedImageViews=_reusedImageViews;
@property(retain, nonatomic) NSMutableSet *visibleImageViews; // @synthesize visibleImageViews=_visibleImageViews;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) _Bool isHidePallet; // @synthesize isHidePallet=_isHidePallet;
- (void).cxx_destruct;
- (void)popCurrentViewController;
- (void)didTapCheckButton;
- (void)didTapPhotoView:(id)arg1;
- (void)changeSelectedIndex:(long long)arg1;
- (void)didImageViewTap:(id)arg1;
- (void)didConfirmPallet;
- (void)itemViewDelete:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)assetViewDidSelected:(id)arg1 View:(id)arg2;
- (void)takePhotos;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithExitSuperNavBar:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

