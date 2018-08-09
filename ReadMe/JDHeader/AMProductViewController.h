//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMGlossViewController.h"

#import "AMLayoutViewControlDelegate-Protocol.h"
#import "AMLipstickColorOptionDelegate-Protocol.h"
#import "AMMakeupCollectionViewActionDelegate-Protocol.h"
#import "AMSliderProgressChangedDelegate-Protocol.h"

@class AMLipstickLayoutView, NSString;

@interface AMProductViewController : AMGlossViewController <AMSliderProgressChangedDelegate, AMLayoutViewControlDelegate, AMLipstickColorOptionDelegate, AMMakeupCollectionViewActionDelegate>
{
    AMLipstickLayoutView *_lipstickView;
    long long _makeupColorIndex;
    long long _mPupilSelectedIndex;
}

@property(nonatomic) long long mPupilSelectedIndex; // @synthesize mPupilSelectedIndex=_mPupilSelectedIndex;
@property(nonatomic) long long makeupColorIndex; // @synthesize makeupColorIndex=_makeupColorIndex;
@property(retain, nonatomic) AMLipstickLayoutView *lipstickView; // @synthesize lipstickView=_lipstickView;
- (void).cxx_destruct;
- (void)amGlassCollectionViewIsScrolling:(_Bool)arg1 andIndex:(long long)arg2;
- (void)amGlassCollectionViewDidClickAtIndex:(long long)arg1;
- (void)amGlassCollectionViewForDownloadStatus:(_Bool)arg1 andSku:(id)arg2 andIndex:(long long)arg3;
- (void)amGlassCollectionViewSeletcdAtIndex:(long long)arg1;
- (void)setGlassModelWithFilePath:(id)arg1;
- (void)setGlassModelWithIndex:(long long)arg1;
- (void)renderEyelensePicture;
- (void)setPupilImageWithIndex:(long long)arg1;
- (void)renderEyebrowColorWithModel:(id)arg1 andIndex:(long long)arg2;
- (void)setEyeBrowColorWithIndex:(long long)arg1;
- (void)renderBlusherColorWithModel:(id)arg1;
- (void)setBlusherColorWithIndex:(long long)arg1;
- (void)renderLipColorWithModel:(id)arg1;
- (void)setLipstickColorWithIndex:(long long)arg1;
- (void)updateCurrentSku:(id)arg1 AndShowTitle:(id)arg2 canResetSlider:(_Bool)arg3;
- (void)amLipstickColorOptionSelectedAtIndex:(long long)arg1;
- (void)dragLipstickCollectionIsScrolling:(_Bool)arg1 andIndex:(long long)arg2 andArray:(id)arg3;
- (void)amLipstickCollectionIsScrolling:(_Bool)arg1 andIndex:(long long)arg2;
- (void)amLipstickCollectionViewCellSeletcdAtIndex:(long long)arg1;
- (void)amMakeupCollectionViewDidClickAtIndex:(long long)arg1;
- (void)amMakeupCollectionViewIsScrolling:(_Bool)arg1 andIndex:(long long)arg2;
- (void)amMakeupCollectionViewCellSeletcdAtIndex:(long long)arg1;
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
- (void)resetVerticalSliderValue;
- (void)judgeWhichGlassShouldSelected;
- (void)processTheGlassData:(id)arg1;
- (void)judgeWhichEyebrowColorShouldSelected;
- (void)processTheEyeBrowData:(id)arg1;
- (void)judgeWhichPupilPictureShouldSelected;
- (void)processThePicData:(id)arg1;
- (void)judgeWhichBlusherColorShouldSelected;
- (void)processTheBlusherColorData:(id)arg1;
- (void)judgeWhichLipColorShouldSelected;
- (void)processTheLipColorData:(id)arg1;
- (void)loadARProductDataBySku:(id)arg1;
- (void)makeupRenderResetWithTitle:(id)arg1 andMakeupAttributeData:(id)arg2;
- (void)changeRenderColorAfterColorSizeButtonClickedWithTitle:(id)arg1;
- (void)downloadGlassModelNotifi:(id)arg1;
- (void)downloadGlassPreviewImageNotifi:(id)arg1;
- (void)repordDownloadPupilPictureResultWithStatus:(_Bool)arg1 andIndex:(long long)arg2;
- (void)downloadPupilPictureFinished:(id)arg1;
- (void)showMakeupListViewWithIndex:(long long)arg1 andArray:(id)arg2;
- (void)startRequestNetworkData;
- (void)initSubViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

