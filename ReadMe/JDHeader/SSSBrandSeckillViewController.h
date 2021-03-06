//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "SSSBrandSeckillCombinationViewDelegate-Protocol.h"

@class BrandKillBrandModel, BrandKillBrandWarpperModel, JDActivityIndicatorView, JDBaseToastView, JDStoreNetwork, NSNumber, NSString, SSSBrandSecKillCouponListModel, SSSBrandSeckillCombinationView, SSSBrandSeckillHeaderView, SecKillObserverModel, SecKillRequestManager, UIButton, UIColor, UIView;

@interface SSSBrandSeckillViewController : SecKillBaseViewController <SSSBrandSeckillCombinationViewDelegate, JDBaseToastViewDelegate>
{
    _Bool _isShowCouponView;
    _Bool _isRefresh;
    _Bool _isShowTopView;
    _Bool _toastViewNeedDelayShow;
    JDStoreNetwork *_couponRequest;
    SecKillRequestManager *_requestManager;
    BrandKillBrandModel *_brandModel;
    BrandKillBrandWarpperModel *_warpperModel;
    SSSBrandSecKillCouponListModel *_couponModels;
    CDUnknownBlockType _finishHandler;
    JDActivityIndicatorView *_activityIndicatorView;
    long long _brandMiddleFromType;
    NSString *_innerLink;
    SSSBrandSeckillHeaderView *_headerView;
    SSSBrandSeckillCombinationView *_combinationView;
    UIButton *_reFreshView;
    NSNumber *_brandId;
    SecKillObserverModel *_observerModel;
    double _currentInterval;
    CDUnknownBlockType _addSubviewsFinish;
    double _contentViewHeight;
    NSString *_tabPosNum;
    NSString *_tabName;
    UIColor *_frameColor;
    JDBaseToastView *_toastView;
}

@property(nonatomic) _Bool toastViewNeedDelayShow; // @synthesize toastViewNeedDelayShow=_toastViewNeedDelayShow;
@property(retain, nonatomic) JDBaseToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIColor *frameColor; // @synthesize frameColor=_frameColor;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(retain, nonatomic) NSString *tabPosNum; // @synthesize tabPosNum=_tabPosNum;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(nonatomic) _Bool isShowTopView; // @synthesize isShowTopView=_isShowTopView;
@property(copy, nonatomic) CDUnknownBlockType addSubviewsFinish; // @synthesize addSubviewsFinish=_addSubviewsFinish;
@property(nonatomic) double currentInterval; // @synthesize currentInterval=_currentInterval;
@property(retain, nonatomic) SecKillObserverModel *observerModel; // @synthesize observerModel=_observerModel;
@property(retain, nonatomic) NSNumber *brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) UIButton *reFreshView; // @synthesize reFreshView=_reFreshView;
@property(retain, nonatomic) SSSBrandSeckillCombinationView *combinationView; // @synthesize combinationView=_combinationView;
@property(retain, nonatomic) SSSBrandSeckillHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) _Bool isShowCouponView; // @synthesize isShowCouponView=_isShowCouponView;
@property(copy, nonatomic) NSString *innerLink; // @synthesize innerLink=_innerLink;
@property(nonatomic) long long brandMiddleFromType; // @synthesize brandMiddleFromType=_brandMiddleFromType;
@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(copy, nonatomic) CDUnknownBlockType finishHandler; // @synthesize finishHandler=_finishHandler;
@property(retain, nonatomic) SSSBrandSecKillCouponListModel *couponModels; // @synthesize couponModels=_couponModels;
@property(retain, nonatomic) BrandKillBrandWarpperModel *warpperModel; // @synthesize warpperModel=_warpperModel;
@property(retain, nonatomic) BrandKillBrandModel *brandModel; // @synthesize brandModel=_brandModel;
@property(retain, nonatomic) SecKillRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) JDStoreNetwork *couponRequest; // @synthesize couponRequest=_couponRequest;
- (void).cxx_destruct;
- (void)dealloc;
- (void)brandReceiveCouponRecord;
- (void)brandShareButtonRecord;
- (void)didClickRefresh;
- (void)handlerWithError;
- (void)passValueWithModel:(id)arg1;
- (void)reconnect;
- (void)receiveCouponResult:(id)arg1;
- (void)refreshCouponView;
- (void)footerViewTap;
- (void)goToJump:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)combinationView:(id)arg1 contentOffset_newY:(double)arg2 contentOffset_oldY:(double)arg3;
- (void)clickRefresh:(id)arg1;
- (void)showOrHiddenHeadView:(_Bool)arg1;
- (id)getPageName;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (double)getInterval;
- (void)timerFired;
- (void)stopTimer;
- (void)startTimer;
- (void)share;
- (void)toRemindView;
- (void)updateRightItem;
- (void)loadDefaultData;
- (void)setRefresh;
- (id)getBrandId;
- (id)getTabName;
- (id)getTabPos;
- (void)createBaseView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBrandId:(id)arg1 type:(long long)arg2;
- (id)initWithBrandId:(id)arg1;
- (id)initWithParam:(id)arg1;
- (void)leavelExpireBrand;
- (void)showExpireBrandView:(long long)arg1;
@property(retain, nonatomic) UIView *expireBrandView; // @dynamic expireBrandView;
- (void)receiveCoupon:(id)arg1;
- (void)startReceiveCoupon:(id)arg1;
- (void)brandCouponRecord;
- (void)startRequestCoupons;
- (void)requestListDataWithBrandId:(id)arg1 innerLink:(id)arg2 finishHandler:(CDUnknownBlockType)arg3 isRefresh:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

