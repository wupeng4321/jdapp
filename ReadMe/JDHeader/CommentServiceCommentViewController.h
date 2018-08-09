//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "CommentShareLogisticsViewDelegate-Protocol.h"
#import "CommentShareSkuInstallSingleViewDelegate-Protocol.h"
#import "JDBaseToastItemsViewDelegate-Protocol.h"
#import "JDViewDelegate-Protocol.h"
#import "ShareOrderCommentRateViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CommentOrderTradeVoucherModel, CommentServiceSkuInstallModel, CommentShareLogisticsView, CommentShareSkuInstallView, JDStoreNetwork, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, ShareOrderNewTextView, ShareOrderVoiceView, UIButton, UILabel, UIScrollView, UIView;

@interface CommentServiceCommentViewController : JDViewController <UITextViewDelegate, JDViewDelegate, JDBaseToastItemsViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, ShareOrderCommentRateViewDelegate, CommentShareLogisticsViewDelegate, CommentShareSkuInstallSingleViewDelegate>
{
    JDStoreNetwork *storeNetwork;
    NSArray *installArray;
    NSDictionary *achiveData;
    UIScrollView *scrollView;
    struct CGRect installRect;
    struct CGRect tradeRect;
    double statusoffsetY;
    _Bool _changeVoicView;
    long long _voiceCnt;
    long long _logisticVoiceCnt;
    double appearTime;
    double beginTime;
    UIView *lastLine;
    UIView *lineView1;
    _Bool _isFromSuccessView;
    _Bool _showVoiceButton;
    _Bool _showLogisticVoiceButton;
    _Bool _installSkuOrOrder;
    int _isScored;
    NSString *tipMessage;
    NSString *_orderId;
    CommentOrderTradeVoucherModel *_orderTradeModel;
    NSString *_serviceID;
    NSString *_secID;
    NSArray *_serviceGroups;
    UILabel *_numLabel;
    UILabel *_logisticNumLabel;
    NSString *_tipMsg;
    NSString *_titleText;
    NSArray *_installGroups;
    NSMutableArray *_installSkuGroups;
    UIView *_installView;
    NSString *_type;
    double _voiceViewHeight;
    ShareOrderNewTextView *_textView;
    ShareOrderVoiceView *_voiceButton;
    ShareOrderNewTextView *_logisticsTextView;
    UIView *_MainView;
    UIView *_logisticsTextBackView;
    ShareOrderVoiceView *_logisticsVoiceButton;
    UIButton *_submmitButton;
    NSMutableDictionary *_logisticsDictionary;
    NSArray *_tags;
    double _logisticStartY;
    NSString *_commentTip;
    NSString *_serviceTitle;
    CommentShareLogisticsView *_logisticsView;
    CommentShareSkuInstallView *_skuInstallView;
    CommentServiceSkuInstallModel *_tempSkuModel;
    UIView *_tempSkuView;
    struct _NSRange _lastRange;
    struct _NSRange _logisticLastRange;
}

