//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPFullBaseViewController.h"

#import "JDPDisplayInfoCellDelegate-Protocol.h"
#import "JDPPaymentCodeViewDelegate-Protocol.h"
#import "JDPScreenshotDangerTipViewDelegate-Protocol.h"
#import "JDPayOpenPaymentCodeViewDelegate-Protocol.h"
#import "JDPayPaymentCodeVerifyProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class JDPActionSheet, JDPDisplayInfoCell, JDPPaymentCodeView, JDPayOpenPaymentCodeView, JDPayPaymentCodeModel, NSArray, NSDictionary, NSMutableArray, NSString, UIButton, UIColor, UIScrollView;

@interface JDPayPaymentCodeViewController : JDPFullBaseViewController <JDPayPaymentCodeVerifyProtocol, JDPScreenshotDangerTipViewDelegate, JDPPaymentCodeViewDelegate, UIScrollViewDelegate, JDPDisplayInfoCellDelegate, JDPayOpenPaymentCodeViewDelegate>
{
    _Bool _noNeedCloseSelf;
    _Bool _isUnionCode;
    _Bool _isUnionCodeByScroll;
    _Bool _dangerTipIsShowing;
    JDPayPaymentCodeModel *_paymentCodeModel;
    NSDictionary *_userInfo;
    JDPActionSheet *_jdActionSheet;
    UIScrollView *_backgroundScrollView;
    double _originBrightness;
    NSMutableArray *_actionSheetTitles;
    JDPPaymentCodeView *_payCodeUnionView;
    JDPPaymentCodeView *_payCodeNetsUnionView;
    JDPayOpenPaymentCodeView *_openPayCodeUnionView;
    JDPayOpenPaymentCodeView *_openPayCodeNetsUnionView;
    UIColor *_payCodeUnionViewColor;
    UIColor *_payCodeNetsUnionViewColor;
    NSArray *_codeTypes;
    JDPDisplayInfoCell *_marketInfoCell;
    double _startContentOffsetX;
    double _endContentOffsetX;
    NSArray *_codeSequence;
    double _targetOffsetX;
    UIButton *_settingBtn;
}

