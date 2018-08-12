//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMGlossViewController.h"

#import "AMLayoutViewControlDelegate-Protocol.h"
#import "AMLipstickColorOptionDelegate-Protocol.h"
#import "AMMakeupCollectionViewActionDelegate-Protocol.h"
#import "AMMakeupPlatformLayoutViewDelegate-Protocol.h"
#import "AMProductsCollectionViewDelegate-Protocol.h"
#import "AMSliderProgressChangedDelegate-Protocol.h"
#import "AMThemeCollectionViewDelegate-Protocol.h"

@class AMBrandFilterView, AMMakeupPlatformLayoutView, AMThemeModel, NSMutableArray, NSMutableDictionary, NSString;

@interface AMPlatformViewController : AMGlossViewController <AMSliderProgressChangedDelegate, AMProductsCollectionViewDelegate, AMThemeCollectionViewDelegate, AMMakeupPlatformLayoutViewDelegate, AMLayoutViewControlDelegate, AMMakeupCollectionViewActionDelegate, AMLipstickColorOptionDelegate>
{
    AMThemeModel *selectedThemeModel;
    long long themePage;
    long long themeSelectedIndex;
    _Bool themeLoading;
    _Bool _isLoadingSingleData;
    _Bool _isLoadAllData;
    _Bool _isKeepSliderValue;
    _Bool _allSwitchIsOpen;
    AMMakeupPlatformLayoutView *_mPlatformView;
    NSMutableArray *_mPlatformArray;
    NSMutableArray *_themeArray;
    NSMutableArray *_brandArray;
    NSMutableArray *_productArray;
    NSMutableDictionary *_renderSkuDic;
    NSMutableDictionary *_brandDicForType;
    NSMutableDictionary *_pageDicForType;
    NSMutableDictionary *_indexDicForType;
    NSMutableDictionary *_alphaDicForType;
    unsigned long long _platformType;
    long long _makeupColorIndex;
    long long _mPupilSelectedIndex;
    AMBrandFilterView *_brandFilterView;
}

