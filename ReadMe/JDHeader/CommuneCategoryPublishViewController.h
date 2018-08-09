//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"

@class CommuneCategoryPublishDao, CommuneCategoryPublishQuestionSubmitView, CommuneCategoryPublishQuestionTextView, CommunePublishOpenPushTipToastView, CommunePublishTextDownDao, CommuneUserAuthDao, JDBaseToastView, NSString;

@interface CommuneCategoryPublishViewController : JDViewController <JDBaseToastViewDelegate>
{
    CommunePublishOpenPushTipToastView *toast;
    JDBaseToastView *_toastView;
    _Bool _isdialog;
    CommuneCategoryPublishDao *_publishDao;
    CommunePublishTextDownDao *_publishTextDao;
    CommuneUserAuthDao *_userAuthDao;
    _Bool _isVoiceInput;
    _Bool _requestComplete;
    _Bool _anonymousSwitch;
    NSString *_type;
    NSString *_topicId;
    NSString *_topicName;
    NSString *_categoryID;
    NSString *_categoryName;
    NSString *_callBack;
    CommuneCategoryPublishQuestionSubmitView *_SubmitView;
    NSString *_sourceType;
    CommuneCategoryPublishQuestionTextView *_communeText;
    long long _voiceTextCount;
    NSString *_userAuthUrlString;
}

@property(nonatomic) _Bool anonymousSwitch; // @synthesize anonymousSwitch=_anonymousSwitch;
@property(copy, nonatomic) NSString *userAuthUrlString; // @synthesize userAuthUrlString=_userAuthUrlString;
@property(nonatomic) _Bool requestComplete; // @synthesize requestComplete=_requestComplete;
@property(nonatomic) long long voiceTextCount; // @synthesize voiceTextCount=_voiceTextCount;
@property(nonatomic) _Bool isVoiceInput; // @synthesize isVoiceInput=_isVoiceInput;
@property(retain, nonatomic) CommuneCategoryPublishQuestionTextView *communeText; // @synthesize communeText=_communeText;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) CommuneCategoryPublishQuestionSubmitView *SubmitView; // @synthesize SubmitView=_SubmitView;
@property(copy, nonatomic) NSString *callBack; // @synthesize callBack=_callBack;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)clearTextCache;
- (void)backButtonClicked;
- (void)resetPosition;
- (void)changePosition:(double)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (void)pop;
- (void)addPublishSuccessEventTracking:(long long)arg1;
- (void)publishSubmit;
- (void)publish;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)ensureToPublish;
- (void)popToast:(int)arg1 message:(id)arg2 messagelist:(id)arg3;
- (void)getUserAuth;
- (void)loginAndPublishQuestion;
- (void)gotoUserAuth;
- (void)getDownloadText;
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

