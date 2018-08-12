//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMFullscreenViewController.h"

#import "UICollectionViewDelegate-Protocol.h"
#import "ZDMListAdapterDataSource-Protocol.h"
#import "ZDMListAdapterDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UICollectionView, UIView, ZDMAboutPrice, ZDMListAdapter, ZDMPostDetailsViewParamModel, ZDMProductRecommendationList, ZDMProductRecommendationListDetailsRequest, ZDMRouter;

@interface ZDMProductRecommendationListADetailsViewController : ZDMFullscreenViewController <ZDMListAdapterDataSource, UICollectionViewDelegate, ZDMListAdapterDelegate>
{
    _Bool _isHideFloor;
    ZDMProductRecommendationList *_productRecommendationList;
    UICollectionView *_collectionView;
    UIView *_sharingTipsView;
    UIButton *_likeButton;
    ZDMProductRecommendationListDetailsRequest *_postBundleDetailsRequest;
    ZDMAboutPrice *_aboutPrice;
    ZDMPostDetailsViewParamModel *_parameters;
    NSMutableArray *_viewedProducts;
    NSMutableArray *_viewedRecommandLists;
    NSMutableArray *_viewedAuthorRecommandLists;
    long long _viewAuthorPostCount;
    ZDMListAdapter *_adapter;
    ZDMRouter *_router;
    NSLayoutConstraint *_bottomSpaceOfLikeButton;
}

@property(nonatomic) _Bool isHideFloor; // @synthesize isHideFloor=_isHideFloor;
@property(retain, nonatomic) NSLayoutConstraint *bottomSpaceOfLikeButton; // @synthesize bottomSpaceOfLikeButton=_bottomSpaceOfLikeButton;
@property(retain, nonatomic) ZDMRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) ZDMListAdapter *adapter; // @synthesize adapter=_adapter;
@property(nonatomic) long long viewAuthorPostCount; // @synthesize viewAuthorPostCount=_viewAuthorPostCount;
@property(retain, nonatomic) NSMutableArray *viewedAuthorRecommandLists; // @synthesize viewedAuthorRecommandLists=_viewedAuthorRecommandLists;
@property(retain, nonatomic) NSMutableArray *viewedRecommandLists; // @synthesize viewedRecommandLists=_viewedRecommandLists;
@property(retain, nonatomic) NSMutableArray *viewedProducts; // @synthesize viewedProducts=_viewedProducts;
@property(retain, nonatomic) ZDMPostDetailsViewParamModel *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) ZDMAboutPrice *aboutPrice; // @synthesize aboutPrice=_aboutPrice;
@property(retain, nonatomic) ZDMProductRecommendationListDetailsRequest *postBundleDetailsRequest; // @synthesize postBundleDetailsRequest=_postBundleDetailsRequest;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIView *sharingTipsView; // @synthesize sharingTipsView=_sharingTipsView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ZDMProductRecommendationList *productRecommendationList; // @synthesize productRecommendationList=_productRecommendationList;
- (void).cxx_destruct;
- (void)on:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)setFullscreen:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)render;
- (void)likeButtonPressed:(id)arg1;
- (void)requestPostBundleDetails;
- (void)reconnect;
- (void)recordPV;
- (void)updateConstraintsOfiPhoneX;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSubmodule:(long long)arg1 parameters:(id)arg2;
- (id)initWithSubmodule:(long long)arg1 productRecommendationList:(id)arg2 parameters:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