@property(retain, nonatomic) AMBrandFilterView *brandFilterView; // @synthesize brandFilterView=_brandFilterView;
@property(nonatomic) long long mPupilSelectedIndex; // @synthesize mPupilSelectedIndex=_mPupilSelectedIndex;
@property(nonatomic) long long makeupColorIndex; // @synthesize makeupColorIndex=_makeupColorIndex;
@property(nonatomic) unsigned long long platformType; // @synthesize platformType=_platformType;
@property(nonatomic) _Bool allSwitchIsOpen; // @synthesize allSwitchIsOpen=_allSwitchIsOpen;
@property(nonatomic) _Bool isKeepSliderValue; // @synthesize isKeepSliderValue=_isKeepSliderValue;
@property(nonatomic) _Bool isLoadAllData; // @synthesize isLoadAllData=_isLoadAllData;
@property(nonatomic) _Bool isLoadingSingleData; // @synthesize isLoadingSingleData=_isLoadingSingleData;
@property(retain, nonatomic) NSMutableDictionary *alphaDicForType; // @synthesize alphaDicForType=_alphaDicForType;
@property(retain, nonatomic) NSMutableDictionary *indexDicForType; // @synthesize indexDicForType=_indexDicForType;
@property(retain, nonatomic) NSMutableDictionary *pageDicForType; // @synthesize pageDicForType=_pageDicForType;
@property(retain, nonatomic) NSMutableDictionary *brandDicForType; // @synthesize brandDicForType=_brandDicForType;
@property(retain, nonatomic) NSMutableDictionary *renderSkuDic; // @synthesize renderSkuDic=_renderSkuDic;
@property(retain, nonatomic) NSMutableArray *productArray; // @synthesize productArray=_productArray;
@property(retain, nonatomic) NSMutableArray *brandArray; // @synthesize brandArray=_brandArray;
@property(retain, nonatomic) NSMutableArray *themeArray; // @synthesize themeArray=_themeArray;
@property(retain, nonatomic) NSMutableArray *mPlatformArray; // @synthesize mPlatformArray=_mPlatformArray;
@property(retain, nonatomic) AMMakeupPlatformLayoutView *mPlatformView; // @synthesize mPlatformView=_mPlatformView;
- (void).cxx_destruct;
- (void)downloadPupilPictureFinished:(id)arg1;
- (void)amLipstickColorOptionSelectedAtIndex:(long long)arg1;
- (void)platformDragLipstickCollectionIsScrolling:(_Bool)arg1 andIndex:(long long)arg2 andArray:(id)arg3;
- (void)amPlatformLipstickCollectionIsScrolling:(_Bool)arg1 andIndex:(long long)arg2;
- (void)amPlatformLipstickCollectionViewCellSeletcdAtIndex:(long long)arg1;
- (void)amMakeupCollectionViewScrollingSelectedTheLastFewCell;
- (void)amMakeupCollectionViewIsScrolling:(_Bool)arg1 andIndex:(long long)arg2;
- (void)amMakeupCollectionViewCellSeletcdAtIndex:(long long)arg1;
- (void)themeCollectionViewScrollingSelectedTheLastCell;
- (void)themeCellDidSelectedWithMakeupType:(id)arg1 andIndex:(long long)arg2;
- (void)productCellDidSelectedWithMakeupType:(id)arg1;
- (void)platformLayoutViewOnClickMakeupTitleButton:(id)arg1;
- (void)platformLayoutViewOnClickThemeTitleButton:(id)arg1;
- (void)platformLayoutViewFilterButtonOnClicked:(id)arg1;
- (void)platformLayoutViewProductDetailButtonOnClicked:(id)arg1;
- (void)platformLayoutViewSingleClearButtonOnClicked:(id)arg1;
- (void)platformLayoutViewGoBackButtonOnClicked:(id)arg1;
- (void)platformLayoutViewAllClearButtonOnClicked:(id)arg1;
- (void)amLayoutViewComparisonButtonOnClicked:(_Bool)arg1;
- (void)amLayoutViewAnimationButtonOnClicked:(id)arg1;
- (void)amLayoutViewDeclareButtonOnClicked:(id)arg1;
- (void)amLayoutViewShopCarButtonOnClicked:(id)arg1;
- (void)amLayoutViewBuyButtonOnClicked:(id)arg1;
- (void)amLayoutViewShareButtonOnClicked:(id)arg1;
- (void)amLayoutViewBackButtonOnClicked:(id)arg1;
- (void)amLayoutViewBeautyButtonOnClicked:(id)arg1;
- (void)amSliderProgressChangedBegin;
- (void)amSliderProgressChanged:(double)arg1;
- (void)processTheEyeBrowDataForPlatform:(id)arg1;
- (void)processThePicDataForPlatform:(id)arg1;
- (void)processTheBlusherColorDataForPlatform:(id)arg1;
- (void)processTheLipColorDataForPlatform:(id)arg1;
- (void)processTheSingleProductDataWithDictionary:(id)arg1 andType:(unsigned long long)arg2;
- (void)processTheSingleProductData:(id)arg1 andType:(unsigned long long)arg2;
- (void)loadMoreSingleProductData;
- (void)loadSingleProductDataWithBrands:(id)arg1;
- (void)loadSingleProductData;
- (void)processTheProductInformatinData:(id)arg1;
- (void)loadProductInformationData;
- (void)processTheBrandData:(id)arg1;
- (void)loadBrandData;
- (void)processThePlatformData:(id)arg1;
- (void)loadMakeupPlatformData;
- (void)processThemeformData:(id)arg1;
- (void)loadThemeWithPage:(long long)arg1;
- (void)renderPlatformEyelensePicture;
- (void)makeupPupil:(id)arg1;
- (void)downloadPupilImage:(id)arg1 andIndex:(long long)arg2;
- (void)renderPlatformPupilColorWithModel:(id)arg1 andIndex:(long long)arg2;
- (void)renderPlatformEyebrowColorWithModel:(id)arg1 andIndex:(long long)arg2;
- (void)renderPlatformBlusherColorWithModel:(id)arg1;
- (void)renderPlatformLipColorWithModel:(id)arg1;
- (void)resetDictionaryDataAndShowTitleWithMakeupAttributeData:(id)arg1 andSku:(id)arg2 andIndex:(long long)arg3 andCanResetSlider:(_Bool)arg4;
- (void)setPupilImageForPlatformWithIndex:(long long)arg1;
- (void)setEyebrowColorForPlatformWithIndex:(long long)arg1;
- (void)setBlusherColorForPlatformWithIndex:(long long)arg1;
- (void)setLipstickColorForPlatformWithIndex:(long long)arg1;
- (void)pushProductListViewController;
- (void)showBrandFilterView;
- (void)updateBrandDicForTypeWithBrands:(id)arg1;
- (void)updatePageDicForTypeWithPage:(long long)arg1;
- (void)updateAlphaDicForTypeWithAlpha:(double)arg1;
- (void)updateIndexDicForTypeWithIndex:(long long)arg1;
- (void)updateRenderSkuDicWithSku:(id)arg1 andModel:(id)arg2;
- (void)renderRemoveMakeupType:(unsigned long long)arg1;
- (void)clearSingleRender;
- (void)clearAllRender;
- (void)messageForSingleClearButtonOnClicked;
- (void)messageForAllClearButtonOnClicked;
- (id)getShowTitleWithMakeupModelAttributeData:(id)arg1;
- (void)resetVerticalSliderValue;
- (void)showProductListViewWithArray:(id)arg1 andAnimation:(_Bool)arg2 andType:(unsigned long long)arg3;
- (void)showSingleProductList;
- (void)showThemePlatform;
- (void)showMakeupPlatform;
- (void)startRequestNetworkData;
- (void)initSubViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
