//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDCoreNotificationViewDelegate-Protocol.h"
#import "JDStatusViewDelegate-Protocol.h"
#import "MyCouponScreenMasterViewDelegate-Protocol.h"
#import "MyNewCouponActionDelegate-Protocol.h"
#import "MyNewCouponBottomEditViewDelegate-Protocol.h"
#import "MyNewCouponGetingSectionHeaderViewDelegate-Protocol.h"
#import "MyNewCouponHeaderViewDelegate-Protocol.h"
#import "MyNewCouponPersonalDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDCoreCouponBaseModel, JDFooterLoadingView, JDImageView, JDStoreNetwork, MyCouponActionView, MyCouponBottomEditView, MyCouponBottomView, MyCouponGetingSectionHeaderView, MyCouponHeaderView, MyCouponModel, MyCouponNotificationBar, MyCouponPersonal, MyCouponScreenItemModel, MyCouponScreenMasterView, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NewRefreshTableHeaderView, TTTAttributedLabel, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface MyCouponViewController : JDViewController <MyNewCouponBottomEditViewDelegate, MyNewCouponPersonalDelegate, MyNewCouponActionDelegate, JDCoreNotificationViewDelegate, UITableViewDelegate, UITableViewDataSource, NewRefreshTableHeaderViewDelegate, MyNewCouponHeaderViewDelegate, JDStatusViewDelegate, JDBaseToastViewDelegate, MyNewCouponGetingSectionHeaderViewDelegate, MyCouponScreenMasterViewDelegate>
{
    _Bool _isNeedReload;
    _Bool _couponMarketConfig;
    _Bool _isLoadingUseTable;
    _Bool _hasMoreUse;
    _Bool _isLoadingUsedTable;
    _Bool _hasMoreUsed;
    _Bool _isLoadingOutdateTable;
    _Bool _hasMoreOutdate;
    _Bool _hasSelectedAll;
    _Bool _useSelectedFlag;
    _Bool _useMulEditing;
    _Bool _outSelectedFlag;
    _Bool _outMulEditing;
    _Bool _hasNoSegmentView;
    JDStoreNetwork *_couponNet;
    JDStoreNetwork *_couponListNet;
    JDStoreNetwork *_couponNotif;
    NSString *_barTitleColorType;
    long long _segmentSelectIndex;
    NewRefreshTableHeaderView *_refreshHeaderView;
    MyCouponHeaderView *_couponSegmentView;
    JDFooterLoadingView *_footerLoadingView;
    TTTAttributedLabel *_cellRuleLabel;
    UIView *_couponInfoView;
    MyCouponNotificationBar *_useNotificationView;
    MyCouponBottomView *_bottomView;
    MyCouponActionView *_myNewCouponActionView;
    UITableView *_useTable;
    NewRefreshTableHeaderView *_refresUseView;
    MyCouponGetingSectionHeaderView *_getingHeaderView;
    UIView *_useNoDataView;
    UIView *_useErrorNetView;
    NSMutableArray *_myUseDataArr;
    long long _currUsePage;
    long long _useTotalCount;
    long long _getingNumber;
    UITableView *_usedTable;
    NewRefreshTableHeaderView *_refresUsedView;
    UIView *_usedNoDataView;
    UIView *_usedErrorNetView;
    NSMutableArray *_myUsedDataArr;
    long long _currUsedPage;
    long long _usedTotalCount;
    UITableView *_outdateTable;
    NewRefreshTableHeaderView *_refresOutdateView;
    UIView *_outNoDataView;
    UIView *_outErrorNetView;
    NSMutableArray *_myOutdateDataArr;
    long long _currOutdatePage;
    long long _outTotalCount;
    MyCouponModel *_singleDeleteModel;
    NSMutableDictionary *_useInvertSelectDict;
    NSMutableDictionary *_outInvertSelectDict;
    NSMutableDictionary *_useDeleteDataDict;
    MyCouponBottomEditView *_useEditView;
    long long _useMaxDeleteNum;
    NSMutableDictionary *_outDeleteDataDict;
    MyCouponBottomEditView *_outEditView;
    long long _outMaxDeleteNum;
    UIView *_titleView;
    UILabel *_titleViewLabel;
    UIImageView *_titleImgView;
    MyCouponScreenMasterView *_screenMasterView;
    NSMutableArray *_screenDataSource;
    JDStoreNetwork *_couponScreenNet;
    MyCouponScreenItemModel *_c_screenModel;
    NSTimer *_CDTimer;
    NSMutableArray *_useCDArr;
    NSDate *_lastLeaveVCDate;
    NSString *_pageParam;
    NSString *_positionCouponType;
}

