//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "AddUserFileViewDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "MyJdCCNotificationBarManagerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UserInfoHeadViewDelegate-Protocol.h"

@class JDStoreNetwork, MyJdCCNotificationBarManager, MyJdHomeModel, NSMutableArray, NSMutableDictionary, NSString, UITableView, UIView, UserInfoAddFileView, UserInfoEditViewCell, UserInfoHeadView;

@interface UserInfoEditViewController : JDViewController <MyJdCCNotificationBarManagerDelegate, UserInfoHeadViewDelegate, AddUserFileViewDelegate, UIActionSheetDelegate, JDBaseToastViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSMutableDictionary *_contentDic;
    NSMutableArray *_keyArr;
    NSMutableArray *_filesDataArr;
    NSMutableDictionary *_fileLimitDic;
    _Bool _isRequestReturn;
    _Bool _isViewWillDisappear;
    UserInfoEditViewCell *_selectedCell;
    NSMutableArray *_menuList;
    UITableView *_tableView;
    JDStoreNetwork *_netWork;
    MyJdHomeModel *_notifiViewModel;
    MyJdHomeModel *_fileEntranceModel;
    UserInfoHeadView *_userInfoHeadView;
    NSString *_addFileTitle;
    UserInfoAddFileView *_addUserFileView;
    UIView *_footerView;
    NSString *_accountSafeContent;
    MyJdCCNotificationBarManager *_notificationBarManager;
}

@property(retain, nonatomic) MyJdCCNotificationBarManager *notificationBarManager; // @synthesize notificationBarManager=_notificationBarManager;
@property(retain, nonatomic) NSString *accountSafeContent; // @synthesize accountSafeContent=_accountSafeContent;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UserInfoAddFileView *addUserFileView; // @synthesize addUserFileView=_addUserFileView;
@property(copy, nonatomic) NSString *addFileTitle; // @synthesize addFileTitle=_addFileTitle;
@property(retain, nonatomic) UserInfoHeadView *userInfoHeadView; // @synthesize userInfoHeadView=_userInfoHeadView;
@property(retain, nonatomic) MyJdHomeModel *fileEntranceModel; // @synthesize fileEntranceModel=_fileEntranceModel;
@property(retain, nonatomic) MyJdHomeModel *notifiViewModel; // @synthesize notifiViewModel=_notifiViewModel;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork=_netWork;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *menuList; // @synthesize menuList=_menuList;
@property(retain, nonatomic) UserInfoEditViewCell *selectedCell; // @synthesize selectedCell=_selectedCell;
- (void).cxx_destruct;
- (void)statisticTrackPageLevel:(int)arg1 eventId:(id)arg2;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2 eventParam:(id)arg3 nextPageName:(id)arg4;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2 nextPageName:(id)arg3;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2;
- (id)configHeaderViewForTableView;
- (void)addInitConstraints;
- (void)didFinishInToastView:(id)arg1;
- (void)logoutAction;
- (void)didFinishLogin:(id)arg1;
- (void)loadUserInfoFinishedHandle:(id)arg1;
- (id)modelListWithConfig:(id)arg1;
- (void)updateUserFiles:(id)arg1;
- (void)updateUserAccountInfo:(id)arg1;
- (void)updateRedPointVersion:(id)arg1;
- (void)checkUserInfoRedPoint:(id)arg1 withModel:(id)arg2;
- (void)checkCellRedPoint:(id)arg1 withModel:(id)arg2;
- (void)settingsTapped:(id)arg1;
- (void)jumpUserInfoWebViewControllerWithModel:(id)arg1;
- (void)updateUserAddressWithModel:(id)arg1;
- (void)notificationBarDidClickedCloseButton:(id)arg1;
- (void)notificationBarDidClickedContent:(id)arg1;
- (void)gotoFileAddWithModel:(id)arg1;
- (void)configAddUserFileViewWithData:(id)arg1;
- (void)addUserFile;
- (void)configUserInfoHeadView;
- (void)userChoseCancel;
- (void)userChoseFile:(id)arg1;
- (void)addUserFileWithFiles;
- (void)userFileClickedWithModel:(id)arg1;
- (void)addUserFileEntranceClicked;
- (void)editPersonalInfoWithModel:(id)arg1;
- (void)personalInfoViewTapped:(id)arg1 andModel:(id)arg2;
- (void)gotoNextPage:(id)arg1;
- (void)gotoMyMade;
- (void)showPaySetting;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)addMenuList:(id)arg1;
- (void)loadData;
- (_Bool)isUserLogined;
- (id)loginNotification;
- (void)viewDidDisappear:(_Bool)arg1;
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

