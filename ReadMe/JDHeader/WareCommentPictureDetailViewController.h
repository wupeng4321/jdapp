//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDPhotoViewDelegate-Protocol.h"
#import "SOZoomOutTransitionAnimationContextDelegate-Protocol.h"
#import "WareCommentVideoToastViewDelegate-Protocol.h"

@class JDModel, JDPhotoView, NSMutableArray, NSMutableSet, NSString, UIButton, UILabel, UIScrollView, UIView, WareCommentDetailModel, WareCommentNetworkManager, WareCommentRateView, WareCommentUIScrollView, WareCommentVideoToastView;
@protocol WareCommentPictureDetailDelegate;

@interface WareCommentPictureDetailViewController : JDViewController <JDPhotoViewDelegate, WareCommentVideoToastViewDelegate, SOZoomOutTransitionAnimationContextDelegate>
{
    UIView *_animationView;
    UIButton *_downLoadButton;
    UIView *_headView;
    UIView *_detailView;
    WareCommentRateView *_rateView;
    UILabel *_attributeLabel;
    UIScrollView *_labelScrollView;
    UILabel *_commentLabel;
    UIView *_bottomView;
    UIButton *_usefulButton;
    UIButton *_replyButton;
    UIButton *_detailButton;
    UILabel *_imageIndexLabel;
    UILabel *_addLabel;
    _Bool _lastScroll;
    _Bool _isPlayVideo;
    _Bool _isInit;
    double _statusoffsetY;
    NSString *_videoMaidian;
    long long reportIndex;
    _Bool _isfullScreen;
    JDPhotoView *_tempPhotoView;
    _Bool _isShowDragImageIntrol;
    _Bool _isLoading;
    _Bool _isVideoLoading;
    int _totalPage;
    int _currentPage;
    NSMutableArray *_items;
    NSString *_productId;
    NSString *_shadowMainSku;
    NSString *_category;
    long long _selectedIndex;
    JDModel *_selectedModel;
    long long _totalCount;
    id <WareCommentPictureDetailDelegate> _delegate;
    NSString *_currentGuid;
    NSMutableSet *_visibleImageViews;
    NSMutableSet *_reusedImageViews;
    UIButton *_backButton;
    double _playTime;
    WareCommentUIScrollView *_contentView;
    WareCommentVideoToastView *_videoTostView;
    WareCommentDetailModel *_commentModel;
    WareCommentNetworkManager *_networkManager;
}

@property(retain, nonatomic) WareCommentNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(retain, nonatomic) WareCommentDetailModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) WareCommentVideoToastView *videoTostView; // @synthesize videoTostView=_videoTostView;
@property(retain, nonatomic) WareCommentUIScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) NSMutableSet *reusedImageViews; // @synthesize reusedImageViews=_reusedImageViews;
@property(retain, nonatomic) NSMutableSet *visibleImageViews; // @synthesize visibleImageViews=_visibleImageViews;
@property(copy, nonatomic) NSString *currentGuid; // @synthesize currentGuid=_currentGuid;
@property(nonatomic) _Bool isVideoLoading; // @synthesize isVideoLoading=_isVideoLoading;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <WareCommentPictureDetailDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) int totalPage; // @synthesize totalPage=_totalPage;
@property(retain, nonatomic) JDModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *shadowMainSku; // @synthesize shadowMainSku=_shadowMainSku;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)getCurrentVisibleLocationView;
- (_Bool)so_zoomOutTransitionAnimationContextShouldEnableDropGesture:(id)arg1;
- (void)so_zoomTransitionAnimationContextEndAnimation:(id)arg1;
- (void)so_zoomTransitionAnimationContextCancelAnimationCompletion:(id)arg1;
- (void)so_zoomOutTransitionAnimationContextEndDrag:(id)arg1;
- (void)so_zoomOutTransitionAnimationContextBeginDrag:(id)arg1;
- (id)so_zoomOutTransitionAnimationContextGetStartLocationView:(id)arg1;
- (id)so_zoomTransitionAnimationContextGetEndLocationView:(id)arg1 transferInfo:(id)arg2 startImage:(id)arg3;
- (id)so_zoomTransitionAnimationContextPrepareAnimationTransferInfo:(id)arg1;
- (void)uploadCloseMTAWithCloseType:(long long)arg1 eventName:(id)arg2;
- (void)didTapCheckButtonVideoToastView:(_Bool)arg1;
- (void)didTapComitVideoToastView:(_Bool)arg1;
- (void)didTapCancelVideoToastView;
- (void)reportItemExpo;
- (void)reportVideoTime;
- (void)playVideoClick:(id)arg1;
- (void)applicationBackgroud:(id)arg1;
- (void)applicationActive:(id)arg1;
- (void)transView:(id)arg1 orit:(int)arg2;
- (void)controlViewforVideo;
- (void)setCurrentPlayerBarRect;
- (void)playCurrentPlayer;
- (void)removePlayer;
- (void)popView:(_Bool)arg1;
- (void)pausePlayer;
- (void)stopPlayer;
- (void)gotoDetailView;
- (void)replyComment;
- (void)userfulComment;
- (void)setHeaderView;
- (void)didTapPhotoView:(id)arg1;
- (void)refreshView:(id)arg1;
- (void)videoMTA;
- (void)loadImageWithIndex:(long long)arg1;
- (void)updateIndex:(id)arg1;
- (void)popCurrentViewController;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)downloadImage;
- (void)changeNavigationBarStatus:(id)arg1;
- (void)refreshReplyCount:(id)arg1;
- (void)refreshPraiseCount:(id)arg1 type:(id)arg2;
- (void)setUsefulData:(id)arg1 isAdd:(_Bool)arg2 type:(id)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)setVideoPlayerView:(id)arg1;
- (id)setPlayerView:(id)arg1;
- (void)showImageViewAtIndex:(long long)arg1;
- (void)showImages;
- (void)requestVideoUrlBlock:(CDUnknownBlockType)arg1;
- (void)getVideoUrlWithId:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)increaseViewCount;
- (void)getPicturesData;
- (void)getUsefulData;
- (void)showCheckNetwork;
- (void)configUI:(id)arg1;
- (void)addDetailViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

