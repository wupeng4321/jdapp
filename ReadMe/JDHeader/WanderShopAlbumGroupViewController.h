//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WanderShopAlbumAssetCellDelegate-Protocol.h"

@class ALAssetsGroup, ALAssetsLibrary, NSMutableArray, NSString, UITableView, WanderShopAssetPallet;

@interface WanderShopAlbumGroupViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, WanderShopAlbumAssetCellDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    ALAssetsLibrary *_alLibrary;
    ALAssetsGroup *_assetsGroup;
    CDUnknownBlockType _assetsProductChange;
    UITableView *_groupTableView;
    NSMutableArray *_assertList;
    NSMutableArray *_selectedList;
    WanderShopAssetPallet *_assetPallet;
}

@property(retain, nonatomic) WanderShopAssetPallet *assetPallet; // @synthesize assetPallet=_assetPallet;
@property(retain, nonatomic) NSMutableArray *selectedList; // @synthesize selectedList=_selectedList;
@property(retain, nonatomic) NSMutableArray *assertList; // @synthesize assertList=_assertList;
@property(retain, nonatomic) UITableView *groupTableView; // @synthesize groupTableView=_groupTableView;
@property(copy, nonatomic) CDUnknownBlockType assetsProductChange; // @synthesize assetsProductChange=_assetsProductChange;
@property(retain, nonatomic) ALAssetsGroup *assetsGroup; // @synthesize assetsGroup=_assetsGroup;
- (void).cxx_destruct;
- (void)itemViewDelete:(id)arg1;
- (void)didImageViewTap:(id)arg1;
- (void)assetViewDidSelected:(id)arg1 View:(id)arg2;
- (void)assetSetFullImage:(id)arg1;
- (void)takePhotos;
- (_Bool)cameraAvailable;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)dealasset:(id)arg1;
- (void)loadImageForURL:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)didConfirmPallet;
- (void)WanderShopAlumGroupViewControllerCancel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
