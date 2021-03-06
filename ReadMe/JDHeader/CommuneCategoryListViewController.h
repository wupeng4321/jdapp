//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "CommuneAnounceDelegate-Protocol.h"
#import "CommuneCategoryRecommendViewDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDReloadViewDelegate-Protocol.h"
#import "NewRefreshTableHeaderViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CommuneAnounceView, CommuneCategoryListDao, CommuneCategoryListNameView, CommuneCategoryRecommend, CommuneCategoryRecommendView, CommunePublishTextDownDao, CommuneShareModel, CommuneUserAuthDao, CommuneUserButton, JDButton, JDFooterLoadingView, NSMutableArray, NSString, NewRefreshTableHeaderView, UIButton, UITableView;

@interface CommuneCategoryListViewController : JDViewController <CommuneAnounceDelegate, UITableViewDelegate, UITableViewDataSource, NewRefreshTableHeaderViewDelegate, JDReloadViewDelegate, JDBaseToastViewDelegate, CommuneCategoryRecommendViewDelegate>
{
    CommuneCategoryListDao *_categoryListDao;
    CommunePublishTextDownDao *_publishTextDao;
    CommuneUserAuthDao *_userAuthDao;
    double _categoryRecommendHeight;
    _Bool _isComplete;
    _Bool _isLoading;
    _Bool _switchLoading;
    _Bool _switchNeedLoad;
    _Bool _isfirstLoad;
    NSString *_categoryId;
    NSString *_cidType;
    NSString *_sourceType;
    NSString *_categoryName;
    CommuneAnounceView *_topActivityView;
    CommuneCategoryListNameView *_categoryNameView;
    NSMutableArray *_itemsArray;
    NSMutableArray *_topicArray;
    CommuneCategoryRecommendView *_topCategoryListView;
    NSMutableArray *_recommendArray;
    UITableView *_categoryTableView;
    JDButton *_askBtn;
    NSString *_requestOffSet;
    JDFooterLoadingView *_footerView;
    NewRefreshTableHeaderView *_refreshHeaderView;
    NSString *_realCategoryId;
    CommuneUserButton *_userCenterButton;
    UIButton *_shareButton;
    long long _currentPage;
    CommuneCategoryRecommend *_selectRecommend;
    CommuneShareModel *_shareInfo;
    NSString *_tipCategoryId;
    NSString *_tipMessage;
    NSString *_timeStamp;
    long long _maxFloor;
    NSString *_questionIdListString;
    long long _exitSource;
    NSString *_userAuthUrlString;
}

@property(copy, nonatomic) NSString *userAuthUrlString; // @synthesize userAuthUrlString=_userAuthUrlString;
@property(nonatomic) long long exitSource; // @synthesize exitSource=_exitSource;
@property(copy, nonatomic) NSString *questionIdListString; // @synthesize questionIdListString=_questionIdListString;
@property(nonatomic) long long maxFloor; // @synthesize maxFloor=_maxFloor;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *tipMessage; // @synthesize tipMessage=_tipMessage;
@property(copy, nonatomic) NSString *tipCategoryId; // @synthesize tipCategoryId=_tipCategoryId;
@property(retain, nonatomic) CommuneShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(nonatomic) _Bool isfirstLoad; // @synthesize isfirstLoad=_isfirstLoad;
@property(retain, nonatomic) CommuneCategoryRecommend *selectRecommend; // @synthesize selectRecommend=_selectRecommend;
@property(nonatomic) _Bool switchNeedLoad; // @synthesize switchNeedLoad=_switchNeedLoad;
@property(nonatomic) _Bool switchLoading; // @synthesize switchLoading=_switchLoading;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) CommuneUserButton *userCenterButton; // @synthesize userCenterButton=_userCenterButton;
@property(copy, nonatomic) NSString *realCategoryId; // @synthesize realCategoryId=_realCategoryId;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) JDFooterLoadingView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSString *requestOffSet; // @synthesize requestOffSet=_requestOffSet;
@property(retain, nonatomic) JDButton *askBtn; // @synthesize askBtn=_askBtn;
@property(retain, nonatomic) UITableView *categoryTableView; // @synthesize categoryTableView=_categoryTableView;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(retain, nonatomic) CommuneCategoryRecommendView *topCategoryListView; // @synthesize topCategoryListView=_topCategoryListView;
@property(retain, nonatomic) NSMutableArray *topicArray; // @synthesize topicArray=_topicArray;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(retain, nonatomic) CommuneCategoryListNameView *categoryNameView; // @synthesize categoryNameView=_categoryNameView;
@property(retain, nonatomic) CommuneAnounceView *topActivityView; // @synthesize topActivityView=_topActivityView;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *cidType; // @synthesize cidType=_cidType;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (void)backButtonClicked;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)selectCategoryId:(id)arg1;
- (void)anounceAction:(int)arg1 AnounceModel:(id)arg2;
- (void)gotoPublishVc;
- (void)getUserAuth;
- (void)loginAndPublishQuestion;
- (void)askQuestion:(id)arg1;
- (void)share;
- (void)reportExpoData;
- (void)reloadData;
- (void)reconnect;
- (void)removeReloadView;
- (void)showLoadErrorView;
- (id)getLocalTimeStamp;
- (void)saveTimeStamp:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadMoreData;
- (void)refreshData;
- (void)loadCategoryRecommendList;
- (void)backTopButtonPressed:(id)arg1;
- (void)finishLoading;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)createBackTopButton;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)openUserCenter;
- (void)enterUserCenter;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

