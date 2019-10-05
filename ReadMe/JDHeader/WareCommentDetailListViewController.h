//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "NewRefreshTableHeaderViewDelegate-Protocol.h"
#import "SOZoomInTransitionAnimationContextDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WareCommentArticleCellDelegate-Protocol.h"
#import "WareCommentBaseDelegate-Protocol.h"
#import "WareCommentImageListDelegate-Protocol.h"
#import "WareCommentPictureCellDelegate-Protocol.h"
#import "WareCommentPictureDetailDelegate-Protocol.h"
#import "WareCommentQuestionCellDelegate-Protocol.h"
#import "WarecommentTagViewDelegate-Protocol.h"

@class JDButton, JDModel, JDStretchButton, NSMutableArray, NSString, NSTimer, NewRefreshTableHeaderView, UIButton, UIImageView, UILabel, UITableView, UIView, WareCommentDefaultGoodModel, WareCommentListInfoModel, WareCommentNetworkManager, WareCommentPictureDetailViewController, WareCommentPlayerView, WareCommentTagModel, WareCommentVideoInfoModel, WarecommentTagView;

@interface WareCommentDetailListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, NewRefreshTableHeaderViewDelegate, WareCommentPictureCellDelegate, WareCommentPictureDetailDelegate, UIViewControllerPreviewingDelegate, WareCommentImageListDelegate, WarecommentTagViewDelegate, WareCommentArticleCellDelegate, WareCommentQuestionCellDelegate, WareCommentBaseDelegate, SOZoomInTransitionAnimationContextDelegate>
{
    JDButton *_backToTopButton;
    JDButton *_checkCurrentSkuBtn;
    UILabel *_rateLabel;
    UILabel *_currentSkuLabel;
    JDModel *_selectTagModel;
    WareCommentTagModel *_youTuModel;
    WareCommentTagModel *_shaiTuModel;
    WareCommentTagModel *_selectPicModel;
    UIView *_reloadView;
    UIView *_noDataView;
    UIView *_headerView;
    UIButton *_changeTabBtn;
    UIImageView *_bubbleView;
    NSTimer *_bubbleTimer;
    NSString *_youTuOrShaiTu;
    NSString *_questionMaidian;
    NSString *_articleMaidian;
    NSString *_videoMaidian;
    NSString *_commentMaidian;
    NSMutableArray *_videoExpoArray;
    NSMutableArray *_expoOnceArray;
    NSMutableArray *_expoCommentArray;
    _Bool _isNavIn;
    _Bool _donotRecordPV;
    _Bool _isPicture;
    _Bool _donotExpoQuestion;
    _Bool _donotExpoArticle;
    _Bool _isShowCurrentSku;
    _Bool _isShowYoutuShaituBtn;
    _Bool _isQAbtnUsed;
    _Bool _isFoldExpo;
    _Bool _firstPlay;
    _Bool _needExpoVideo;
    _Bool _needExpoSeman;
    _Bool _isPlaying;
    double _beginTime;
    double _foldHeight;
    WareCommentPlayerView *_currentPlayer;
    _Bool _isSingleView;
    _Bool _isLoading;
    _Bool _isFold;
    _Bool _isVideoLoading;
    _Bool _isShaidanHasFold;
    _Bool _isFirstRequest;
    int _totalPage;
    int _currentPage;
    int _totalGoodCount;
    int _foldTotalPage;
    NSString *_wareId;
    double _barHeight;
    NSString *_videoUrl;
    NSString *_shadowMainSku;
    NSString *_category;
    UIView *_footerView;
    UIView *_foldGuideView;
    UIView *_footerViewofAll;
    JDStretchButton *_QAbutton;
    NSMutableArray *_items;
    UITableView *_tableView;
    WarecommentTagView *_tagsView;
    NewRefreshTableHeaderView *_refreshHeaderView;
    WareCommentVideoInfoModel *_videoModel;
    WareCommentListInfoModel *_mainInfoModel;
    WareCommentNetworkManager *_networkManager;
    WareCommentDefaultGoodModel *_defaultGoodModel;
    WareCommentPictureDetailViewController *_pictureDetailViewController;
}

