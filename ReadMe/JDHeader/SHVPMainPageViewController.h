//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPVBaseViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "SHVPDanmuSDKDelegate-Protocol.h"
#import "SHVPLivingPlayerDelegate-Protocol.h"

@class JDActivityIndicatorView, JDFooterLoadingView, JDImageView, JDSHUnplGenerator, JDStatusView, NSMutableArray, NSNumber, NSString, NSTimer, SHVPAnchorTipsView, SHVPAttentionToastView, SHVPAuthorHeadView, SHVPBgView, SHVPBoneRuleView, SHVPChangeLiveToReView, SHVPCommentView, SHVPCoreCommentView, SHVPCouponView, SHVPCustomActivityView, SHVPDataProvider, SHVPGiftBoardView, SHVPGiftButtonView, SHVPGiftFullGifView, SHVPGiftHitView, SHVPHitLikedAnimationView, SHVPLikedAnimationController, SHVPLiveQAPanelView, SHVPLotteryView, SHVPMainPageAddCommentView, SHVPMainPageAnchorInfoView, SHVPMainPageButtonView, SHVPMainPageCommentTableViewDelegate, SHVPMainPageHorizontalViewController, SHVPMainPageNewProductView, SHVPMainPageProductView, SHVPMainPageReminderView, SHVPMainPageReplayBar, SHVPMainPageSkuView, SHVPMainPageTouchScreen, SHVPMainPageViewerHeaderView, SHVPNewLotteryController, SHVPNewLotteryXviewUtils, SHVPQAShareView, SHVPRecommentView, SHVPReloadNetView, SHVPRequestShareView, SHVPSlidGuideView, SHVPXViewUtil, UIButton, UIImageView, UILabel, UIScrollView, UITapGestureRecognizer, UIView;

