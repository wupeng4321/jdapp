//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "FeedBackInputViewDelegate-Protocol.h"
#import "FeedbackImgEnlargeViewControllerDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDContentItemDelegate-Protocol.h"
#import "MyJdAdViewDelegate-Protocol.h"
#import "MyJdCCNotificationBarManagerDelegate-Protocol.h"
#import "PhoneNumberViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FeedBackInputView, FeedbackImageListView, JDButton, JDStoreNetwork, MyJdAdView, MyJdCCNotificationBarManager, MyJdHomeModel, NSMutableArray, NSString, PhoneNumberView, UITableView;

@interface FeedbackViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, MyJdCCNotificationBarManagerDelegate, JDContentItemDelegate, FeedBackInputViewDelegate, JDBaseToastViewDelegate, UIGestureRecognizerDelegate, FeedbackImgEnlargeViewControllerDelegate, PhoneNumberViewDelegate, MyJdAdViewDelegate>
{
    _Bool _shouldRefreshView;
    NSMutableArray *_selectedImagesArr;
    _Bool _hasSelectTitle;
    _Bool _isInputViewFirstResponder;
    _Bool _isShowTip;
    _Bool _isImageListFirstResponder;
    _Bool _isVoiceButtonFirstResponder;
    _Bool _isUploadFaild;
    _Bool _isLoading;
    _Bool _showBanner;
    _Bool _showPhotoSelection;
    _Bool _showVoiceButton;
    UITableView *_feedbackList;
    NSMutableArray *_feedbackListArray;
    JDStoreNetwork *_netWork;
    MyJdAdView *_bannerView;
    FeedBackInputView *_feedbackInputView;
    PhoneNumberView *_phoneView;
    FeedbackImageListView *_feedbackImageListView;
    JDButton *_submitButton;
    CDUnknownBlockType _block;
    MyJdHomeModel *_selectedTitleModel;
    MyJdHomeModel *_notifiModel;
    NSString *_from;
    MyJdCCNotificationBarManager *_notificationBarManager;
}

@property(retain, nonatomic) MyJdCCNotificationBarManager *notificationBarManager; // @synthesize notificationBarManager=_notificationBarManager;
@property(nonatomic) _Bool showVoiceButton; // @synthesize showVoiceButton=_showVoiceButton;
@property(nonatomic) _Bool showPhotoSelection; // @synthesize showPhotoSelection=_showPhotoSelection;
@property(nonatomic) _Bool showBanner; // @synthesize showBanner=_showBanner;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) MyJdHomeModel *notifiModel; // @synthesize notifiModel=_notifiModel;
@property(retain, nonatomic) MyJdHomeModel *selectedTitleModel; // @synthesize selectedTitleModel=_selectedTitleModel;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isUploadFaild; // @synthesize isUploadFaild=_isUploadFaild;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) JDButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) FeedbackImageListView *feedbackImageListView; // @synthesize feedbackImageListView=_feedbackImageListView;
@property(retain, nonatomic) PhoneNumberView *phoneView; // @synthesize phoneView=_phoneView;
@property(retain, nonatomic) FeedBackInputView *feedbackInputView; // @synthesize feedbackInputView=_feedbackInputView;
@property(retain, nonatomic) MyJdAdView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork=_netWork;
@property(retain, nonatomic) NSMutableArray *feedbackListArray; // @synthesize feedbackListArray=_feedbackListArray;
@property(retain, nonatomic) UITableView *feedbackList; // @synthesize feedbackList=_feedbackList;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)statisticTrackPageLevel:(int)arg1 eventId:(id)arg2;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2 eventParam:(id)arg3 nextPageName:(id)arg4;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2 nextPageName:(id)arg3;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2;
- (void)JDScrollNavScreenWillScroll:(id)arg1;
- (void)showQuestionSelectionToast;
- (void)voiceButtondFinishToast;
- (void)imagesSelectedFinishToast;
- (void)handleKeyboardDidHiddenNotifi:(id)arg1;
- (void)handleKeyboardWillHiddenNotifi:(id)arg1;
- (void)handleKeyboardFrameChangedNotifi:(id)arg1;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)MyJdView:(id)arg1 didClickRecentOptimizeMenu:(id)arg2;
- (void)praiseButtonClick;
- (void)userCancelDeleteImage;
- (void)userConfirmDeleteImage;
- (void)userDeleteImage;
- (void)phoneViewTapped;
- (void)feedBackInputView:(id)arg1 speechRecognizerDidChangeFrame:(double)arg2 isUp:(_Bool)arg3;
- (void)voiceInputEnd;
- (void)voiceInputBegin;
- (void)inputViewTapped;
- (void)titleSelectedWithModel:(id)arg1;
- (void)imagesListViewTapped;
- (void)didTapAtItemView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)notificationBarDidClickedCloseButton:(id)arg1;
- (void)notificationBarDidClickedContent:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (long long)sectionNum;
- (void)showLeaveToast;
- (void)setSlideEnable:(_Bool)arg1;
- (void)getImageUrl:(CDUnknownBlockType)arg1;
- (void)uploadCommentContent;
- (void)uploadImages;
- (void)submitBtnClicked;
- (void)updateFeedbackData:(id)arg1;
- (void)removeReloadView;
- (void)showReloadView;
- (void)reconnect;
- (void)getPraiseNum;
- (void)loadhighQualityFeedbackList;
- (void)loadData;
- (void)backButtonClicked;
- (id)initWithParams:(id)arg1;
- (id)initWithFrom:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
