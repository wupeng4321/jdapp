//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractViewController.h"

#import "COCheckoutAddressTableViewCellDelegate-Protocol.h"
#import "COCheckoutMTAHelperProtocol-Protocol.h"
#import "COCheckoutMyAddressCellDelegate-Protocol.h"
#import "COCheckoutTableMenuCellDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class COCheckoutAddressListController, COCheckoutPlaceholderBlankView, COCheckoutSiteResp, NSIndexPath, NSString, UITableView, UITableViewCell, UIView;

@interface COCheckoutAddressListViewController : COCheckoutAbstractViewController <COCheckoutTableMenuCellDelegate, COCheckoutMyAddressCellDelegate, UIActionSheetDelegate, COCheckoutMTAHelperProtocol, COCheckoutAddressTableViewCellDelegate, JDBaseToastViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isBackToParent;
    _Bool _isAutoBackToParent;
    _Bool _isSetDefaultAddressOperation;
    _Bool _isNewVenderMapSwitch;
    _Bool _fromOtherModule;
    _Bool _showMenu;
    CDUnknownBlockType _backResponse;
    COCheckoutAddressListController *_viewModel;
    UITableView *_tableView;
    UIView *_tableFooterView;
    COCheckoutPlaceholderBlankView *_refreshView;
    UIView *_createNewContactButton;
    UITableViewCell *_showMenuCell;
    NSIndexPath *_selectedIndexPath;
    COCheckoutSiteResp *_picksiteResponseModel;
}

@property(retain, nonatomic) COCheckoutSiteResp *picksiteResponseModel; // @synthesize picksiteResponseModel=_picksiteResponseModel;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UITableViewCell *showMenuCell; // @synthesize showMenuCell=_showMenuCell;
@property(nonatomic, getter=isShowMenu) _Bool showMenu; // @synthesize showMenu=_showMenu;
@property(retain, nonatomic) UIView *createNewContactButton; // @synthesize createNewContactButton=_createNewContactButton;
@property(retain, nonatomic) COCheckoutPlaceholderBlankView *refreshView; // @synthesize refreshView=_refreshView;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) COCheckoutAddressListController *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType backResponse; // @synthesize backResponse=_backResponse;
@property(nonatomic, getter=isFromOtherModule) _Bool fromOtherModule; // @synthesize fromOtherModule=_fromOtherModule;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mta_pickEditButtonClicked;
- (void)mta_entryMorePickAddressList;
- (void)mta_selectedPickRecommendAddressWithSelecected:(_Bool)arg1;
- (void)mta_isShowPickRecommendAddress;
- (void)mta_newContactEvent;
- (void)mta_setDefaultContactEvent;
- (void)mta_deleteContactSuccessEvent;
- (void)mta_actionSheetDismissEvent;
- (void)mta_actionSheetDeleteContactEvent;
- (void)meta_showDeleteContactActionSheetEvent;
- (void)mta_deleteContactEventWithIndex:(long long)arg1;
- (void)mta_setDefaultResultFailEvent;
- (void)mta_setDefaultResultEventWithFlag:(_Bool)arg1 message:(id)arg2;
- (void)mta_editContactEvent;
- (void)mta_eventID:(id)arg1 eventName:(id)arg2 paramValue:(id)arg3;
- (void)pv_setParams;
- (id)getShippingModelWithModel:(id)arg1;
- (id)getAddressModelWithModel:(id)arg1;
- (void)removeGuidKeyFromUserDefaults;
- (void)pushContactViewControllerWithAddressModel:(id)arg1 fromCompleteAddress:(_Bool)arg2;
- (void)pushContactViewControllerWithAddressModel:(id)arg1;
- (void)pressNewContactButton:(id)arg1;
- (void)updateNewContactButtonState;
- (void)myAddressCell:(id)arg1 didClickedButtonWithIndex:(unsigned long long)arg2 selected:(_Bool)arg3;
- (void)checkoutAddressTableViewCellDidTapedEditButtonWithIndexPath:(id)arg1;
- (void)menuChooseWithIndexPath:(id)arg1 atIndex:(long long)arg2;
- (_Bool)shouldShowMenuOptionsViewInCell:(id)arg1;
- (void)tableMenuDidHideInCell:(id)arg1;
- (void)tableMenuWillShowInCell:(id)arg1;
- (_Bool)tableMenuShouldShowInCell:(id)arg1;
- (void)hideMenuCellWithTostViewFlag:(_Bool)arg1 message:(id)arg2;
- (void)pushToPickSiteViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)moveSeletedRowToMiddlePosition;
- (void)showTableFooterView;
- (void)handleRefreshViewEvent:(id)arg1;
- (Class)classForCell;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)showToastViewWithInstantFlag:(_Bool)arg1 message:(id)arg2;
- (void)setCallBackBody;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)getPageId;
- (void)__initializeViewModelWithPickerType:(unsigned long long)arg1;
- (id)initWithEasyBuyAddress:(id)arg1;
- (id)initWithShippingAddress:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

