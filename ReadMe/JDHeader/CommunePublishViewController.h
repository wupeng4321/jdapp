//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "CommuneTextViewDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"

@class CommuneDetailModel, CommuneHeaderView, CommuneListDao, CommunePublishDao, CommunePublishOpenPushTipToastView, CommunePublishQuestionSubmitView, CommunePublishQuestionTextView, CommunePublishTextDownDao, CommuneRedDotDao, JDBaseToastView, NSString, UIButton, UIImageView;

@interface CommunePublishViewController : JDViewController <JDBaseToastViewDelegate, CommuneTextViewDelegate>
{
    CommuneHeaderView *_CommuneWareView;
    JDBaseToastView *_toastView;
    CommunePublishOpenPushTipToastView *toast;
    CommunePublishDao *_publishDao;
    CommuneRedDotDao *_redDotDao;
    _Bool _isdialog;
    CommunePublishTextDownDao *_publishTextDao;
    CommuneListDao *_listDao;
    _Bool _isVoiceInput;
    _Bool _requestComplete;
    _Bool _voiceSwitch;
    _Bool _anonymousSwitch;
    NSString *_productSku;
    CommuneDetailModel *_communeModel;
    NSString *_callBack;
    NSString *_sourceType;
    UIButton *_submitButton;
    UIImageView *_redbadgeView;
    long long _voiceTextCount;
    CommunePublishQuestionSubmitView *_SubmitView;
    CommunePublishQuestionTextView *_communeText;
    NSString *_userAuthUrlString;
    NSString *_maxLenght;
    NSString *_minLenght;
    NSString *_tip;
}

@property(nonatomic) _Bool anonymousSwitch; // @synthesize anonymousSwitch=_anonymousSwitch;
@property(nonatomic) _Bool voiceSwitch; // @synthesize voiceSwitch=_voiceSwitch;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *minLenght; // @synthesize minLenght=_minLenght;
@property(copy, nonatomic) NSString *maxLenght; // @synthesize maxLenght=_maxLenght;
@property(copy, nonatomic) NSString *userAuthUrlString; // @synthesize userAuthUrlString=_userAuthUrlString;
@property(retain, nonatomic) CommunePublishQuestionTextView *communeText; // @synthesize communeText=_communeText;
@property(retain, nonatomic) CommunePublishQuestionSubmitView *SubmitView; // @synthesize SubmitView=_SubmitView;
@property(nonatomic) _Bool requestComplete; // @synthesize requestComplete=_requestComplete;
@property(nonatomic) long long voiceTextCount; // @synthesize voiceTextCount=_voiceTextCount;
@property(nonatomic) _Bool isVoiceInput; // @synthesize isVoiceInput=_isVoiceInput;
@property(retain, nonatomic) UIImageView *redbadgeView; // @synthesize redbadgeView=_redbadgeView;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) CommuneDetailModel *communeModel; // @synthesize communeModel=_communeModel;
@property(copy, nonatomic) NSString *productSku; // @synthesize productSku=_productSku;
- (void).cxx_destruct;
- (void)popLastViewController;
- (void)enterToAskQuestion;
- (void)loginAndPublishQuestion;
- (void)authentication;
- (void)requestTextLength;
- (void)clearTextCache;
- (void)backButtonClicked;
- (void)resetPosition;
- (void)changePosition:(double)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (void)didSelectSimilarQuestion:(id)arg1;
- (id)currentNavigationController;
- (void)loginAndOpenUserCenter;
- (void)enterUserCeter;
- (void)poptoCommuneList;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)addPublishSuccessEventTracking:(long long)arg1;
- (void)submitPublish;
- (void)publish;
- (void)ensureToPublish;
- (void)popToast:(int)arg1 message:(id)arg2 messagelist:(id)arg3;
- (void)showVoiceView;
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