@property(retain, nonatomic) UIView *tempSkuView; // @synthesize tempSkuView=_tempSkuView;
@property(retain, nonatomic) CommentServiceSkuInstallModel *tempSkuModel; // @synthesize tempSkuModel=_tempSkuModel;
@property(nonatomic) int isScored; // @synthesize isScored=_isScored;
@property(retain, nonatomic) CommentShareSkuInstallView *skuInstallView; // @synthesize skuInstallView=_skuInstallView;
@property(nonatomic) _Bool installSkuOrOrder; // @synthesize installSkuOrOrder=_installSkuOrOrder;
@property(retain, nonatomic) CommentShareLogisticsView *logisticsView; // @synthesize logisticsView=_logisticsView;
@property(copy, nonatomic) NSString *serviceTitle; // @synthesize serviceTitle=_serviceTitle;
@property(copy, nonatomic) NSString *commentTip; // @synthesize commentTip=_commentTip;
@property(nonatomic) double logisticStartY; // @synthesize logisticStartY=_logisticStartY;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSMutableDictionary *logisticsDictionary; // @synthesize logisticsDictionary=_logisticsDictionary;
@property(retain, nonatomic) UIButton *submmitButton; // @synthesize submmitButton=_submmitButton;
@property(retain, nonatomic) ShareOrderVoiceView *logisticsVoiceButton; // @synthesize logisticsVoiceButton=_logisticsVoiceButton;
@property(retain, nonatomic) UIView *logisticsTextBackView; // @synthesize logisticsTextBackView=_logisticsTextBackView;
@property(retain, nonatomic) UIView *MainView; // @synthesize MainView=_MainView;
@property(retain, nonatomic) ShareOrderNewTextView *logisticsTextView; // @synthesize logisticsTextView=_logisticsTextView;
@property(retain, nonatomic) ShareOrderVoiceView *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(retain, nonatomic) ShareOrderNewTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double voiceViewHeight; // @synthesize voiceViewHeight=_voiceViewHeight;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool showLogisticVoiceButton; // @synthesize showLogisticVoiceButton=_showLogisticVoiceButton;
@property(nonatomic) _Bool showVoiceButton; // @synthesize showVoiceButton=_showVoiceButton;
@property(retain, nonatomic) UIView *installView; // @synthesize installView=_installView;
@property(retain, nonatomic) NSMutableArray *installSkuGroups; // @synthesize installSkuGroups=_installSkuGroups;
@property(retain, nonatomic) NSArray *installGroups; // @synthesize installGroups=_installGroups;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *tipMsg; // @synthesize tipMsg=_tipMsg;
@property(nonatomic) struct _NSRange logisticLastRange; // @synthesize logisticLastRange=_logisticLastRange;
@property(nonatomic) struct _NSRange lastRange; // @synthesize lastRange=_lastRange;
@property(retain, nonatomic) UILabel *logisticNumLabel; // @synthesize logisticNumLabel=_logisticNumLabel;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) NSArray *serviceGroups; // @synthesize serviceGroups=_serviceGroups;
@property(copy, nonatomic) NSString *secID; // @synthesize secID=_secID;
@property(copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(retain, nonatomic) CommentOrderTradeVoucherModel *orderTradeModel; // @synthesize orderTradeModel=_orderTradeModel;
@property(nonatomic) _Bool isFromSuccessView; // @synthesize isFromSuccessView=_isFromSuccessView;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *tipMessage; // @synthesize tipMessage;
- (void).cxx_destruct;
- (id)dictionaryWithRate:(int)arg1 AtIndex:(int)arg2;
- (void)showNoDataView;
- (void)fetchCommitServicesScoreInfo:(id)arg1;
- (void)saveContent;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)gotoSuccessView;
- (void)submitSuccessAndPop:(id)arg1;
- (void)installAction;
- (void)installSkuAction:(id)arg1 dicRate:(id)arg2 model:(id)arg3 skuView:(id)arg4 WithTagsStr:(id)arg5;
- (_Bool)isCompletedAllSkuInstall;
- (void)scroolViewRefresh;
- (void)toastSubmitError;
- (void)toastSubmitSuccess;
- (void)summitAction;
- (void)clickRateView;
- (void)submitInstall:(id)arg1 skuView:(id)arg2;
- (void)getInstallStatus:(id)arg1;
- (void)getInstallBySku:(id)arg1;
- (void)resignSkuTextView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)buttonClick:(id)arg1;
- (void)hideTextViewForComment;
- (void)showTextViewForComment;
- (void)changeRateStar;
- (void)rateView:(id)arg1 ratingDidChange:(float)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textChanged:(long long)arg1 forNumLabel:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)scrollTextViewtoVisible:(_Bool)arg1 withTextView:(id)arg2;
- (void)scrollToViewFromSkuInstall:(id)arg1 status:(_Bool)arg2 voiceHeight:(long long)arg3;
- (void)inputVoiceText:(id)arg1 forTextView:(id)arg2;
- (void)voiceInput:(id)arg1;
- (void)addInstallView:(id)arg1;
- (void)addInstillSkuView;
- (void)setupMainView:(id)arg1;
- (void)backButtonClicked;
- (void)viewWillLayoutSubviews;
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

