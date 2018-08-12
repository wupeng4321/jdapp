//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "CommentServiceCommentCellDelegate-Protocol.h"
#import "CommentcenterTableViewCellDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class JDButton, JDImageView, JDStoreNetwork, NSMutableArray, NSObject, NSString, ShareOrderCommentSuccessInfoModel, ShareOrderQAModel, ShareOrderShareGiftModel, ShareOrderShopModel, ShareOrderUserAuth, ShareorderSuccessQAview, ShareorderSuccessSendView, ShareorderSuccessTopView, UIButton, UILabel, UITableView, UIView;
@protocol OS_dispatch_group;

@interface ShareorderSuccessViewController : JDViewController <CommentServiceCommentCellDelegate, CommentcenterTableViewCellDelegate, UITextViewDelegate>
{
    int commentType;
    JDButton *_backToTopButton;
    UIView *_shopView;
    UIButton *_followButton;
    UILabel *_label;
    UIView *_shareView;
    _Bool _isExpo;
    NSMutableArray *_mtaArray;
    NSObject<OS_dispatch_group> *dispatchGroup;
    _Bool _showShopInfo;
    _Bool _isLoading;
    _Bool _isFollowing;
    _Bool _animationEnd;
    int _page;
    int _totalPage;
    NSString *_wareId;
    ShareOrderShareGiftModel *_shareGiftModel;
    ShareOrderCommentSuccessInfoModel *_successInfoModel;
    UIView *_headView;
    NSString *_ldRedirectUrl;
    NSString *_ldPicUrl;
    ShareorderSuccessTopView *_successView;
    JDImageView *_headerView;
    UITableView *_commentWareListtableView;
    JDStoreNetwork *_netWork;
    NSMutableArray *_Items;
    NSMutableArray *_mta_Items;
    ShareOrderShopModel *_shopModel;
    ShareorderSuccessQAview *_qaView;
    ShareOrderQAModel *_qaModel;
    ShareorderSuccessSendView *_sendView;
    UIView *_titleView;
    ShareOrderUserAuth *_shareorderUserAuth;
    JDButton *_backgroundButton;
}

@property(retain, nonatomic) JDButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic, getter=isAnimationEnd) _Bool animationEnd; // @synthesize animationEnd=_animationEnd;
@property(retain, nonatomic) ShareOrderUserAuth *shareorderUserAuth; // @synthesize shareorderUserAuth=_shareorderUserAuth;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) ShareorderSuccessSendView *sendView; // @synthesize sendView=_sendView;
@property(retain, nonatomic) ShareOrderQAModel *qaModel; // @synthesize qaModel=_qaModel;
@property(retain, nonatomic) ShareorderSuccessQAview *qaView; // @synthesize qaView=_qaView;
@property(retain, nonatomic) ShareOrderShopModel *shopModel; // @synthesize shopModel=_shopModel;
@property(retain, nonatomic) NSMutableArray *mta_Items; // @synthesize mta_Items=_mta_Items;
@property(retain, nonatomic) NSMutableArray *Items; // @synthesize Items=_Items;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork=_netWork;
@property(retain, nonatomic) UITableView *commentWareListtableView; // @synthesize commentWareListtableView=_commentWareListtableView;
@property(retain, nonatomic) JDImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) ShareorderSuccessTopView *successView; // @synthesize successView=_successView;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(copy, nonatomic) NSString *ldPicUrl; // @synthesize ldPicUrl=_ldPicUrl;
@property(copy, nonatomic) NSString *ldRedirectUrl; // @synthesize ldRedirectUrl=_ldRedirectUrl;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(nonatomic) int totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) int page; // @synthesize page=_page;
@property(retain, nonatomic) ShareOrderCommentSuccessInfoModel *successInfoModel; // @synthesize successInfoModel=_successInfoModel;
@property(retain, nonatomic) ShareOrderShareGiftModel *shareGiftModel; // @synthesize shareGiftModel=_shareGiftModel;
@property(nonatomic) _Bool showShopInfo; // @synthesize showShopInfo=_showShopInfo;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
- (void).cxx_destruct;
- (void)KeyboardWillHideNot:(id)arg1;
- (void)KeyboardWillShowNot:(id)arg1;
- (void)issueCommentWithModel:(id)arg1 isAddition:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cancelKeyboard;
- (void)shareComment;
- (void)gotoShop;
- (void)backClick;
- (void)returnTopButton:(id)arg1;
- (void)goToActivity;
- (_Bool)hasMta:(id)arg1;
- (void)reportMta;
- (void)applicationActive:(id)arg1;
- (void)changeButton;
- (void)changFollow:(_Bool)arg1;
- (void)setlabelText;
- (void)sendAnswer:(_Bool)arg1;
- (void)addSendView;
- (void)addQAview;
- (void)addShopView;
- (void)addTitleView;
- (void)getdataWithType:(int)arg1;
- (void)addMImageView;
- (void)chooseStatus:(id)arg1;
- (void)refreshShopView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)getQuestionInfoWithType:(long long)arg1 didFinish:(CDUnknownBlockType)arg2;
- (void)changeQuestion:(CDUnknownBlockType)arg1;
- (void)getQAInfo;
- (void)follow;
- (void)getShopInfo;
- (void)requestForService:(id)arg1;
- (void)getOrderData;
- (void)getdatabyType:(int)arg1;
- (void)applicationBackgroud:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

