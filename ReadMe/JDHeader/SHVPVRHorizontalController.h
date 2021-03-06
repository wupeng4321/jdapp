//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDVRProductModelDelegate-Protocol.h"
#import "SHVPDanmuSDKDelegate-Protocol.h"
#import "SHVPLivingPlayerDelegate-Protocol.h"

@class JDImageView, JDSHUnplGenerator, NSMutableArray, NSString, NSTimer, SHVPAnchorTipsView, SHVPAuthorHeadView, SHVPBoneRuleView, SHVPCommentView, SHVPCoreCommentView, SHVPCouponView, SHVPCustomActivityView, SHVPDataProvider, SHVPDownLoader, SHVPGiftBoardView, SHVPGiftButtonView, SHVPGiftFullGifView, SHVPGiftHitView, SHVPHitLikedAnimationView, SHVPHorizonShareView, SHVPLikedAnimationController, SHVPLotteryView, SHVPMainPageAddCommentView, SHVPMainPageAnchorInfoView, SHVPMainPageButtonView, SHVPMainPageCommentTableViewDelegate, SHVPMainPageNewProductView, SHVPMainPageProductView, SHVPMainPageReminderView, SHVPMainPageReplayBar, SHVPMainPageSkuView, SHVPMainPageViewerHeaderView, SHVPReloadNetView, SHVPRequestShareView, SHVPToastBindPhoneView, SHVPVROneTipView, SHVPVRTapView, SHVPVRTwoTipView, SHVPVRVerticalController, SHVPXViewUtil, UIButton, UIImageView, UILabel, UIScrollView, UITapGestureRecognizer, UIView;

@interface SHVPVRHorizontalController : JDViewController <SHVPDanmuSDKDelegate, SHVPLivingPlayerDelegate, JDVRProductModelDelegate>
{
    double _startContentOffsetX;
    double _willEndContentOffsetX;
    double _endContentOffsetX;
    _Bool _isShowSkuView;
    _Bool _isUserHideSkuView;
    _Bool _hasGetedLikeCount;
    _Bool _authorIsInReset;
    _Bool _isLECReturnStatus;
    _Bool _isShowAuthorInfoView;
    _Bool _isSelfViewShow;
    _Bool _hasToast;
    SHVPVRVerticalController *_vPMainPageVC;
    NSString *_roomId;
    NSString *_liveOrigin;
    NSString *_shareNickname;
    NSString *_sharePin;
    NSString *_authorId;
    long long _playStatus;
    SHVPDataProvider *_dataProvider;
    SHVPCustomActivityView *_activityIndicatorView;
    UIImageView *_bgView;
    SHVPMainPageReminderView *_reminderView;
    UIView *_mainView;
    UIView *_animationBgView;
    NSString *_playerURLString;
    UILabel *_viewerCountLabel;
    SHVPMainPageViewerHeaderView *_viewerHeaderView;
    SHVPMainPageButtonView *_likeButton;
    SHVPMainPageButtonView *_cartListButton;
    double _animationViewTop;
    SHVPLikedAnimationController *_animationView;
    SHVPAnchorTipsView *_anchorTipsView;
    SHVPMainPageSkuView *_skuView;
    SHVPMainPageAddCommentView *_addCommentView;
    SHVPCommentView *_commentView;
    SHVPCoreCommentView *_coreCommentView;
    SHVPMainPageCommentTableViewDelegate *_danmuTableviewDelegate;
    NSMutableArray *_toShowProductViewArr;
    SHVPMainPageReplayBar *_replayBar;
    NSMutableArray *_stuckTimeArray;
    SHVPReloadNetView *_reloadNetView;
    UIButton *_changeVRBtn;
    SHVPLotteryView *_lotteryView;
    SHVPXViewUtil *_xViewUtil;
    SHVPMainPageAnchorInfoView *_anchorInfoView;
    SHVPMainPageNewProductView *_newProductView;
    SHVPRequestShareView *_requestShareView;
    SHVPDownLoader *_downLoader;
    SHVPMainPageProductView *_firstNewProView;
    SHVPGiftButtonView *_giftBtnView;
    SHVPGiftBoardView *_giftBoardView;
    JDSHUnplGenerator *_unplGenerator;
    NSMutableArray *_toShowGiftHitViewArr;
    SHVPGiftHitView *_giftHitView;
    SHVPGiftFullGifView *_fullGifView;
    NSMutableArray *_toShowFullGiftViewArr;
    NSString *_direction;
    NSString *_fromId;
    double _playerStartTime;
    UIButton *_changeSensorStateBtn;
    SHVPCouponView *_couponView;
    NSMutableArray *_toShowCoupondViewArr;
    UIView *_iphoneXView;
    UIView *_deepView;
    UIScrollView *_bgScrollView;
    UIButton *_closeBtn;
    UILabel *_iconLabel;
    UIImageView *_iconImage;
    UILabel *_roomTitle;
    UIView *_topBlackView;
    UIView *_bottomBlackView;
    UIButton *_commentBtn;
    UIButton *_shareBtn;
    SHVPAuthorHeadView *_authorHeadView;
    UIButton *_attentionBtn;
    unsigned long long _originNetworkStatus;
    JDImageView *_floatIcon;
    NSTimer *_reloadTimer;
    NSTimer *_collectTimer;
    NSTimer *_uploadTimer;
    SHVPVROneTipView *_oneTipView;
    SHVPVRTwoTipView *_twoTipView;
    SHVPVRTapView *_tapView;
    SHVPHorizonShareView *_shareView;
    SHVPHitLikedAnimationView *_hitLikedView;
    SHVPBoneRuleView *_boneRuleView;
    UITapGestureRecognizer *_showLogTap;
    SHVPToastBindPhoneView *_bindPhoneView;
}

