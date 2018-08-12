//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMGlossViewController.h"

#import "AMLayoutViewControlDelegate-Protocol.h"
#import "AMMakeupCollectionViewActionDelegate-Protocol.h"
#import "AMPictureSaveDelegate-Protocol.h"
#import "AMSliderProgressChangedDelegate-Protocol.h"
#import "JDAVFFaceDelegate-Protocol.h"

@class AMLipstickLayoutView, AMLoadingView, JDAVFFaceViewController, JDArDyeHairView, JDStoreNetwork, NSData, NSString, UIImageView;

@interface AMHairViewController : AMGlossViewController <AMLayoutViewControlDelegate, JDAVFFaceDelegate, AMPictureSaveDelegate, AMMakeupCollectionViewActionDelegate, AMSliderProgressChangedDelegate>
{
    NSString *skuString;
    JDArDyeHairView *jdArDyeHairView;
    JDStoreNetwork *network;
    JDStoreNetwork *skuNetwork;
    JDStoreNetwork *declareNetwork;
    JDStoreNetwork *shareNetwork;
    NSData *imageData;
    UIImageView *bgImageView;
    _Bool isSetImage;
    _Bool isBack;
    JDAVFFaceViewController *jdAVFFaceViewController;
    AMLoadingView *_loadingView;
    AMLipstickLayoutView *_lipstickView;
}

@property(retain, nonatomic) AMLipstickLayoutView *lipstickView; // @synthesize lipstickView=_lipstickView;
@property(retain, nonatomic) AMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)amSliderProgressChanged:(double)arg1;
- (id)numberHexString:(id)arg1;
- (void)amMakeupCollectionViewCellSeletcdAtIndex:(long long)arg1;
- (void)amLayoutViewDeclareButtonOnClicked:(id)arg1;
- (void)amLayoutViewComparisonButtonOnClicked:(_Bool)arg1;
- (void)amLayoutViewBeautyButtonOnClicked:(id)arg1;
- (void)amLayoutViewShopCarButtonOnClicked:(id)arg1;
- (void)amLayoutViewBuyButtonOnClicked:(id)arg1;
- (void)onClickConfirmPhoto:(id)arg1;
- (void)onClickCancelPhoto:(id)arg1;
- (void)onClickGalleryButton:(id)arg1;
- (void)onClickTakePhotoButton:(id)arg1;
- (void)backFromFaceViewController;
- (id)getSubImage:(struct CGRect)arg1 andImage:(id)arg2;
- (id)compressOriginalImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void)setFacePath:(id)arg1 andIsTakePicture:(_Bool)arg2;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (id)imageFromView;
- (void)amLayoutViewOnClickedStoreButton:(id)arg1;
- (void)amLayoutViewOnClickPhotoButton:(id)arg1;
- (void)amLayoutViewBackButtonOnClicked:(id)arg1;
- (id)fixOrientation:(id)arg1;
- (void)showMakeupListViewWithIndex:(long long)arg1 andArray:(id)arg2;
- (void)makeupRenderResetWithTitle:(id)arg1 andMakeupAttributeData:(id)arg2;
- (void)changeRenderColorAfterColorSizeButtonClickedWithTitle:(id)arg1;
- (void)requestTheShareLanguageText;
- (void)requestTheDeclareDataWithVendorType;
- (void)requestColor:(id)arg1;
- (void)storeImage:(id)arg1 andMaskData:(id)arg2;
- (void)donwloadImage:(id)arg1;
- (void)updateImage:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)initSubViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