@interface SHVPMainPageViewController : SHVPVBaseViewController <SHVPDanmuSDKDelegate, SHVPLivingPlayerDelegate, JDBaseToastViewDelegate>
{
    SHVPAttentionToastView *_attentionToastView;
    double _startContentOffsetX;
    double _willEndContentOffsetX;
    double _endContentOffsetX;
    _Bool isNeedHideNavigationBar;
    _Bool isShowToastView;
    _Bool _isShowAuthorInfoView;
    _Bool _isShowSkuView;
    _Bool _isUserHideSkuView;
    _Bool _hasGetedLikeCount;
    _Bool _authorIsInReset;
    _Bool _isLECReturnStatus;
    _Bool _hasStartedHiddenTouchScreen;
    _Bool _isDoingCartAnimation;
    _Bool _cartHasUnfolded;
    _Bool _noNeedMonitorOrientation;
    _Bool _isLogining;
    _Bool _isInLiveRoom;
    _Bool _closePanelView;
    _Bool _isSWindowClosed;
    _Bool _isSelfViewShow;
    _Bool _hasToast;
    SHVPCustomActivityView *_activityIndicatorView;
    SHVPCustomActivityView *_playerActivityIndicatorView;
    SHVPMainPageReminderView *_reminderView;
    SHVPMainPageSkuView *_skuView;
    JDFooterLoadingView *_skuLoadingView;
    SHVPMainPageAddCommentView *_addCommentView;
    SHVPMainPageAnchorInfoView *_anchorInfoView;
    SHVPBgView *_bgView;
    UIScrollView *_topScrollView;
    UIView *_iphoneXView;
    UIView *_deepView;
    UIView *_contentView;
    UIScrollView *_bgScrollView;
    UIButton *_closeBtn;
    UIButton *_shareBtn;
    UIButton *_revivalCardBtn;
    JDStatusView *_statusView;
    UIView *_questionTipView;
    UIView *_mainView;
    UIView *_animationBgView;
    SHVPLikedAnimationController *_animationView;
    SHVPCoreCommentView *_coreCommentView;
    SHVPAuthorHeadView *_authorHeadView;
    UIButton *_attentionBtn;
    UILabel *_viewerCountLabel;
    SHVPMainPageViewerHeaderView *_viewerHeaderView;
    SHVPMainPageButtonView *_likeButton;
    SHVPMainPageButtonView *_cartListButton;
    SHVPCommentView *_commentView;
    SHVPAnchorTipsView *_anchorTipsView;
    SHVPMainPageReplayBar *_replayBar;
    SHVPReloadNetView *_reloadNetView;
    SHVPMainPageTouchScreen *_touchScreen;
    JDImageView *_floatIcon;
    SHVPLotteryView *_lotteryView;
    SHVPXViewUtil *_xViewUtil;
    SHVPMainPageNewProductView *_newProductView;
    SHVPRequestShareView *_requestShareView;
    SHVPMainPageProductView *_firstNewProView;
    SHVPGiftButtonView *_giftBtnView;
    SHVPGiftBoardView *_giftBoardView;
    SHVPGiftHitView *_giftHitView;
    SHVPGiftFullGifView *_fullGifView;
    SHVPBoneRuleView *_boneRuleView;
    SHVPCouponView *_couponView;
    NSMutableArray *_toShowGiftHitViewArr;
    NSMutableArray *_toShowFullGiftViewArr;
    NSString *_direction;
    NSString *_fromId;
    NSString *_bgImg;
    SHVPChangeLiveToReView *_endRecommentView;
    SHVPRecommentView *_recommentView;
    NSString *_roomId;
    NSString *_authorId;
    NSString *_liveOrigin;
    NSString *_shareNickname;
    NSString *_sharePin;
    NSString *_playerURLString;
    unsigned long long _orientation;
    long long _playStatus;
    double _animationViewTop;
    SHVPMainPageCommentTableViewDelegate *_danmuTableviewDelegate;
    NSMutableArray *_toShowProductViewArr;
    NSMutableArray *_toShowCoupondViewArr;
    SHVPDataProvider *_dataProvider;
    JDSHUnplGenerator *_unplGenerator;
    double _playerStartTime;
    SHVPLiveQAPanelView *_qaPanelView;
    UILabel *_iconLabel;
    UIImageView *_iconImage;
    UILabel *_roomTitle;
    UIButton *_commentBtn;
    unsigned long long _originNetworkStatus;
    NSTimer *_reloadTimer;
    NSTimer *_collectTimer;
    NSTimer *_uploadTimer;
    SHVPMainPageHorizontalViewController *_horizontalVC;
    SHVPHitLikedAnimationView *_hitLikedView;
    UITapGestureRecognizer *_showLogTap;
    SHVPSlidGuideView *_slidGuideView;
    UIView *_topBlackView;
    UIView *_bottomBlackView;
    UIView *_replayInfoView;
    SHVPQAShareView *_commonQAShareView;
    SHVPQAShareView *_successQAShareView;
    JDActivityIndicatorView *_picShareIndicator;
}

