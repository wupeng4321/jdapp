//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "EditUserBirthdayDelegate-Protocol.h"
#import "PhotoPickerControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDStoreNetwork, NSMutableArray, NSString, UITableView, UserInfoEditBirthdayView, UserInfoEditViewCell;

@interface UserInfoPersonalInfoViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, EditUserBirthdayDelegate, PhotoPickerControllerDelegate>
{
    UserInfoEditViewCell *_selectedCell;
    NSString *_birthdayStringBak;
    NSMutableArray *_menuList;
    UITableView *_tableView;
    JDStoreNetwork *_netWork;
    NSString *_noModifyText;
    UserInfoEditBirthdayView *_editUserBirthdayView;
}

@property(retain, nonatomic) UserInfoEditBirthdayView *editUserBirthdayView; // @synthesize editUserBirthdayView=_editUserBirthdayView;
@property(retain, nonatomic) NSString *noModifyText; // @synthesize noModifyText=_noModifyText;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork=_netWork;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *menuList; // @synthesize menuList=_menuList;
@property(retain, nonatomic) NSString *birthdayStringBak; // @synthesize birthdayStringBak=_birthdayStringBak;
@property(retain, nonatomic) UserInfoEditViewCell *selectedCell; // @synthesize selectedCell=_selectedCell;
- (void).cxx_destruct;
- (void)statisticTrackPageLevel:(int)arg1 eventId:(id)arg2;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2 eventParam:(id)arg3 nextPageName:(id)arg4;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2 nextPageName:(id)arg3;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2;
- (id)configHeaderViewForTableView;
- (void)addInitConstraints;
- (void)clickAvatar;
- (void)updateUserNickName;
- (void)updateUserSex;
- (void)updateUserBirthday;
- (CDUnknownBlockType)infoRequestBlockWithFunction:(id)arg1 Params:(id)arg2;
- (void)savaImage:(id)arg1;
- (void)loadUserInfoFinishedHandle:(id)arg1;
- (void)photoPickerController:(id)arg1 didFinishClipingImage:(id)arg2;
- (void)valueChangedForDatePickeWithCurrentDateTime:(id)arg1;
- (void)abandonSelectedDateTime;
- (void)ensureSelectedDateTime:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)openPickerController:(long long)arg1;
- (void)openCameraOrPhotoLibraryWithSourceType:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

