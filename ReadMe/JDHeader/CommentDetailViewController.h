//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "CommentDetailPicTableViewCellDelegate-Protocol.h"
#import "CommentDetailReplyCellDelegate-Protocol.h"
#import "CommentDetailVideoCellDelegate-Protocol.h"
#import "CommentReplyCommentCellDelegate-Protocol.h"
#import "JDReloadViewDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"
#import "SOZoomInTransitionAnimationContextDelegate-Protocol.h"
#import "ShareOrderEditViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CommentNewDetailInfoModel, CommentReplyInputTextView, CommentReplyTableViewCell, JDButton, JDIcon, JDIconGifLabel, JDIconLabel, JDImageView, JDStoreNetwork, NSIndexPath, NSMutableArray, NSString, NewRefreshTableHeaderView, ShareOrderEditView, ShareOrderUserAuth, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface CommentDetailViewController : JDViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, CommentReplyCommentCellDelegate, UITextViewDelegate, JDReloadViewDelegate, CommentDetailPicTableViewCellDelegate, CommentDetailVideoCellDelegate, SOZoomInTransitionAnimationContextDelegate, CommentDetailReplyCellDelegate, NewRefreshTableHeaderViewDelegate, ShareOrderEditViewDelegate>
{
    JDStoreNetwork *_netWork;
    NewRefreshTableHeaderView *_refreshHeaderView;
    UIView *_bottomLine;
    UILabel *_inputLable;
    UIButton *_backToTopButton;
    long long _sectionNum;
    double _statusoffsetY;
    double _keyboard;
    NSString *_plusAddress;
    UIView *_headView;
    UIImageView *_userLevelIcon;
    JDImageView *_userHeaderView;
    JDIcon *_icon;
    JDButton *_reloadButton;
    JDIconLabel *_plusIcon;
    JDIconGifLabel *_plusGifIcon;
    UIButton *_usefulButton;
    UIButton *_commentButton;
    UILabel *_addLabel;
    _Bool _expoDetailReply;
    _Bool _moreButtonHasExpo;
    NSString *_videoMaidian;
    NSMutableArray *_videoExpoArray;
    struct CGRect _cellRect;
    CommentReplyTableViewCell *_selectedCell;
    _Bool _isProductMTAHasReport;
    _Bool _showAdditionView;
    _Bool _isPrivate;
    _Bool _showAllCommentMessage;
    _Bool _isLoading;
    _Bool _notFirstIn;
    _Bool _isUserAuth;
    _Bool _isAllowAddCart;
    _Bool _isShowKeyBoard;
    _Bool _needReload;
    _Bool _isRefresh;
    int _totalPage;
    int _currentPage;
    NSString *_productId;
    NSString *_orderId;
    NSString *_category;
    NSString *_commentId;
    NSString *_replyId;
    NSString *_showReply;
    UIView *_inputPadView;
    NSString *_replyCount;
    NSString *_replyedRecordId;
    UITableView *_commentDetailTableView;
    NSMutableArray *_replyItems;
    long long _pageNumber;
    long long _locationIndex;
    UIView *_exceptionView;
    UIView *_additionView;
    UIImageView *_viewAnimation;
    NSString *_pageType;
    NSIndexPath *_indexMessage;
    CommentNewDetailInfoModel *_commentDetailModel;
    CommentReplyInputTextView *_inputTextView;
    ShareOrderUserAuth *_shareorderUserAuth;
    ShareOrderEditView *_editView;
    NSString *_currentPlaceHoldText;
    NSString *_currentSystemId;
    NSString *_currentReportId;
}

