//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "CommuneCommentCustomTextViewDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDFooterLoadingViewDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CommuneCommentCustomTextView, CommuneCommentDao, CommuneCommentQuestionModel, CommuneCommentQuestionPraiseCell, CommuneDetailDao, CommunePublishTextDownDao, CommuneUserAuthDao, CommuneUserButton, JDFooterLoadingView, NSArray, NSDictionary, NSString, NewRefreshTableHeaderView, UITableView;

@interface CommuneCommentViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, NewRefreshTableHeaderViewDelegate, JDFooterLoadingViewDelegate, JDBaseToastViewDelegate, CommuneCommentCustomTextViewDelegate>
{
    CommuneCommentDao *_commentAndReplyDao;
    CommuneDetailDao *_communeDetailDao;
    CommuneUserAuthDao *_communeUserAuthDao;
    CommunePublishTextDownDao *_textMapDao;
    _Bool _keyBoardisShow;
    _Bool _isFirstLoading;
    _Bool _authing;
    _Bool _isLoading;
    _Bool _isPraiseing;
    _Bool _isHasPopViewPop;
    _Bool _anonymousSwitch;
    CDUnknownBlockType _commentBack;
    CDUnknownBlockType _praiseBack;
    NSString *_sourceType;
    NSString *_answerId;
    NSString *_questionId;
    UITableView *_tableView;
    long long _page;
    NSDictionary *_textStore;
    CommuneCommentCustomTextView *_bottomInputView;
    NSArray *_dataArr;
    CommuneCommentQuestionModel *_questionModel;
    NSString *_hasMore;
    NSString *_foldedNumber;
    NSString *_commentCount;
    CommuneCommentQuestionPraiseCell *_praiseCell;
    NewRefreshTableHeaderView *_refreshHeaderView;
    JDFooterLoadingView *_footerView;
    CommuneUserButton *_userCenterButton;
    NSString *_userAuthUrlString;
}

@property(nonatomic) _Bool anonymousSwitch; // @synthesize anonymousSwitch=_anonymousSwitch;
@property(nonatomic) _Bool isHasPopViewPop; // @synthesize isHasPopViewPop=_isHasPopViewPop;
@property(nonatomic) _Bool isPraiseing; // @synthesize isPraiseing=_isPraiseing;
@property(copy, nonatomic) NSString *userAuthUrlString; // @synthesize userAuthUrlString=_userAuthUrlString;
@property(retain, nonatomic) CommuneUserButton *userCenterButton; // @synthesize userCenterButton=_userCenterButton;
@property(retain, nonatomic) JDFooterLoadingView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) CommuneCommentQuestionPraiseCell *praiseCell; // @synthesize praiseCell=_praiseCell;
@property(copy, nonatomic) NSString *commentCount; // @synthesize commentCount=_commentCount;
@property(copy, nonatomic) NSString *foldedNumber; // @synthesize foldedNumber=_foldedNumber;
@property(copy, nonatomic) NSString *hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) CommuneCommentQuestionModel *questionModel; // @synthesize questionModel=_questionModel;
@property(copy, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) CommuneCommentCustomTextView *bottomInputView; // @synthesize bottomInputView=_bottomInputView;
@property(retain, nonatomic) NSDictionary *textStore; // @synthesize textStore=_textStore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool authing; // @synthesize authing=_authing;
@property(nonatomic) _Bool isFirstLoading; // @synthesize isFirstLoading=_isFirstLoading;
@property(nonatomic) _Bool keyBoardisShow; // @synthesize keyBoardisShow=_keyBoardisShow;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSString *answerId; // @synthesize answerId=_answerId;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) CDUnknownBlockType praiseBack; // @synthesize praiseBack=_praiseBack;
@property(copy, nonatomic) CDUnknownBlockType commentBack; // @synthesize commentBack=_commentBack;
- (void).cxx_destruct;
- (void)dealauthInfo:(id)arg1;
- (void)didPraiseTheQuestion:(_Bool)arg1;
- (void)didCommentTheQuestion;
- (void)CommuneCommentCustomTextViewDidChangeText:(id)arg1 commentId:(id)arg2 destReplyId:(id)arg3;
- (id)getTextforKey:(id)arg1;
- (void)setText:(id)arg1 forKey:(id)arg2;
- (id)getKeyForCommentId:(id)arg1 destReplyId:(id)arg2;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)callBottomView:(id)arg1;
- (void)getUserAuth:(id)arg1;
- (void)needCallInputViewObject:(id)arg1;
- (void)clickSourceQuestionCell;
- (void)openUserCenter;
- (void)loginAndOpenUserCenter;
- (void)enterUserCeter;
- (void)showErrorUnpraiseMessage;
- (void)showRepeatUnpraiseMessage;
- (void)showErrorPraiseMessage;
- (void)showRepeatPraiseMessage;
- (void)resetPraiseCell;
- (void)praiseTheComment;
- (void)gotoPraiseTheComment;
- (void)sendReply:(id)arg1 anonymity:(_Bool)arg2 commentId:(id)arg3 destReplyId:(id)arg4;
- (void)sendComment:(id)arg1 anonymity:(_Bool)arg2;
- (void)reportComment:(id)arg1 userId:(id)arg2;
- (void)replyComment:(id)arg1 commentId:(id)arg2 destReplyId:(id)arg3;
- (void)pushNextViewController:(id)arg1;
- (void)showExpertInfo:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)keyboardDismss;
- (void)viewWillLayoutSubviews;
- (void)finishLoading;
- (void)refreshData;
- (void)reloadData;
- (void)reconnect;
- (void)removeReloadView;
- (void)showLoadErrorView;
- (void)loadDataPage:(long long)arg1;
- (void)getTextMap;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