@property(retain, nonatomic) UIButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(nonatomic) double targetOffsetX; // @synthesize targetOffsetX=_targetOffsetX;
@property(nonatomic) _Bool dangerTipIsShowing; // @synthesize dangerTipIsShowing=_dangerTipIsShowing;
@property(retain, nonatomic) NSArray *codeSequence; // @synthesize codeSequence=_codeSequence;
@property(nonatomic) double endContentOffsetX; // @synthesize endContentOffsetX=_endContentOffsetX;
@property(nonatomic) double startContentOffsetX; // @synthesize startContentOffsetX=_startContentOffsetX;
@property(nonatomic) _Bool isUnionCodeByScroll; // @synthesize isUnionCodeByScroll=_isUnionCodeByScroll;
@property(nonatomic) _Bool isUnionCode; // @synthesize isUnionCode=_isUnionCode;
@property(retain, nonatomic) JDPDisplayInfoCell *marketInfoCell; // @synthesize marketInfoCell=_marketInfoCell;
@property(copy, nonatomic) NSArray *codeTypes; // @synthesize codeTypes=_codeTypes;
@property(copy, nonatomic) UIColor *payCodeNetsUnionViewColor; // @synthesize payCodeNetsUnionViewColor=_payCodeNetsUnionViewColor;
@property(copy, nonatomic) UIColor *payCodeUnionViewColor; // @synthesize payCodeUnionViewColor=_payCodeUnionViewColor;
@property(retain, nonatomic) JDPayOpenPaymentCodeView *openPayCodeNetsUnionView; // @synthesize openPayCodeNetsUnionView=_openPayCodeNetsUnionView;
@property(retain, nonatomic) JDPayOpenPaymentCodeView *openPayCodeUnionView; // @synthesize openPayCodeUnionView=_openPayCodeUnionView;
@property(retain, nonatomic) JDPPaymentCodeView *payCodeNetsUnionView; // @synthesize payCodeNetsUnionView=_payCodeNetsUnionView;
@property(retain, nonatomic) JDPPaymentCodeView *payCodeUnionView; // @synthesize payCodeUnionView=_payCodeUnionView;
@property(nonatomic) _Bool noNeedCloseSelf; // @synthesize noNeedCloseSelf=_noNeedCloseSelf;
@property(retain, nonatomic) NSMutableArray *actionSheetTitles; // @synthesize actionSheetTitles=_actionSheetTitles;
@property(nonatomic) double originBrightness; // @synthesize originBrightness=_originBrightness;
@property(retain, nonatomic) UIScrollView *backgroundScrollView; // @synthesize backgroundScrollView=_backgroundScrollView;
@property(retain, nonatomic) JDPActionSheet *jdActionSheet; // @synthesize jdActionSheet=_jdActionSheet;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) JDPayPaymentCodeModel *paymentCodeModel; // @synthesize paymentCodeModel=_paymentCodeModel;
- (void).cxx_destruct;
- (void)cancelFingerPrintRequest;
- (void)resetEntraceCondition;
- (void)removeSubViewsOnClosePaymentCode;
- (void)closePayCode:(id)arg1;
- (void)resumeFreshCodeHightBrightness;
- (void)userDidSelectAddNewCard;
- (void)userDidSelectPayChannel:(id)arg1 oldChannel:(id)arg2;
- (void)jdp_refreshPaymentCodeInfoWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)verifyControllerFailedWithModel:(id)arg1;
- (void)verifyControllerSuccessed:(id)arg1 controller:(id)arg2;
- (void)verifyControllerCanceled:(id)arg1;
- (void)jumpToH5ByUrl:(id)arg1;
- (void)jumpToAPPH5ByUrl:(id)arg1;
- (_Bool)checkNetworkAvailability;
- (void)jdp_closeTryPaymentCode;
- (void)jdp_closePaymentCode;
- (void)refreshPaymentCode:(id)arg1;
- (void)jumpToCodePayLimitWorkflow;
- (void)jdp_manualRereshCode;
- (void)actionSheet:(id)arg1 clickedButtonIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)jdp_showJDActionSheet;
- (void)hanleTimerByDragging;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clickOnDisplayInfoCell:(id)arg1 cellTag:(unsigned long long)arg2;
- (void)private_showInuptViewControllerWithResultDict:(id)arg1;
- (void)verifyPayWithFingerData:(id)arg1 resultDict:(id)arg2;
- (void)openWithFingerData:(id)arg1 resultDict:(id)arg2;
- (void)private_startPayRequestWithFingerprintData:(id)arg1 type:(long long)arg2 resultDict:(id)arg3;
- (void)private_startFingerprintPayWithResultDict:(id)arg1;
- (void)checkPassWord:(id)arg1;
- (void)jdp_authBindCard;
- (void)jdp_queryUserInfo;
- (void)private_resetStatus;
- (void)jdp_colseSelfAnimated:(_Bool)arg1;
- (void)jdp_addNewCardBackForce:(_Bool)arg1;
- (void)private_creditFillView;
- (void)private_checkFringerToOpen;
- (void)private_pushCheckSMSVC;
- (void)private_pushCheckPWDVCTip:(id)arg1;
- (void)jdp_handlePaymentCodeModelInfo:(id)arg1;
- (void)private_delayShakeAnimation;
- (void)private_marketLogoShakeAnimation;
- (void)screenshotDangerTipViewClosed;
- (void)jdp_userDidTakeScreenshot:(id)arg1;
- (void)didChangePayMethod;
- (void)displayPayResult:(id)arg1;
- (void)verifyPayResult:(id)arg1;
- (void)didChangePayMethodOnPaymentCodeView:(id)arg1;
- (void)didClickOpenButtonOnOpenPaymentCodeView:(id)arg1;
- (void)jdp_configOpenPaymentCodeWithModel:(id)arg1;
- (void)jdp_configUIElementsWithModel:(id)arg1;
- (void)jdp_configBottomViewAndUpdateContent;
- (void)jdp_rightButtonClick;
- (void)fireResutTimerStartTimer;
- (void)startTimer;
- (void)jdp_backButtonClick;
- (void)jdp_backButtonClick_BtnClick;
- (void)didMoveToParentViewController:(id)arg1;
- (void)handleNetUnionCodePayList;
- (void)stopNetUnionTimer;
- (void)startNetUnionTimer;
- (void)stopUnionTimer;
- (void)startUnionTimer;
- (void)jdp_stopRefreshAndPollTimer;
- (void)jdp_startRefreshAndPollTimer;
- (void)jdp_startPollTimer;
- (void)jdp_startRefreshDelayTimer;
- (void)jdp_resetScreenBrightNess;
- (void)jdp_configScreenBrightNess;
- (void)jdp_resetBrightness;
- (void)notification_willEnterForeground;
- (void)notification_didEnterBackground;
- (void)notification_addNewCard;
- (void)jdp_changePaymethod;
- (void)jdp_removeScreenShortNotification;
- (void)jdp_configScreenShortNotification;
- (void)notification_doEnter;
- (void)notification_colseSelf;
- (void)jdp_addObserverNotification;
- (void)jdp_resetBrightnessWithNotification:(id)arg1;
- (void)jdp_increaseBrightness;
- (void)jdp_configScreenBrightNessNotification;
- (long long)preferredStatusBarStyle;
- (void)jdp_configOpenWLCode:(int)arg1;
- (void)jdp_configWLCode:(int)arg1;
- (void)jdp_configOpenYLCode:(int)arg1;
- (void)jdp_configYLCode:(int)arg1;
- (void)jdp_removeMaskCodeView;
- (void)jdp_configOpenQRCodeView;
- (void)jdp_configQRCodeViewByWay:(_Bool)arg1;
- (void)jdp_configNaviBar;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