@property(retain, nonatomic) SHVPToastBindPhoneView *bindPhoneView; // @synthesize bindPhoneView=_bindPhoneView;
@property(retain, nonatomic) UITapGestureRecognizer *showLogTap; // @synthesize showLogTap=_showLogTap;
@property(retain, nonatomic) SHVPBoneRuleView *boneRuleView; // @synthesize boneRuleView=_boneRuleView;
@property(retain, nonatomic) SHVPHitLikedAnimationView *hitLikedView; // @synthesize hitLikedView=_hitLikedView;
@property(retain, nonatomic) SHVPHorizonShareView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) SHVPVRTapView *tapView; // @synthesize tapView=_tapView;
@property(retain, nonatomic) SHVPVRTwoTipView *twoTipView; // @synthesize twoTipView=_twoTipView;
@property(retain, nonatomic) SHVPVROneTipView *oneTipView; // @synthesize oneTipView=_oneTipView;
@property(retain, nonatomic) NSTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(retain, nonatomic) NSTimer *collectTimer; // @synthesize collectTimer=_collectTimer;
@property(retain, nonatomic) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property(retain, nonatomic) JDImageView *floatIcon; // @synthesize floatIcon=_floatIcon;
@property(nonatomic) unsigned long long originNetworkStatus; // @synthesize originNetworkStatus=_originNetworkStatus;
@property(nonatomic) _Bool hasToast; // @synthesize hasToast=_hasToast;
@property(retain, nonatomic) UIButton *attentionBtn; // @synthesize attentionBtn=_attentionBtn;
@property(retain, nonatomic) SHVPAuthorHeadView *authorHeadView; // @synthesize authorHeadView=_authorHeadView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UIView *bottomBlackView; // @synthesize bottomBlackView=_bottomBlackView;
@property(retain, nonatomic) UIView *topBlackView; // @synthesize topBlackView=_topBlackView;
@property(retain, nonatomic) UILabel *roomTitle; // @synthesize roomTitle=_roomTitle;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(retain, nonatomic) UIView *deepView; // @synthesize deepView=_deepView;
@property(retain, nonatomic) UIView *iphoneXView; // @synthesize iphoneXView=_iphoneXView;
@property(retain, nonatomic) NSMutableArray *toShowCoupondViewArr; // @synthesize toShowCoupondViewArr=_toShowCoupondViewArr;
@property(retain, nonatomic) SHVPCouponView *couponView; // @synthesize couponView=_couponView;
@property(retain, nonatomic) UIButton *changeSensorStateBtn; // @synthesize changeSensorStateBtn=_changeSensorStateBtn;
@property(nonatomic) double playerStartTime; // @synthesize playerStartTime=_playerStartTime;
@property(copy, nonatomic) NSString *fromId; // @synthesize fromId=_fromId;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSMutableArray *toShowFullGiftViewArr; // @synthesize toShowFullGiftViewArr=_toShowFullGiftViewArr;
@property(retain, nonatomic) SHVPGiftFullGifView *fullGifView; // @synthesize fullGifView=_fullGifView;
@property(retain, nonatomic) SHVPGiftHitView *giftHitView; // @synthesize giftHitView=_giftHitView;
@property(retain, nonatomic) NSMutableArray *toShowGiftHitViewArr; // @synthesize toShowGiftHitViewArr=_toShowGiftHitViewArr;
@property(retain, nonatomic) JDSHUnplGenerator *unplGenerator; // @synthesize unplGenerator=_unplGenerator;
@property(retain, nonatomic) SHVPGiftBoardView *giftBoardView; // @synthesize giftBoardView=_giftBoardView;
@property(retain, nonatomic) SHVPGiftButtonView *giftBtnView; // @synthesize giftBtnView=_giftBtnView;
@property(nonatomic) _Bool isSelfViewShow; // @synthesize isSelfViewShow=_isSelfViewShow;
@property(retain, nonatomic) SHVPMainPageProductView *firstNewProView; // @synthesize firstNewProView=_firstNewProView;
@property(retain, nonatomic) SHVPDownLoader *downLoader; // @synthesize downLoader=_downLoader;
@property(retain, nonatomic) SHVPRequestShareView *requestShareView; // @synthesize requestShareView=_requestShareView;
@property(retain, nonatomic) SHVPMainPageNewProductView *newProductView; // @synthesize newProductView=_newProductView;
@property(nonatomic) _Bool isShowAuthorInfoView; // @synthesize isShowAuthorInfoView=_isShowAuthorInfoView;
@property(retain, nonatomic) SHVPMainPageAnchorInfoView *anchorInfoView; // @synthesize anchorInfoView=_anchorInfoView;
@property(retain, nonatomic) SHVPXViewUtil *xViewUtil; // @synthesize xViewUtil=_xViewUtil;
@property(retain, nonatomic) SHVPLotteryView *lotteryView; // @synthesize lotteryView=_lotteryView;
@property(retain, nonatomic) UIButton *changeVRBtn; // @synthesize changeVRBtn=_changeVRBtn;
@property(nonatomic) _Bool isLECReturnStatus; // @synthesize isLECReturnStatus=_isLECReturnStatus;
@property(nonatomic) _Bool authorIsInReset; // @synthesize authorIsInReset=_authorIsInReset;
@property(retain, nonatomic) SHVPReloadNetView *reloadNetView; // @synthesize reloadNetView=_reloadNetView;
@property(retain, nonatomic) NSMutableArray *stuckTimeArray; // @synthesize stuckTimeArray=_stuckTimeArray;
@property(retain, nonatomic) SHVPMainPageReplayBar *replayBar; // @synthesize replayBar=_replayBar;
@property(nonatomic) _Bool hasGetedLikeCount; // @synthesize hasGetedLikeCount=_hasGetedLikeCount;
@property(retain, nonatomic) NSMutableArray *toShowProductViewArr; // @synthesize toShowProductViewArr=_toShowProductViewArr;
@property(retain, nonatomic) SHVPMainPageCommentTableViewDelegate *danmuTableviewDelegate; // @synthesize danmuTableviewDelegate=_danmuTableviewDelegate;
@property(retain, nonatomic) SHVPCoreCommentView *coreCommentView; // @synthesize coreCommentView=_coreCommentView;
@property(retain, nonatomic) SHVPCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) SHVPMainPageAddCommentView *addCommentView; // @synthesize addCommentView=_addCommentView;
@property(nonatomic) _Bool isUserHideSkuView; // @synthesize isUserHideSkuView=_isUserHideSkuView;
@property(nonatomic) _Bool isShowSkuView; // @synthesize isShowSkuView=_isShowSkuView;
@property(retain, nonatomic) SHVPMainPageSkuView *skuView; // @synthesize skuView=_skuView;
@property(retain, nonatomic) SHVPAnchorTipsView *anchorTipsView; // @synthesize anchorTipsView=_anchorTipsView;
@property(retain, nonatomic) SHVPLikedAnimationController *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) double animationViewTop; // @synthesize animationViewTop=_animationViewTop;
@property(retain, nonatomic) SHVPMainPageButtonView *cartListButton; // @synthesize cartListButton=_cartListButton;
@property(retain, nonatomic) SHVPMainPageButtonView *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) SHVPMainPageViewerHeaderView *viewerHeaderView; // @synthesize viewerHeaderView=_viewerHeaderView;
@property(retain, nonatomic) UILabel *viewerCountLabel; // @synthesize viewerCountLabel=_viewerCountLabel;
@property(copy, nonatomic) NSString *playerURLString; // @synthesize playerURLString=_playerURLString;
@property(retain, nonatomic) UIView *animationBgView; // @synthesize animationBgView=_animationBgView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) SHVPMainPageReminderView *reminderView; // @synthesize reminderView=_reminderView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SHVPCustomActivityView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SHVPDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *sharePin; // @synthesize sharePin=_sharePin;
@property(copy, nonatomic) NSString *shareNickname; // @synthesize shareNickname=_shareNickname;
@property(copy, nonatomic) NSString *liveOrigin; // @synthesize liveOrigin=_liveOrigin;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) __weak SHVPVRVerticalController *vPMainPageVC; // @synthesize vPMainPageVC=_vPMainPageVC;
- (void).cxx_destruct;
- (_Bool)isLogin;
- (_Bool)canShowNewProOrRequsetShareView;
- (void)refreshRoom;
- (void)needLoginAction;
- (void)showLogView:(id)arg1;
- (void)startUNPL:(id)arg1;
- (_Bool)isLivingPlayerViewController;
- (_Bool)hasAddedToCart:(long long)arg1;
- (id)getProductModelWithIndex:(long long)arg1;
- (void)onBack;
- (void)productModelClosed:(id)arg1;
- (void)addToCart:(id)arg1;
- (void)backToVRRoom;
- (void)jumpToOtherView;
- (void)setTapViewStatue:(_Bool)arg1;
- (void)changeSensorState:(id)arg1;
- (void)showTwoTipViewAndChangeBtn;
- (void)cannotShowTwo;
- (void)twoChangeToOne;
- (void)oneChangeToTwo;
- (void)changeVR:(id)arg1;
- (void)showOneTipViewAndChangeBtn;
- (void)share:(id)arg1;
- (void)showReceiveCouponToast;
- (void)removeDataError;
- (void)toastDataError:(unsigned long long)arg1;
- (void)upLoadAbnormalDataWhileLiveEnd;
- (void)setAbnormalModelVideoType:(id)arg1;
- (void)setAbnormalModelSource:(id)arg1;
- (void)setAbnormalModelPlayType:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)attentionBtnAction;
- (void)sendWelcomeMessage;
- (void)sendShareNicknameMessage;
- (void)tapAuthor;
- (void)invalidReloadTimer;
- (void)startReloadTableView;
- (void)creatReloadTimer;
- (void)tapFloatIcon;
- (void)shareDidReciScreenShotNoti;
- (void)addCartResult:(long long)arg1;
- (void)toastNoWIFI;
- (_Bool)isNoWifi;
- (void)reachabilityChanged:(id)arg1;
- (void)unrigisterDanmu;
- (void)stopDanmu;
- (void)startDanmu;
- (void)initDanmu;
- (void)userDidLoginOutEvent:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)startComment;
- (void)buryQuitRoom;
- (void)unrigisterSelfUnits:(id)arg1;
- (void)closeRoom;
- (double)getHorizontalHeight;
- (double)getHorizontalWidth;
- (void)drawFloatIcon;
- (void)setUpReplayView;
- (void)setUpOnGoingView;
- (void)getPlayStatus;
- (void)startSetUp;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)startFetchBone;
- (void)startFetchRoomData;
- (void)viewDidLoad;
- (void)duplicateLivePlayerRoomUnrigister;
- (void)unrigister;
- (void)dealloc;
- (id)initWithParam:(id)arg1;
- (void)innerShowAuthorInfoView;
- (void)innerSetAuthorData;
- (void)showAuthorInfoError;
- (void)showAuthorInfoView;
- (void)fetchAuthorInfo;
- (void)innerShowCartInfoView;
- (void)innerSetCartData;
- (_Bool)cartHasData;
- (void)showCartInfoError;
- (void)showCartInfoView;
- (void)fetchCartInfo;
- (void)hostAddProductToCart;
- (void)addCoreCommentWithNickname:(id)arg1 Content:(id)arg2 Type:(unsigned long long)arg3;
- (void)reloadTableview;
- (void)sdk:(id)arg1 ReceiveCouponWithAct:(id)arg2 couponId:(id)arg3 operation:(id)arg4 quota:(id)arg5 denomination:(id)arg6;
- (void)sdk:(id)arg1 EndActivityWithType:(id)arg2;
- (void)sdk:(id)arg1 StartActivityWithIimgUrl:(id)arg2 xviewUrl:(id)arg3;
- (void)sdk:(id)arg1 AnchorAskShare:(unsigned char)arg2;
- (void)sdk:(id)arg1 NotifyContent:(id)arg2;
- (void)sdk:(id)arg1 liveBroadCastEndAtTime:(double)arg2;
- (void)sdk:(id)arg1 bringViewerNum:(id)arg2 nickName:(id)arg3;
- (void)sdk:(id)arg1 AnchorSendGiftGiftId:(id)arg2 giftName:(id)arg3 giftGif:(id)arg4 nickName:(id)arg5 type:(id)arg6 userHeadImg:(id)arg7 giftType:(id)arg8 giftFullGif:(id)arg9 giftDuration:(double)arg10;
- (void)sdk:(id)arg1 AnchorExplainProductId:(id)arg2 ProductName:(id)arg3 ProductPrice:(id)arg4 ProductUrl:(id)arg5 Sort:(id)arg6 LiveOnly:(_Bool)arg7;
- (void)sdk:(id)arg1 ProductList:(id)arg2;
- (void)sdk:(id)arg1 AnchorResumeLiveWithNickName:(id)arg2;
- (void)sdk:(id)arg1 AnchorSuspendLiveWithNickName:(id)arg2;
- (void)sdk:(id)arg1 ViewerWinPrizeDrawType:(id)arg2 Drawcode:(id)arg3 ProductId:(id)arg4 ProductName:(id)arg5 ProductUrl:(id)arg6 Nickname:(id)arg7;
- (void)sdk:(id)arg1 AnchorBeginPrizeDrawType:(id)arg2 Drawcode:(id)arg3;
- (void)sdk:(id)arg1 ThumbsUpStraightWithNickname:(id)arg2 Number:(int)arg3;
- (void)sdk:(id)arg1 AnchorStickProductId:(id)arg2 ProductName:(id)arg3 ProductPrice:(id)arg4 ProductUrl:(id)arg5 Sort:(id)arg6 LiveOnly:(_Bool)arg7;
- (void)sdk:(id)arg1 ViewerDrawViewerWithNickname0:(id)arg2 nickname1:(id)arg3;
- (void)sdk:(id)arg1 ViewerGetCouponWithNickName:(id)arg2 Content:(id)arg3;
- (void)sdk:(id)arg1 ViewerShareLiveWithNickName:(id)arg2 shareBone:(id)arg3;
- (void)sdk:(id)arg1 AskExplainProductId:(id)arg2 Nickname:(id)arg3 PromotionId:(id)arg4 Sort:(id)arg5 IsPlus:(_Bool)arg6 extraTag:(id)arg7;
- (void)sdk:(id)arg1 JoinShopViewerNickName:(id)arg2;
- (void)sdk:(id)arg1 FollowShopViewerNickName:(id)arg2;
- (void)sdk:(id)arg1 FollowAnchorViewerNickName:(id)arg2;
- (void)sdk:(id)arg1 BuyProductMessage:(id)arg2 Nickname:(id)arg3 Sort:(id)arg4;
- (void)sdk:(id)arg1 ShopcartMessage:(id)arg2 Nickname:(id)arg3 ProductId:(id)arg4 Sort:(id)arg5;
- (void)sdk:(id)arg1 AnchorMessage:(id)arg2 Nickname:(id)arg3;
- (void)sdk:(id)arg1 UserMessage:(id)arg2 Nickname:(id)arg3 IsPlus:(_Bool)arg4 extraTag:(id)arg5;
- (void)sdk:(id)arg1 HeadPicArray:(id)arg2;
- (void)sdk:(id)arg1 TotalCartNum:(int)arg2;
- (void)sdk:(id)arg1 TotalThumbUpNum:(int)arg2;
- (void)sdk:(id)arg1 LiveBroadcastSummaryContent:(id)arg2;
- (void)sdk:(id)arg1 TotalViewerNum:(int)arg2;
- (void)sdk:(id)arg1 LeaveLiveBroadcastWithNickName:(id)arg2;
- (void)sdk:(id)arg1 JoinLiveBroadcastWithNickName:(id)arg2;
- (void)sdk:(id)arg1 AuthSuccessWithNickName:(id)arg2;
- (void)sdk:(id)arg1 ClosedWithAddress:(id)arg2 Error:(id)arg3 Retrying:(_Bool)arg4 buryArr:(id)arg5;
- (id)navigationController;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)fetchEarnBonesInfoWithType:(long long)arg1;
- (void)buryDataWithStatus:(long long)arg1 model:(id)arg2;
- (void)fetchSendGiftInfoWithModel:(id)arg1;
- (void)fetchGiftListInfo;
- (void)startFetchBoneWithType:(unsigned long long)arg1;
- (void)startFetchBoneWithType;
- (void)stopEarnBoneNotify;
- (void)startEarnBoneNotify;
@property(nonatomic) _Bool willAppear;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)BuryData:(id)arg1;
- (void)goToJump:(id)arg1;
- (void)setBaseModelTapBlock:(id)arg1;
- (void)LECStatusReturned;
- (void)performOutTimeTips;
- (void)get15SecondsCountDown;
- (void)addStuckTimeToArray;
- (void)judgeVRModel:(long long)arg1;
- (void)SHVPLivingPlayer:(id)arg1 dropFrameWithAudioCacheDuration:(long long)arg2 audioDropDuration:(long long)arg3 videoCacheDuration:(long long)arg4 videoDropDuration:(long long)arg5;
- (void)SHVPLivingPlayer:(id)arg1 contentTypeChanged:(int)arg2;
- (void)SHVPLivingPlayer:(id)arg1 position:(long long)arg2 cacheDuration:(long long)arg3 duration:(long long)arg4;
- (void)SHVPLivingPlayer:(id)arg1 playerEvent:(int)arg2;
- (void)stop;
- (void)play;
- (void)setUpPlayerParameter;
- (void)initPlayer;
- (void)sendLotteryIconBury;
- (void)closeXviewAction;
- (void)tapLotteryIcon;
- (void)removeLotteryView;
- (void)showLotteryView;
- (void)receiveLotteryMessage;
- (void)setBuryData;
- (void)fetchDataRefreshRoom;
- (void)fetchRoomData;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setWillDismissCallBack:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)willDismissCallBack;
- (id)rootViewController;
- (CDUnknownBlockType)callLoginCallBack;
- (void)setCallLoginCallBack:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)dismissCallBack;
- (void)setDismissCallBack:(CDUnknownBlockType)arg1;
- (id)transitionView;
- (void)setTransitionView:(id)arg1;
- (id)transitionViewOriginalFrame;
- (void)setTransitionViewOriginalFrame:(id)arg1;
- (void)doActionWhenTheHorizontalVCHasDismissedWithCompletion:(CDUnknownBlockType)arg1;
- (void)exitVPRoomWithIsNormalExit:(_Bool)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)dismissToCallLogin:(CDUnknownBlockType)arg1;
- (void)dismissHorizontalViewControllerAnimated:(_Bool)arg1 isNormalExit:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fixVersionAfterChangeInterfaceOrientations;
- (void)fixVersionBeforeChangeInterfaceOrientations;
- (id)creatMarkViewToWindow;
- (void)showAnimationWithMarkView:(id)arg1 completionCallBack:(CDUnknownBlockType)arg2;
- (void)fastShowHorizontalFromViewController:(id)arg1 transtionWithView:(id)arg2 completionCallBack:(CDUnknownBlockType)arg3 willDismissCallBack:(CDUnknownBlockType)arg4 dismissCallBack:(CDUnknownBlockType)arg5 callLoginCallBack:(CDUnknownBlockType)arg6;
- (void)showHorizontalFromViewController:(id)arg1 animation:(_Bool)arg2 transtionWithView:(id)arg3 completionCallBack:(CDUnknownBlockType)arg4 dismissCallBack:(CDUnknownBlockType)arg5;
- (void)closeTheShowedModel;
- (void)deleteProductModel;
- (void)startDownLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

