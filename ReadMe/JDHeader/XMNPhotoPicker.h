//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UICollectionView, UIViewController, XMNAlbumModel;

@interface XMNPhotoPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIImagePickerControllerDelegate, UINavigationControllerDelegate, PHPhotoLibraryChangeObserver>
{
    _Bool _pickingVideoEnable;
    _Bool _autoFixImageOrientation;
    unsigned long long _maxCount;
    unsigned long long _maxPreviewCount;
    UIViewController *_parentController;
    CDUnknownBlockType _didFinishPickingPhotosBlock;
    CDUnknownBlockType _didFinishPickingVideoBlock;
    CDUnknownBlockType _didSendAsset;
    UICollectionView *_collectionView;
    UIButton *_cameraButton;
    UIButton *_cancelButton;
    UIActivityIndicatorView *_loadingView;
    NSLayoutConstraint *_cameraButtonHConstarint;
    UIView *_cameraLineView;
    UIButton *_photoLibraryButton;
    UIView *_contentView;
    XMNAlbumModel *_displayAlbum;
    NSArray *_assets;
    NSMutableArray *_selectedAssets;
    NSLayoutConstraint *_contentViewBConstraint;
}

+ (id)sharePhotoPicker;
@property(nonatomic) __weak NSLayoutConstraint *contentViewBConstraint; // @synthesize contentViewBConstraint=_contentViewBConstraint;
@property(retain, nonatomic) NSMutableArray *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) XMNAlbumModel *displayAlbum; // @synthesize displayAlbum=_displayAlbum;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIButton *photoLibraryButton; // @synthesize photoLibraryButton=_photoLibraryButton;
@property(nonatomic) __weak UIView *cameraLineView; // @synthesize cameraLineView=_cameraLineView;
@property(nonatomic) __weak NSLayoutConstraint *cameraButtonHConstarint; // @synthesize cameraButtonHConstarint=_cameraButtonHConstarint;
@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType didSendAsset; // @synthesize didSendAsset=_didSendAsset;
@property(copy, nonatomic) CDUnknownBlockType didFinishPickingVideoBlock; // @synthesize didFinishPickingVideoBlock=_didFinishPickingVideoBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishPickingPhotosBlock; // @synthesize didFinishPickingPhotosBlock=_didFinishPickingPhotosBlock;
@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController=_parentController;
@property(nonatomic) _Bool autoFixImageOrientation; // @synthesize autoFixImageOrientation=_autoFixImageOrientation;
@property(nonatomic) _Bool pickingVideoEnable; // @synthesize pickingVideoEnable=_pickingVideoEnable;
@property(nonatomic) unsigned long long maxPreviewCount; // @synthesize maxPreviewCount=_maxPreviewCount;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
- (void).cxx_destruct;
@property(readonly, nonatomic) double contentViewHeight;
- (id)_indexPathsFromIndexSet:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)handleStateButtonAction:(id)arg1;
- (void)showImageCameraController;
- (void)showPhotoPickerController;
- (void)updatePhotoLibraryButton;
- (void)handleButtonAction:(id)arg1;
- (void)loadAssets;
- (void)setup;
- (void)showPhotoPickerwithController:(id)arg1 animated:(_Bool)arg2;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithMaxCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