@property(retain, nonatomic) WareCommentPictureDetailViewController *pictureDetailViewController; // @synthesize pictureDetailViewController=_pictureDetailViewController;
@property(retain, nonatomic) WareCommentDefaultGoodModel *defaultGoodModel; // @synthesize defaultGoodModel=_defaultGoodModel;
@property(retain, nonatomic) WareCommentNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(retain, nonatomic) WareCommentListInfoModel *mainInfoModel; // @synthesize mainInfoModel=_mainInfoModel;
@property(retain, nonatomic) WareCommentVideoInfoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) WarecommentTagView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) JDStretchButton *QAbutton; // @synthesize QAbutton=_QAbutton;
@property(retain, nonatomic) UIView *footerViewofAll; // @synthesize footerViewofAll=_footerViewofAll;
@property(retain, nonatomic) UIView *foldGuideView; // @synthesize foldGuideView=_foldGuideView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) _Bool isFirstRequest; // @synthesize isFirstRequest=_isFirstRequest;
@property(nonatomic) _Bool isShaidanHasFold; // @synthesize isShaidanHasFold=_isShaidanHasFold;
@property(nonatomic) _Bool isVideoLoading; // @synthesize isVideoLoading=_isVideoLoading;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) int foldTotalPage; // @synthesize foldTotalPage=_foldTotalPage;
@property(nonatomic) int totalGoodCount; // @synthesize totalGoodCount=_totalGoodCount;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) int totalPage; // @synthesize totalPage=_totalPage;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *shadowMainSku; // @synthesize shadowMainSku=_shadowMainSku;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) _Bool isSingleView; // @synthesize isSingleView=_isSingleView;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
- (void).cxx_destruct;
- (_Bool)isDisplayViewVisible:(id)arg1 withContext:(id)arg2;
- (id)so_zoomTransitionAnimationContextGetEndLocationView:(id)arg1 transferInfo:(id)arg2 startImage:(id)arg3;
- (void)didReceiveMemoryWarning;
- (id)getPreViewController:(struct CGPoint)arg1 context:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)requestVideoUrlBlock:(CDUnknownBlockType)arg1;
- (void)removeNoDataView;
- (void)showNoDataView;
- (void)removeReloadView;
- (void)showMyReloadView;
- (void)expoCommentMTA;
- (void)reportCommentMTA;
- (void)reportCardMTA;
- (void)expoFold;
- (void)resetOnceExpoData;
- (void)expoCommentMaidian:(id)arg1;
- (void)expoOnceMaidian:(id)arg1;
- (void)expoMaiDianForLeaveCell;
- (void)ExpoMaidian;
- (void)positionChange;
- (_Bool)hasSelectedTag:(id)arg1;
- (void)playNextPlayer;
- (void)showChangeTabView;
- (void)controlQAbutton;
- (void)stopbubbleTimer;
- (void)startbubbleTimer;
- (void)setchangeTabBtnAnimate;
- (void)setSegmentTitles:(_Bool)arg1;
- (void)showHeaderView:(_Bool)arg1;
- (void)setGoodRateText;
- (void)calculateTime;
- (void)setBeginTime;
- (void)didFinishResponseWithRequestSetup:(id)arg1 components:(id)arg2;
- (void)reconnect;
- (void)finishLoading;
- (void)refreshLoading;
- (void)reloadData;
- (void)resetData;
- (void)resetChanegeTabBtnFrame;
- (void)returnTopButton:(id)arg1;
- (void)qaBtnClick;
- (void)changeTabViewTap;
- (void)currentSkuBtnClick;
- (void)foldGuideViewTap:(id)arg1;
- (void)headerViewTap:(id)arg1;
- (void)setRecordPVValue:(id)arg1;
- (void)applicationActive:(id)arg1;
- (void)applicationBackgroud:(id)arg1;
- (_Bool)isPlayerPlaying;
- (void)setCurrentPlayer:(id)arg1 isPlay:(_Bool)arg2 playNext:(_Bool)arg3;
- (void)expoMaidianWithVideoId:(id)arg1 andCommentId:(id)arg2 isMainVideo:(_Bool)arg3;
- (void)articleCellSelectedChange:(long long)arg1 withModel:(id)arg2;
- (void)questionCellSelectedChange:(long long)arg1;
- (void)gotoBigImageWidthVideoModel:(id)arg1 playerView:(id)arg2;
- (void)gotoBigImageListWidthIndex:(long long)arg1 warecommentMode:(id)arg2 tapedImageView:(id)arg3;
- (void)reloadTagView;
- (void)reloadCell;
- (void)showWareCommentAblum;
- (void)scrollWareCommentToEnd:(_Bool)arg1;
- (void)setWareCommentPictureDetailPage:(int)arg1;
- (void)didSelectWareCommentPictureIndex:(long long)arg1 currentTapedImageView:(id)arg2;
- (void)refreshData;
- (void)chooseTagComment:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)getModelHeight:(id)arg1 andIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)getVideoUrlWithId:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)requestClickUsefulWithParams:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)getModelWithDic:(id)arg1;
- (void)reloadWithCardData:(id)arg1 key:(id)arg2 page:(id)arg3;
- (void)reloadWithData:(id)arg1 key:(id)arg2 page:(id)arg3;
- (void)getPicturesData;
- (void)getFoldCommentDataWithPage:(int)arg1 withIsFold:(_Bool)arg2;
- (void)fetchCommentData;
- (void)fetchDataWithType;
- (void)setCurrentSkuStatus:(id)arg1 youTuOrShaiTu:(id)arg2 isShowYoutuShaituBtn:(_Bool)arg3;
- (void)getDataWithDic:(id)arg1;
- (void)getDataWithWareId:(id)arg1 type:(long long)arg2;
- (void)leaveThePage;
- (void)backToThePage;
- (void)setHeaderView:(id)arg1;
- (void)setNOMoreFooterViewWithType;
- (void)setupFoldGuideView:(id)arg1;
- (id)getFooterView;
- (id)getFoldViewwithText:(id)arg1;
- (void)addTagsView:(id)arg1 isShaiTu:(_Bool)arg2;
- (void)addChangeTabView;
- (id)headerView;
- (void)setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
