//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"

@class CommuneDetailDao, CommuneDetailModel, CommunePublishAnswerSubmitView, CommunePublishAnswerTextView, JDBaseToastView, NSString, PublishToastView;

@interface CommunePublishAnswerViewController : JDViewController <JDBaseToastViewDelegate>
{
    JDBaseToastView *_toastView;
    PublishToastView *_toast;
    CommuneDetailDao *_publishAnswerDao;
    NSString *_productID;
    NSString *_questionID;
    _Bool _voiceSwitch;
    _Bool _anonymousSwitch;
    _Bool _isAnswer;
    _Bool _isVoiceInput;
    _Bool _requestComplete;
    CommuneDetailModel *_detailModel;
    NSString *_maxLenght;
    NSString *_minLenght;
    NSString *_tip;
    NSString *_sourceType;
    NSString *_answerProductID;
    NSString *_answerQuestionID;
    CDUnknownBlockType _answerCallBack;
    CommunePublishAnswerTextView *_communeText;
    CommunePublishAnswerSubmitView *_SubmitView;
    long long _voiceTextCount;
    NSString *_userAuthUrlString;
}

@property(copy, nonatomic) NSString *userAuthUrlString; // @synthesize userAuthUrlString=_userAuthUrlString;
@property(nonatomic) _Bool requestComplete; // @synthesize requestComplete=_requestComplete;
@property(nonatomic) long long voiceTextCount; // @synthesize voiceTextCount=_voiceTextCount;
@property(nonatomic) _Bool isVoiceInput; // @synthesize isVoiceInput=_isVoiceInput;
@property(retain, nonatomic) CommunePublishAnswerSubmitView *SubmitView; // @synthesize SubmitView=_SubmitView;
@property(retain, nonatomic) CommunePublishAnswerTextView *communeText; // @synthesize communeText=_communeText;
@property(copy, nonatomic) CDUnknownBlockType answerCallBack; // @synthesize answerCallBack=_answerCallBack;
@property(nonatomic) _Bool isAnswer; // @synthesize isAnswer=_isAnswer;
@property(copy, nonatomic) NSString *answerQuestionID; // @synthesize answerQuestionID=_answerQuestionID;
@property(copy, nonatomic) NSString *answerProductID; // @synthesize answerProductID=_answerProductID;
@property(nonatomic) _Bool anonymousSwitch; // @synthesize anonymousSwitch=_anonymousSwitch;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool voiceSwitch; // @synthesize voiceSwitch=_voiceSwitch;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *minLenght; // @synthesize minLenght=_minLenght;
@property(copy, nonatomic) NSString *maxLenght; // @synthesize maxLenght=_maxLenght;
@property(retain, nonatomic) CommuneDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)clearTextCache;
- (void)backButtonClicked;
- (void)showVoiceView;
- (void)resetPosition;
- (void)changePosition:(double)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (id)currentNavigationController;
- (void)loginAndOpenUserCenter;
- (void)enterUserCeter;
- (void)poptoCommuneList;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)popToast:(long long)arg1 message:(id)arg2 messagelist:(id)arg3;
- (void)submitPublish;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