@property(copy, nonatomic) NSString *currentReportId; // @synthesize currentReportId=_currentReportId;
@property(copy, nonatomic) NSString *currentSystemId; // @synthesize currentSystemId=_currentSystemId;
@property(copy, nonatomic) NSString *currentPlaceHoldText; // @synthesize currentPlaceHoldText=_currentPlaceHoldText;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(nonatomic) _Bool isShowKeyBoard; // @synthesize isShowKeyBoard=_isShowKeyBoard;
@property(retain, nonatomic) ShareOrderEditView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) ShareOrderUserAuth *shareorderUserAuth; // @synthesize shareorderUserAuth=_shareorderUserAuth;
@property(retain, nonatomic) CommentReplyInputTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) CommentNewDetailInfoModel *commentDetailModel; // @synthesize commentDetailModel=_commentDetailModel;
@property(retain, nonatomic) NSIndexPath *indexMessage; // @synthesize indexMessage=_indexMessage;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(nonatomic) _Bool isAllowAddCart; // @synthesize isAllowAddCart=_isAllowAddCart;
@property(retain, nonatomic) UIImageView *viewAnimation; // @synthesize viewAnimation=_viewAnimation;
@property(nonatomic) _Bool isUserAuth; // @synthesize isUserAuth=_isUserAuth;
@property(retain, nonatomic) UIView *additionView; // @synthesize additionView=_additionView;
@property(retain, nonatomic) UIView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(nonatomic) long long locationIndex; // @synthesize locationIndex=_locationIndex;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) _Bool notFirstIn; // @synthesize notFirstIn=_notFirstIn;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *replyItems; // @synthesize replyItems=_replyItems;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) int totalPage; // @synthesize totalPage=_totalPage;
@property(retain, nonatomic) UITableView *commentDetailTableView; // @synthesize commentDetailTableView=_commentDetailTableView;
@property(copy, nonatomic) NSString *replyedRecordId; // @synthesize replyedRecordId=_replyedRecordId;
@property(copy, nonatomic) NSString *replyCount; // @synthesize replyCount=_replyCount;
@property(retain, nonatomic) UIView *inputPadView; // @synthesize inputPadView=_inputPadView;
@property(nonatomic) _Bool showAllCommentMessage; // @synthesize showAllCommentMessage=_showAllCommentMessage;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) _Bool showAdditionView; // @synthesize showAdditionView=_showAdditionView;
@property(copy, nonatomic) NSString *showReply; // @synthesize showReply=_showReply;
@property(copy, nonatomic) NSString *replyId; // @synthesize replyId=_replyId;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (id)so_zoomTransitionAnimationContextGetEndLocationView:(id)arg1 transferInfo:(id)arg2 startImage:(id)arg3;
- (void)showShareView;
- (void)share;
- (void)expoMoreReply;
- (void)reportCardMTA;
- (void)ExpoMaidian;
- (void)applicationBackgroud:(id)arg1;
- (void)applicationActive:(id)arg1;
- (void)expoMaidianWithVideoId:(id)arg1;
- (void)gotoPlusCenter;
- (void)setUsefulAnimate:(_Bool)arg1 type:(id)arg2;
- (void)setCommentNum:(id)arg1;
- (void)setUsefulNum:(id)arg1;
- (void)hideReloadView;
- (void)showExceptionView;
- (void)resetInputTextView;
- (void)showKeyboard;
- (void)closeWithCurrentText:(id)arg1;
- (void)sendText:(id)arg1;
- (void)gotoEditView;
- (void)commentBtnClick;
- (void)tapUserLevelIcon:(id)arg1;
- (void)backToTopButtonClicked:(id)arg1;
- (void)replyTap:(id)arg1;
- (void)finishLoading;
- (void)refreshData;
- (void)floorCellSelected:(id)arg1 replyId:(id)arg2;
- (void)reloadCell;
- (void)reconnect;
- (void)replyWithCellSelected:(id)arg1;
- (void)didTapPicOnCell:(id)arg1 index:(long long)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardFrameChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)addToCartCallback:(long long)arg1 message:(id)arg2;
- (void)addToCartNotification:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateShoppingCartCountWithAnimation:(_Bool)arg1;
- (void)showShopCartButton;
- (void)ws_pushToViewControllerWithClassName:(id)arg1 title:(id)arg2;
- (void)ws_shoppingCartButtonClick;
- (void)addProductToCartWithModel:(id)arg1;
- (void)AddCartAnimationWith:(id)arg1;
- (void)resetCartButtonFrame;
- (void)jumpShoppingCart;
- (void)openProduct;
- (void)openReport;
- (void)uploadProductExposureMTA;
- (void)reCheckUploadProductExposureMTA;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)getVideoUrlWithId:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (_Bool)resultUserAuth:(id)arg1;
- (void)sendComment;
- (void)usefulBtnClick;
- (void)setUpViewAfterReceiveCommentDetail:(long long)arg1;
- (void)lastPageDidClick;
- (void)getReplyListLocation:(id)arg1;
- (void)getReplyData:(long long)arg1;
- (void)increaseViewCount;
- (void)getCommentDetail;
- (void)setTableFooterViewWithHeight:(double)arg1;
- (void)addViews;
- (void)addAdditionView;
- (void)praiseSuccess:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
