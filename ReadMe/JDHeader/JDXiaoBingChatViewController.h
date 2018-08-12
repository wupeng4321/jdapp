//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDXBRequestManagerDelegate-Protocol.h"
#import "JDXiaoBingAlbumGroupViewControllerDelegate-Protocol.h"
#import "JDXiaoBingChatCellLongPressDelegate-Protocol.h"
#import "JDXiaoBingRichPadDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDXBRequestManager, JDXiaoBingRichPad, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UIScrollView, UITableView, UITextView, UIView;

@interface JDXiaoBingChatViewController : JDViewController <JDXiaoBingChatCellLongPressDelegate, JDXiaoBingAlbumGroupViewControllerDelegate, JDXiaoBingRichPadDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, JDXBRequestManagerDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate>
{
    UITableView *newguideview;
    UITableView *m_chatTableView;
    UITextView *m_messageTextField;
    UIView *m_inputMessageView;
    UIView *m_inputMenuView;
    UIView *sepLine2;
    UIImageView *m_xbSubMenuView;
    UIImageView *xiaobingGuideView;
    UIImageView *textViewBg;
    UIImageView *m_menuDialog;
    UIButton *m_inputfieldSwitchView;
    NSMutableDictionary *m_xiaoBingProfile;
    _Bool isMenuShow;
    _Bool isKeyboardPop;
    _Bool isRegisterSucess;
    _Bool isviewShow;
    float m_marginTop;
    float m_offset;
    int submenuIndex;
    int reconnectType;
    int retryLogin;
    long long lastTimetick;
    UIScrollView *m_contentView;
    NSString *m_userPhone;
    NSString *m_shareLink;
    double menuWidth;
    NSMutableArray *m_messageArray;
    NSMutableArray *mainMenuValue;
    NSMutableArray *m_timetickArray;
    NSMutableArray *isNewMenuArr;
    JDXiaoBingRichPad *m_XBRichPad;
    JDXBRequestManager *requestManager;
    _Bool _agreementChecked;
    UIButton *_checkButton;
}

@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(nonatomic) _Bool agreementChecked; // @synthesize agreementChecked=_agreementChecked;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)reconnect;
- (void)registerSucess;
- (void)albumConfirmClick:(id)arg1;
- (void)longPressMenuWillShow;
- (void)registerBtnClick:(id)arg1;
- (void)onToggleCheckButton;
- (void)addRegisterButton;
- (void)addRegisterPhoneView;
- (void)addRegisterHelpView;
- (void)addRegisterView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)showRegisterWarningDialog:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setWebImage:(id)arg1 cell:(id)arg2 withUrl:(id)arg3;
- (void)configChatIcon:(id)arg1 cell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)messageDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)menuItemClick:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)takePhotos;
- (void)gotoPhotoView;
- (void)photographButtonClicked;
- (void)cameraButtonClicked;
- (void)registerXBSuccess;
- (void)refreshSendImageMsgState:(_Bool)arg1 withRowIndex:(long long)arg2 imageUrl:(id)arg3;
- (void)refreshSendMsgState:(_Bool)arg1 withRowIndex:(long long)arg2;
- (void)getXBMenuInfoSuccess:(id)arg1;
- (void)receiveMsgSuccess:(id)arg1;
- (void)openWebView:(id)arg1;
- (void)getXBProfileConfigScucess:(id)arg1;
- (void)getXBProfileSuccess:(id)arg1 profileResult:(id)arg2;
- (void)XBHideReloadView;
- (void)XBShowReloadView;
- (void)saveChatMessages;
- (void)checkTimetick:(id)arg1;
- (void)removenewguide;
- (void)shownewguide;
- (void)getChatHistoryMessages;
- (void)checkBeforeSendMessage;
- (long long)showUserSentMessage;
- (void)changeNickname:(id)arg1;
- (void)initPermissionViewController:(id)arg1;
- (void)usrMsgTimeoutAction:(id)arg1;
- (void)xiaobingShare;
- (void)shareAction:(id)arg1;
- (void)jumpMViewWithLogin:(id)arg1;
- (void)hideAllMenus;
- (id)getMsgImageUrl:(id)arg1;
- (void)jumpToXBImageVC:(long long)arg1;
- (void)xiaobingMessageClick:(id)arg1;
- (void)xbKeybordHide:(id)arg1;
- (void)xbKeybordShow:(id)arg1;
- (void)hideRichPad;
- (void)showRichPad;
- (void)richBtnAction;
- (void)hideMenuDialog;
- (void)showMenuDialog;
- (void)renderMenuDialog;
- (void)scrollToBottom:(_Bool)arg1;
- (void)XBSubMenuDismiss;
- (void)destroyXBSubMenu;
- (void)reddotProcess:(id)arg1;
- (void)XBMenuButtonClickAction:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tableViewTap;
- (void)setXBMenuViewInfo:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showInputFieldOnly;
- (void)keyboardMenuExchangeAction;
- (void)reloadSpecialView:(id)arg1;
- (_Bool)getcurrentstate;
- (void)XBShare:(_Bool)arg1 EncodedImageStr:(id)arg2;
- (void)shareBtnClick;
- (void)Screenshare;
- (void)initChatLayout;
- (void)showGuideView;
- (void)guideViewDismiss;
- (void)initRegisterLayout;
- (void)backButtonClicked;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