@property(retain, nonatomic) JDActivityIndicatorView *picShareIndicator; // @synthesize picShareIndicator=_picShareIndicator;
@property(retain, nonatomic) SHVPQAShareView *successQAShareView; // @synthesize successQAShareView=_successQAShareView;
@property(retain, nonatomic) SHVPQAShareView *commonQAShareView; // @synthesize commonQAShareView=_commonQAShareView;
@property(retain, nonatomic) UIView *replayInfoView; // @synthesize replayInfoView=_replayInfoView;
@property(retain, nonatomic) UIView *bottomBlackView; // @synthesize bottomBlackView=_bottomBlackView;
@property(retain, nonatomic) UIView *topBlackView; // @synthesize topBlackView=_topBlackView;
@property(retain, nonatomic) SHVPSlidGuideView *slidGuideView; // @synthesize slidGuideView=_slidGuideView;
@property(retain, nonatomic) UITapGestureRecognizer *showLogTap; // @synthesize showLogTap=_showLogTap;
@property(retain, nonatomic) SHVPHitLikedAnimationView *hitLikedView; // @synthesize hitLikedView=_hitLikedView;
@property(retain, nonatomic) SHVPMainPageHorizontalViewController *horizontalVC; // @synthesize horizontalVC=_horizontalVC;
@property(retain, nonatomic) NSTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(retain, nonatomic) NSTimer *collectTimer; // @synthesize collectTimer=_collectTimer;
@property(retain, nonatomic) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property(nonatomic) unsigned long long originNetworkStatus; // @synthesize originNetworkStatus=_originNetworkStatus;
@property(nonatomic) _Bool hasToast; // @synthesize hasToast=_hasToast;
@property(nonatomic) _Bool isSelfViewShow; // @synthesize isSelfViewShow=_isSelfViewShow;
@property(nonatomic) _Bool isSWindowClosed; // @synthesize isSWindowClosed=_isSWindowClosed;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UILabel *roomTitle; // @synthesize roomTitle=_roomTitle;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(nonatomic) _Bool closePanelView; // @synthesize closePanelView=_closePanelView;
@property(retain, nonatomic) SHVPLiveQAPanelView *qaPanelView; // @synthesize qaPanelView=_qaPanelView;
@property(nonatomic) double playerStartTime; // @synthesize playerStartTime=_playerStartTime;
@property(retain, nonatomic) JDSHUnplGenerator *unplGenerator; // @synthesize unplGenerator=_unplGenerator;
@property(retain, nonatomic) SHVPDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) NSMutableArray *toShowCoupondViewArr; // @synthesize toShowCoupondViewArr=_toShowCoupondViewArr;
@property(retain, nonatomic) NSMutableArray *toShowProductViewArr; // @synthesize toShowProductViewArr=_toShowProductViewArr;
@property(retain, nonatomic) SHVPMainPageCommentTableViewDelegate *danmuTableviewDelegate; // @synthesize danmuTableviewDelegate=_danmuTableviewDelegate;
@property(nonatomic) double animationViewTop; // @synthesize animationViewTop=_animationViewTop;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool isInLiveRoom; // @synthesize isInLiveRoom=_isInLiveRoom;
@property(nonatomic) _Bool isLogining; // @synthesize isLogining=_isLogining;
@property(nonatomic) _Bool noNeedMonitorOrientation; // @synthesize noNeedMonitorOrientation=_noNeedMonitorOrientation;
@property(nonatomic) _Bool cartHasUnfolded; // @synthesize cartHasUnfolded=_cartHasUnfolded;
@property(nonatomic) _Bool isDoingCartAnimation; // @synthesize isDoingCartAnimation=_isDoingCartAnimation;
@property(nonatomic) _Bool hasStartedHiddenTouchScreen; // @synthesize hasStartedHiddenTouchScreen=_hasStartedHiddenTouchScreen;
@property(nonatomic) _Bool isLECReturnStatus; // @synthesize isLECReturnStatus=_isLECReturnStatus;
@property(nonatomic) _Bool authorIsInReset; // @synthesize authorIsInReset=_authorIsInReset;
@property(nonatomic) _Bool hasGetedLikeCount; // @synthesize hasGetedLikeCount=_hasGetedLikeCount;
@property(nonatomic) _Bool isUserHideSkuView; // @synthesize isUserHideSkuView=_isUserHideSkuView;
@property(nonatomic) _Bool isShowSkuView; // @synthesize isShowSkuView=_isShowSkuView;
@property(nonatomic) _Bool isShowAuthorInfoView; // @synthesize isShowAuthorInfoView=_isShowAuthorInfoView;
@property(copy, nonatomic) NSString *playerURLString; // @synthesize playerURLString=_playerURLString;
@property(copy, nonatomic) NSString *sharePin; // @synthesize sharePin=_sharePin;
@property(copy, nonatomic) NSString *shareNickname; // @synthesize shareNickname=_shareNickname;
@property(copy, nonatomic) NSString *liveOrigin; // @synthesize liveOrigin=_liveOrigin;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) SHVPRecommentView *recommentView; // @synthesize recommentView=_recommentView;
@property(retain, nonatomic) SHVPChangeLiveToReView *endRecommentView; // @synthesize endRecommentView=_endRecommentView;
@property(copy, nonatomic) NSString *bgImg; // @synthesize bgImg=_bgImg;
@property(copy, nonatomic) NSString *fromId; // @synthesize fromId=_fromId;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSMutableArray *toShowFullGiftViewArr; // @synthesize toShowFullGiftViewArr=_toShowFullGiftViewArr;
@property(retain, nonatomic) NSMutableArray *toShowGiftHitViewArr; // @synthesize toShowGiftHitViewArr=_toShowGiftHitViewArr;
@property(retain, nonatomic) SHVPCouponView *couponView; // @synthesize couponView=_couponView;
@property(retain, nonatomic) SHVPBoneRuleView *boneRuleView; // @synthesize boneRuleView=_boneRuleView;
@property(retain, nonatomic) SHVPGiftFullGifView *fullGifView; // @synthesize fullGifView=_fullGifView;
@property(retain, nonatomic) SHVPGiftHitView *giftHitView; // @synthesize giftHitView=_giftHitView;
@property(retain, nonatomic) SHVPGiftBoardView *giftBoardView; // @synthesize giftBoardView=_giftBoardView;
@property(retain, nonatomic) SHVPGiftButtonView *giftBtnView; // @synthesize giftBtnView=_giftBtnView;
@property(retain, nonatomic) SHVPMainPageProductView *firstNewProView; // @synthesize firstNewProView=_firstNewProView;
@property(retain, nonatomic) SHVPRequestShareView *requestShareView; // @synthesize requestShareView=_requestShareView;
@property(retain, nonatomic) SHVPMainPageNewProductView *newProductView; // @synthesize newProductView=_newProductView;
@property(retain, nonatomic) SHVPXViewUtil *xViewUtil; // @synthesize xViewUtil=_xViewUtil;
@property(retain, nonatomic) SHVPLotteryView *lotteryView; // @synthesize lotteryView=_lotteryView;
@property(retain, nonatomic) JDImageView *floatIcon; // @synthesize floatIcon=_floatIcon;
@property(retain, nonatomic) SHVPMainPageTouchScreen *touchScreen; // @synthesize touchScreen=_touchScreen;
@property(retain, nonatomic) SHVPReloadNetView *reloadNetView; // @synthesize reloadNetView=_reloadNetView;
@property(retain, nonatomic) SHVPMainPageReplayBar *replayBar; // @synthesize replayBar=_replayBar;
@property(retain, nonatomic) SHVPAnchorTipsView *anchorTipsView; // @synthesize anchorTipsView=_anchorTipsView;
@property(retain, nonatomic) SHVPCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) SHVPMainPageButtonView *cartListButton; // @synthesize cartListButton=_cartListButton;
@property(retain, nonatomic) SHVPMainPageButtonView *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) SHVPMainPageViewerHeaderView *viewerHeaderView; // @synthesize viewerHeaderView=_viewerHeaderView;
@property(retain, nonatomic) UILabel *viewerCountLabel; // @synthesize viewerCountLabel=_viewerCountLabel;
@property(retain, nonatomic) UIButton *attentionBtn; // @synthesize attentionBtn=_attentionBtn;
@property(retain, nonatomic) SHVPAuthorHeadView *authorHeadView; // @synthesize authorHeadView=_authorHeadView;
@property(retain, nonatomic) SHVPCoreCommentView *coreCommentView; // @synthesize coreCommentView=_coreCommentView;
@property(retain, nonatomic) SHVPLikedAnimationController *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIView *animationBgView; // @synthesize animationBgView=_animationBgView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIView *questionTipView; // @synthesize questionTipView=_questionTipView;
@property(retain, nonatomic) JDStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIButton *revivalCardBtn; // @synthesize revivalCardBtn=_revivalCardBtn;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *deepView; // @synthesize deepView=_deepView;
@property(retain, nonatomic) UIView *iphoneXView; // @synthesize iphoneXView=_iphoneXView;
@property(retain, nonatomic) UIScrollView *topScrollView; // @synthesize topScrollView=_topScrollView;
@property(retain, nonatomic) SHVPBgView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SHVPMainPageAnchorInfoView *anchorInfoView; // @synthesize anchorInfoView=_anchorInfoView;
@property(retain, nonatomic) SHVPMainPageAddCommentView *addCommentView; // @synthesize addCommentView=_addCommentView;
@property(retain, nonatomic) JDFooterLoadingView *skuLoadingView; // @synthesize skuLoadingView=_skuLoadingView;
@property(retain, nonatomic) SHVPMainPageSkuView *skuView; // @synthesize skuView=_skuView;
@property(retain, nonatomic) SHVPMainPageReminderView *reminderView; // @synthesize reminderView=_reminderView;
@property(retain, nonatomic) SHVPCustomActivityView *playerActivityIndicatorView; // @synthesize playerActivityIndicatorView=_playerActivityIndicatorView;
@property(retain, nonatomic) SHVPCustomActivityView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void).cxx_destruct;
- (_Bool)isLogin;
- (_Bool)canShowNewProOrRequsetShareView;
- (_Bool)isLivingPlayerViewController;
- (void)resetQAPanelView;
- (void)attentionClickEvent:(_Bool)arg1;
- (void)userLogOut;
- (void)refreshRoom;
- (void)willpresentLoginViewControllerEvent:(id)arg1;
- (void)userCancleLogin:(id)arg1;
- (void)userDidLogin:(id)arg1;
- (void)needLoginAction;
- (void)showLogView:(id)arg1;
- (void)JDStatusView:(id)arg1 didClickButton:(id)arg2;
- (void)bringLotteryViewToFront;
- (void)insertVideoView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)needDismissPresentedViewControllerBeforePushToNavigation;
- (void)willPushNewVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showReceiveCouponToast;
- (void)removeDataError;
- (void)toastDataError:(unsigned long long)arg1;
- (void)setAbnormalModelSource:(id)arg1;
- (void)setAbnormalModelPlayType:(id)arg1;
- (void)updateRevivalcardLabNum:(id)arg1;
- (void)doQAShareWithType:(unsigned long long)arg1 shareBtn:(id)arg2;
- (void)tapRevivalCardLabAction:(id)arg1;
- (void)tapHiddenSlidGuideView;
- (void)startFetchBone;
- (void)attentionBtnAction;
- (void)horizontalAddCartResult:(long long)arg1;
- (void)sendWelcomeMessage;
- (void)sendShareNicknameMessage;
- (void)reShowDetailInfo;
- (void)cleanDetailInfo;
- (void)tapFloatIconEvent;
- (void)SWindowClosed:(id)arg1;
- (void)toastNoWIFI;
- (_Bool)isNoWifi;
- (void)reachabilityChanged:(id)arg1;
- (void)unrigisterDanmu;
- (void)stopDanmu;
- (void)startDanmu;
- (void)initDanmu;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)startComment;
- (void)tapAuthor;
- (void)shareWithBuryModel:(id)arg1;
- (void)share:(id)arg1;
- (void)buryQuitRoom;
- (void)unrigisterSelfUnits:(id)arg1;
- (void)closeRoom;
- (void)closeRoomAction;
- (void)showLeaveRoomTipView;
- (void)hideCurrentQATipView;
- (void)invalidReloadTimer;
- (void)startReloadTableView;
- (void)creatReloadTimer;
- (void)avoidScroll;
- (void)drawFloatIcon;
- (void)setUpReplayView;
- (void)setScrollAbledView;
- (void)setQuestionAnswerView;
- (void)setUpOnGoingView;
- (void)getPlayStatus;
- (void)startSetUp;
- (_Bool)prefersStatusBarHidden;
- (void)willPopViewController;
- (void)showVerticalPlayerActivityIndicatorView;
- (void)showHorizontalPlayerActivityIndicatorView;
- (void)actionsBeforeShowHorizontal;
- (void)syncRoomInfo;
- (void)dismissCallBack:(_Bool)arg1 isNeedLogin:(_Bool)arg2;
- (void)horizontalAction:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
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
- (void)didFetchAuthorInfoSucessed;
- (void)fetchAuthorInfo;
- (struct CGRect)getPlayerViewSmallFrame;
- (void)moveDownHorizontalPlayerView;
- (void)moveUpHorizontalPlayerView;
- (void)zoomInVerticalPlayerView;
- (void)zoomOutVerticalPlayerView;
- (void)resumePlayerView;
- (void)movePlayerView;
- (void)innerShowCartInfoView;
- (void)innerSetCartData;
- (_Bool)cartHasData;
- (void)showCartInfoError;
- (void)showCartInfoView;
- (void)fetchCartInfo;
- (void)stopCoreMotion;
- (void)doActionBeforeHorizontalAuto;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)startUpdateMotion;
- (void)p_QAEnd:(id)arg1;
- (void)p_showAnswer:(id)arg1;
- (void)p_showQuestion:(id)arg1;
- (void)hostAddProductToCart;
- (void)addCoreCommentWithNickname:(id)arg1 Content:(id)arg2 Type:(unsigned long long)arg3 Animation:(_Bool)arg4;
- (void)setViewerHeaderImage;
- (void)setViewerCount;
- (void)reloadTableview;
- (void)sdk:(id)arg1 receiveLottery:(id)arg2;
- (void)sdk:(id)arg1 ReceiveLiveAnwserWithPrize:(id)arg2 totalWithoutSelf:(id)arg3 totalWinner:(id)arg4 winners:(id)arg5 unit:(id)arg6 cash:(id)arg7 qNum:(id)arg8;
- (void)sdk:(id)arg1 ReceiveLiveAnwserWithQuestionId:(id)arg2 answer:(id)arg3 options:(id)arg4 key:(id)arg5 optionNumStrs:(id)arg6 optionNums:(id)arg7 question:(id)arg8;
- (void)sdk:(id)arg1 ReceiveLiveQuestionWithQuestionId:(id)arg2 question:(id)arg3 options:(id)arg4;
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
- (void)buryMessageDataWithError:(id)arg1;
- (id)abnormalErrorInfoWithArr:(id)arg1;
- (void)sdk:(id)arg1 ClosedWithAddress:(id)arg2 Error:(id)arg3 Retrying:(_Bool)arg4 buryArr:(id)arg5;
- (void)stopEarnBoneNotify;
- (void)startEarnBoneNotify;
- (void)startFetchBoneWithType:(unsigned long long)arg1;
- (void)startFetchBoneWithType;
- (void)fetchEarnBonesInfoWithType:(unsigned long long)arg1;
- (void)buryDataWithStatus:(long long)arg1 model:(id)arg2;
- (void)fetchSendGiftInfoWithModel:(id)arg1;
- (void)fetchGiftListInfo;
- (void)addCartComplete:(long long)arg1;
- (void)BuryData:(id)arg1;
- (void)backToRoom;
- (void)touchToSmallView;
- (void)buryData:(id)arg1;
- (void)goToJump:(id)arg1 isHorizontal:(_Bool)arg2;
- (void)setBaseModelTapBlock:(id)arg1;
- (void)LECStatusReturned;
- (void)performOutTimeTips;
- (void)get15SecondsCountDown;
- (void)addStuckTimeToArray;
- (void)SHVPLivingPlayer:(id)arg1 contentTypeChanged:(int)arg2;
- (void)SHVPLivingPlayer:(id)arg1 dropFrameWithAudioCacheDuration:(long long)arg2 audioDropDuration:(long long)arg3 videoCacheDuration:(long long)arg4 videoDropDuration:(long long)arg5;
- (void)SHVPLivingPlayer:(id)arg1 position:(long long)arg2 cacheDuration:(long long)arg3 duration:(long long)arg4;
- (void)SHVPLivingPlayer:(id)arg1 playerEvent:(int)arg2;
- (void)startHiddenScreen;
- (void)stop;
- (void)play;
- (void)setUpPlayerParameter;
- (void)initPlayer;
@property(retain, nonatomic) NSNumber *newLotteryXviewIsShowing;
@property(retain, nonatomic) SHVPNewLotteryXviewUtils *newLotteryXview;
@property(retain, nonatomic) SHVPNewLotteryController *newlottery;
- (void)refreash:(unsigned long long)arg1 superView:(id)arg2;
- (void)addLottery:(id)arg1;
- (void)addLotterys:(id)arg1;
- (void)lottery_userDidLoginSucessed;
- (void)lottery_viewDidAppear;
- (void)lottery_DidfetchRoomInfoEventSucessed;
- (void)sendLotteryIconBury:(id)arg1;
- (void)closeXviewAction;
- (void)tapLotteryIcon;
- (void)removeLotteryView;
- (void)showLotteryView;
- (void)receiveLotteryMessage;
- (void)didfetchRoomInfoEventSucessed;
- (void)setBuryData;
- (void)fetchDataRefreshRoom;
- (void)fetchRoomData;
- (void)attentionToast_resetToastView;
- (void)attentionToast_resetSuperView;
- (void)attentionToast_showIfNeed;
- (void)attentionToast_restart;
- (void)attentionToast_stop;
- (void)attentionToast_needShow;
- (void)attentionToast_delay;
- (void)attentionToast_DidfetchRoomInfoEventSucessed;
- (void)attentionToast_AttentionActionError;
- (void)attentionToast_AttentionActionSucess;
- (void)attentionToast_disableToastView;
@property(retain, nonatomic) SHVPAttentionToastView *attentionToastView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