@property(copy, nonatomic) NSString *positionCouponType; // @synthesize positionCouponType=_positionCouponType;
@property(copy, nonatomic) NSString *pageParam; // @synthesize pageParam=_pageParam;
@property(retain, nonatomic) NSDate *lastLeaveVCDate; // @synthesize lastLeaveVCDate=_lastLeaveVCDate;
@property(retain, nonatomic) NSMutableArray *useCDArr; // @synthesize useCDArr=_useCDArr;
@property(retain, nonatomic) NSTimer *CDTimer; // @synthesize CDTimer=_CDTimer;
@property(nonatomic) _Bool hasNoSegmentView; // @synthesize hasNoSegmentView=_hasNoSegmentView;
@property(retain, nonatomic) MyCouponScreenItemModel *c_screenModel; // @synthesize c_screenModel=_c_screenModel;
@property(retain, nonatomic) JDStoreNetwork *couponScreenNet; // @synthesize couponScreenNet=_couponScreenNet;
@property(retain, nonatomic) NSMutableArray *screenDataSource; // @synthesize screenDataSource=_screenDataSource;
@property(retain, nonatomic) MyCouponScreenMasterView *screenMasterView; // @synthesize screenMasterView=_screenMasterView;
@property(retain, nonatomic) UIImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
@property(retain, nonatomic) UILabel *titleViewLabel; // @synthesize titleViewLabel=_titleViewLabel;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) long long outMaxDeleteNum; // @synthesize outMaxDeleteNum=_outMaxDeleteNum;
@property(retain, nonatomic) MyCouponBottomEditView *outEditView; // @synthesize outEditView=_outEditView;
@property(retain, nonatomic) NSMutableDictionary *outDeleteDataDict; // @synthesize outDeleteDataDict=_outDeleteDataDict;
@property(nonatomic) _Bool outMulEditing; // @synthesize outMulEditing=_outMulEditing;
@property(nonatomic) _Bool outSelectedFlag; // @synthesize outSelectedFlag=_outSelectedFlag;
@property(nonatomic) long long useMaxDeleteNum; // @synthesize useMaxDeleteNum=_useMaxDeleteNum;
@property(retain, nonatomic) MyCouponBottomEditView *useEditView; // @synthesize useEditView=_useEditView;
@property(retain, nonatomic) NSMutableDictionary *useDeleteDataDict; // @synthesize useDeleteDataDict=_useDeleteDataDict;
@property(nonatomic) _Bool useMulEditing; // @synthesize useMulEditing=_useMulEditing;
@property(nonatomic) _Bool useSelectedFlag; // @synthesize useSelectedFlag=_useSelectedFlag;
@property(retain, nonatomic) NSMutableDictionary *outInvertSelectDict; // @synthesize outInvertSelectDict=_outInvertSelectDict;
@property(retain, nonatomic) NSMutableDictionary *useInvertSelectDict; // @synthesize useInvertSelectDict=_useInvertSelectDict;
@property(nonatomic) _Bool hasSelectedAll; // @synthesize hasSelectedAll=_hasSelectedAll;
@property(retain, nonatomic) MyCouponModel *singleDeleteModel; // @synthesize singleDeleteModel=_singleDeleteModel;
@property(nonatomic) _Bool hasMoreOutdate; // @synthesize hasMoreOutdate=_hasMoreOutdate;
@property(nonatomic) _Bool isLoadingOutdateTable; // @synthesize isLoadingOutdateTable=_isLoadingOutdateTable;
@property(nonatomic) long long outTotalCount; // @synthesize outTotalCount=_outTotalCount;
@property(nonatomic) long long currOutdatePage; // @synthesize currOutdatePage=_currOutdatePage;
@property(retain, nonatomic) NSMutableArray *myOutdateDataArr; // @synthesize myOutdateDataArr=_myOutdateDataArr;
@property(retain, nonatomic) UIView *outErrorNetView; // @synthesize outErrorNetView=_outErrorNetView;
@property(retain, nonatomic) UIView *outNoDataView; // @synthesize outNoDataView=_outNoDataView;
@property(retain, nonatomic) NewRefreshTableHeaderView *refresOutdateView; // @synthesize refresOutdateView=_refresOutdateView;
@property(retain, nonatomic) UITableView *outdateTable; // @synthesize outdateTable=_outdateTable;
@property(nonatomic) _Bool hasMoreUsed; // @synthesize hasMoreUsed=_hasMoreUsed;
@property(nonatomic) _Bool isLoadingUsedTable; // @synthesize isLoadingUsedTable=_isLoadingUsedTable;
@property(nonatomic) long long usedTotalCount; // @synthesize usedTotalCount=_usedTotalCount;
@property(nonatomic) long long currUsedPage; // @synthesize currUsedPage=_currUsedPage;
@property(retain, nonatomic) NSMutableArray *myUsedDataArr; // @synthesize myUsedDataArr=_myUsedDataArr;
@property(retain, nonatomic) UIView *usedErrorNetView; // @synthesize usedErrorNetView=_usedErrorNetView;
@property(retain, nonatomic) UIView *usedNoDataView; // @synthesize usedNoDataView=_usedNoDataView;
@property(retain, nonatomic) NewRefreshTableHeaderView *refresUsedView; // @synthesize refresUsedView=_refresUsedView;
@property(retain, nonatomic) UITableView *usedTable; // @synthesize usedTable=_usedTable;
@property(nonatomic) _Bool hasMoreUse; // @synthesize hasMoreUse=_hasMoreUse;
@property(nonatomic) _Bool isLoadingUseTable; // @synthesize isLoadingUseTable=_isLoadingUseTable;
@property(nonatomic) long long getingNumber; // @synthesize getingNumber=_getingNumber;
@property(nonatomic) long long useTotalCount; // @synthesize useTotalCount=_useTotalCount;
@property(nonatomic) long long currUsePage; // @synthesize currUsePage=_currUsePage;
@property(retain, nonatomic) NSMutableArray *myUseDataArr; // @synthesize myUseDataArr=_myUseDataArr;
@property(retain, nonatomic) UIView *useErrorNetView; // @synthesize useErrorNetView=_useErrorNetView;
@property(retain, nonatomic) UIView *useNoDataView; // @synthesize useNoDataView=_useNoDataView;
@property(retain, nonatomic) MyCouponGetingSectionHeaderView *getingHeaderView; // @synthesize getingHeaderView=_getingHeaderView;
@property(retain, nonatomic) NewRefreshTableHeaderView *refresUseView; // @synthesize refresUseView=_refresUseView;
@property(retain, nonatomic) UITableView *useTable; // @synthesize useTable=_useTable;
@property(retain, nonatomic) MyCouponActionView *myNewCouponActionView; // @synthesize myNewCouponActionView=_myNewCouponActionView;
@property(retain, nonatomic) MyCouponBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) MyCouponNotificationBar *useNotificationView; // @synthesize useNotificationView=_useNotificationView;
@property(retain, nonatomic) UIView *couponInfoView; // @synthesize couponInfoView=_couponInfoView;
@property(retain, nonatomic) TTTAttributedLabel *cellRuleLabel; // @synthesize cellRuleLabel=_cellRuleLabel;
@property(retain, nonatomic) JDFooterLoadingView *footerLoadingView; // @synthesize footerLoadingView=_footerLoadingView;
@property(retain, nonatomic) MyCouponHeaderView *couponSegmentView; // @synthesize couponSegmentView=_couponSegmentView;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(nonatomic) long long segmentSelectIndex; // @synthesize segmentSelectIndex=_segmentSelectIndex;
@property(copy, nonatomic) NSString *barTitleColorType; // @synthesize barTitleColorType=_barTitleColorType;
@property(nonatomic) _Bool couponMarketConfig; // @synthesize couponMarketConfig=_couponMarketConfig;
@property(nonatomic) _Bool isNeedReload; // @synthesize isNeedReload=_isNeedReload;
@property(retain, nonatomic) JDStoreNetwork *couponNotif; // @synthesize couponNotif=_couponNotif;
@property(retain, nonatomic) JDStoreNetwork *couponListNet; // @synthesize couponListNet=_couponListNet;
@property(retain, nonatomic) JDStoreNetwork *couponNet; // @synthesize couponNet=_couponNet;
- (void).cxx_destruct;
- (void)updateSegmentHidden:(_Bool)arg1;
- (void)didTouchedBgView;
- (void)updateScreenItemModel:(id)arg1;
- (void)couponCenterBtnClick;
- (void)couponInfoViewTap:(id)arg1;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)JDStatusView:(id)arg1 didClickButton:(id)arg2;
- (void)backTopButtonPressed:(id)arg1;
- (void)updateBackTopBtnState:(double)arg1 animation:(_Bool)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)jumpJDMTAWithJumpFlag:(long long)arg1 CouponModel:(id)arg2;
- (void)useTableCellCMSConfigWithUseModel:(id)arg1;
- (void)useTableDidSelected:(id)arg1;
- (void)updateEditViewStatusWithType:(long long)arg1;
- (void)updateCheckData:(id)arg1 indexPath:(id)arg2 forType:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)checkDataDic:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickedGetingSectionHeaderView;
- (void)refreshData;
- (void)selectMenuAtIndex:(long long)arg1;
- (void)setTableViewPosition:(long long)arg1 type:(long long)arg2;
- (void)resetRequestState:(long long)arg1;
- (void)addTableFooterView:(id)arg1;
- (void)showAttentionView:(int)arg1 tableView:(id)arg2;
- (void)removeAttentionView:(id)arg1;
- (void)updatePage:(long long)arg1 hasMore:(_Bool)arg2 tabTitle:(id)arg3 pageSize:(long long)arg4 isCanDelete:(id)arg5 dataNum:(long long)arg6 isSingleDel:(_Bool)arg7;
- (void)cleanData:(_Bool)arg1 type:(long long)arg2;
- (void)requestDataByType:(long long)arg1 page:(long long)arg2 pageSize:(long long)arg3 isCleanData:(_Bool)arg4 isRefresh:(_Bool)arg5 isSingleDel:(_Bool)arg6;
- (void)addGettingNumRequest;
- (void)refreshCouponInfoViewWithData:(id)arg1;
- (void)getTheCouponTip;
- (void)updateCheckTableView:(id)arg1;
- (void)updateExpandTableView:(id)arg1;
- (void)reloadData;
- (void)requestDataWithLogin;
- (id)createRefresHeaderView:(id)arg1;
- (id)creatAttentionViewWithType:(int)arg1 ForTabelView:(id)arg2;
- (id)createTableViewTag:(long long)arg1;
- (void)applicationEnterBackground;
- (void)applicationBecomeActive;
- (void)resetNavigationControllerUI;
- (void)changeNavSkin;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)adjustStatusBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)timerRunAction;
- (void)updateCountDownTimes;
- (void)recordCurrentTimestamp;
- (void)stopCDTime;
- (void)startCDTime;
@property(nonatomic) _Bool isLoadingNetWork;
@property(retain, nonatomic) MyCouponPersonal *personalityCouponAlert; // @dynamic personalityCouponAlert;
@property(retain, nonatomic) JDCoreCouponBaseModel *editCouponModel; // @dynamic editCouponModel;
- (void)onClickRule:(int)arg1;
- (void)couponActionFailToast:(id)arg1 type:(int)arg2;
- (void)onClickShare:(id)arg1 type:(int)arg2;
- (void)startSellCoupon:(id)arg1 type:(int)arg2;
- (void)onClickSell:(id)arg1 type:(int)arg2;
- (void)shareCancelAttention;
- (void)startCancelNetWork:(id)arg1 type:(int)arg2 isUseRecord:(_Bool)arg3;
- (void)couponCancelAlert:(id)arg1 type:(int)arg2;
- (void)JDMTAWithEventID:(id)arg1 eventName:(id)arg2 ParamValue:(id)arg3;
- (void)couponCheckNetWork:(id)arg1 type:(int)arg2;
- (void)getNewCouponMsg:(id)arg1 type:(long long)arg2;
- (void)didDoneBtnClick:(id)arg1;
- (void)showNewCoupon;
- (void)updateCouponStateCleanData:(id)arg1 inTableView:(id)arg2 isSingleDel:(_Bool)arg3;
- (void)deleteCheckedCoupon:(id)arg1 isShowNewCoupon:(_Bool)arg2 inTableView:(id)arg3;
- (void)deleteAttentionWithTag:(long long)arg1 has:(_Bool)arg2 MoreThanMaxDelNum:(long long)arg3;
- (void)newCouponAttention;
- (void)deleteCheckedInTableView:(id)arg1;
- (void)cancelMulEditingInTableView:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)SelectAll:(_Bool)arg1 inTableView:(id)arg2;
@property(retain, nonatomic) UILabel *messageNumberLabel; // @dynamic messageNumberLabel;
@property(retain, nonatomic) JDImageView *messageNumberIcon; // @dynamic messageNumberIcon;
@property(retain, nonatomic) UIButton *moreButton; // @dynamic moreButton;
@property(retain, nonatomic) NSMutableDictionary *navDic; // @dynamic navDic;
@property(retain, nonatomic) NSMutableArray *outDateMoreArr; // @dynamic outDateMoreArr;
@property(retain, nonatomic) NSMutableArray *hasUsedMoreArr; // @dynamic hasUsedMoreArr;
@property(retain, nonatomic) NSMutableArray *useMoreArr; // @dynamic useMoreArr;
@property(retain, nonatomic) UIImageView *redDotImageView; // @dynamic redDotImageView;
- (void)moreAction:(id)arg1;
- (void)layoutBadgeFrame;
- (id)doorNumSystemFontOfSize:(double)arg1;
- (void)getRedDotCompleted:(id)arg1;
- (void)setRedDotHidden:(_Bool)arg1;
- (void)goToGettingCoupon;
- (void)goToCouponCenter:(_Bool)arg1;
- (void)goToWebViewController:(id)arg1;
- (void)goToSearchViewController;
- (void)goToAppRootViewController;
- (void)goToMessageCenter;
- (void)pushNextViewController:(long long)arg1;
- (void)pushWithCheckEditState:(long long)arg1;
- (void)startMulEditingInTableView:(id)arg1;
- (void)hiddenCouponHelpIntro;
- (void)showCouponIntro;
- (void)toastView:(id)arg1 didSelectMenuRow:(long long)arg2;
- (long long)toastView:(id)arg1 maxBadgeNumberAtRow:(long long)arg2;
- (long long)toastView:(id)arg1 badgeNumberAtRow:(long long)arg2;
- (_Bool)toastView:(id)arg1 hasRedDotAtRow:(long long)arg2;
- (id)toastView:(id)arg1 titleForMenuRow:(long long)arg2;
- (id)toastView:(id)arg1 imageForMenuRow:(long long)arg2;
- (long long)numberOfRowsInMenuToastView:(id)arg1;
- (id)cmsMoreItemModel:(id)arg1 imageNamed:(id)arg2 type:(long long)arg3;
- (id)moreItemModel:(id)arg1 imageNamed:(id)arg2 type:(long long)arg3;
- (void)updateNavigationBarView:(id)arg1;
- (void)resetMoreButtonView;
- (void)changeNavigationBarViewSkin:(id)arg1;
- (void)configNavigationBarView;
- (void)notificationViewDidDismiss:(id)arg1;
- (void)notificationViewCloseBtnClicked:(id)arg1;
- (void)notificationViewTap:(id)arg1;
- (void)resetNoDataAndNetErrorViewFrame;
- (void)scrollUseTabelViewWithPosition:(long long)arg1;
- (_Bool)updateNotifcationBarWithId:(id)arg1 Msg:(id)arg2 jumpUrl:(id)arg3 cacheType:(long long)arg4 animationDismiss:(_Bool)arg5 dismissType:(long long)arg6;
- (_Bool)createSettingNotificationBarWithText:(id)arg1;
- (void)createNormalNotificationBar;
- (void)resetShareStatuesOnTopWithScrollView:(id)arg1;
- (void)clearNotifView;
- (void)createShareNotificationBarOriginalState:(_Bool)arg1;
- (void)configNotificationOnTableType:(long long)arg1 withRequestComponents:(id)arg2 isRefresh:(_Bool)arg3 isSingleDel:(_Bool)arg4;
- (void)createNotificationBar;
- (void)resetScreenSkin;
- (void)changeScreenSkin;
- (void)clickTitleBtnAction:(id)arg1;
- (void)updateScreenBtnStateIsOrigin:(_Bool)arg1 withTitle:(id)arg2;
- (void)dismissScreenView;
- (void)dismissScreenViewWithTitle:(id)arg1;
- (void)showScreenViewWithTitle:(id)arg1;
- (void)removeScreenViewFromView;
- (void)addScreenViewOnViewWithTitle:(id)arg1;
- (void)requesetScreen;
- (void)initScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

