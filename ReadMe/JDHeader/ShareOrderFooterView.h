//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "CommentShareLogisticsViewDelegate-Protocol.h"
#import "ShareOrderCommentRateViewDelegate-Protocol.h"
#import "ShareOrderKeyboardToolDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CommentShareLogisticsView, JDButton, NSArray, NSDictionary, NSString, ShareOrderCommentWareInfoModel, ShareOrderKeyboardTool, ShareOrderNewTextView, ShareOrderVerticalTagView, UIButton, UIImageView, UILabel, UIView;
@protocol ShareOrderFooterViewDelegate;

@interface ShareOrderFooterView : UICollectionReusableView <ShareOrderCommentRateViewDelegate, CommentShareLogisticsViewDelegate, UITextViewDelegate, ShareOrderKeyboardToolDelegate>
{
    UIView *view2;
    long long _logisticVoiceCnt;
    NSDictionary *achiveData;
    UIView *viewLine;
    _Bool _hideLineView;
    _Bool _showLogisticVoiceButton;
    _Bool _hideTipAnimate;
    _Bool _hideStoryButton;
    UIView *_serviceView;
    JDButton *_synStoryButton;
    JDButton *_anonymousButton;
    NSDictionary *_controlDic;
    NSDictionary *_tradeCommentDic;
    NSString *_storyButton;
    NSString *_orderId;
    NSDictionary *_logisticsDictionary;
    UIView *_logisticsTextBackView;
    ShareOrderNewTextView *_logisticsTextView;
    ShareOrderCommentWareInfoModel *_wareModel;
    id <ShareOrderFooterViewDelegate> _delegate;
    ShareOrderVerticalTagView *_verticalTagsView;
    UIView *_buttonView;
    long long _wordCount;
    long long _picCount;
    NSArray *_serviceGroups;
    double _logisticStartY;
    double _voiceViewHeight;
    CommentShareLogisticsView *_logisticsView;
    UIImageView *_mainShowIcon;
    UILabel *_mainShowTipLable;
    UILabel *_mainShowTipLableAnimate;
    UIButton *_mainShowRules;
    UIView *_backMaskView;
    ShareOrderKeyboardTool *_keyboardTool;
    struct _NSRange _logisticLastRange;
}

@property(retain, nonatomic) ShareOrderKeyboardTool *keyboardTool; // @synthesize keyboardTool=_keyboardTool;
@property(retain, nonatomic) UIView *backMaskView; // @synthesize backMaskView=_backMaskView;
@property(retain, nonatomic) UIButton *mainShowRules; // @synthesize mainShowRules=_mainShowRules;
@property(nonatomic) _Bool hideStoryButton; // @synthesize hideStoryButton=_hideStoryButton;
@property(nonatomic) _Bool hideTipAnimate; // @synthesize hideTipAnimate=_hideTipAnimate;
@property(retain, nonatomic) UILabel *mainShowTipLableAnimate; // @synthesize mainShowTipLableAnimate=_mainShowTipLableAnimate;
@property(retain, nonatomic) UILabel *mainShowTipLable; // @synthesize mainShowTipLable=_mainShowTipLable;
@property(retain, nonatomic) UIImageView *mainShowIcon; // @synthesize mainShowIcon=_mainShowIcon;
@property(retain, nonatomic) CommentShareLogisticsView *logisticsView; // @synthesize logisticsView=_logisticsView;
@property(nonatomic) double voiceViewHeight; // @synthesize voiceViewHeight=_voiceViewHeight;
@property(nonatomic) struct _NSRange logisticLastRange; // @synthesize logisticLastRange=_logisticLastRange;
@property(nonatomic) double logisticStartY; // @synthesize logisticStartY=_logisticStartY;
@property(retain, nonatomic) NSArray *serviceGroups; // @synthesize serviceGroups=_serviceGroups;
@property(nonatomic) long long picCount; // @synthesize picCount=_picCount;
@property(nonatomic) long long wordCount; // @synthesize wordCount=_wordCount;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) ShareOrderVerticalTagView *verticalTagsView; // @synthesize verticalTagsView=_verticalTagsView;
@property(nonatomic) __weak id <ShareOrderFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ShareOrderCommentWareInfoModel *wareModel; // @synthesize wareModel=_wareModel;
@property(retain, nonatomic) ShareOrderNewTextView *logisticsTextView; // @synthesize logisticsTextView=_logisticsTextView;
@property(retain, nonatomic) UIView *logisticsTextBackView; // @synthesize logisticsTextBackView=_logisticsTextBackView;
@property(retain, nonatomic) NSDictionary *logisticsDictionary; // @synthesize logisticsDictionary=_logisticsDictionary;
@property(nonatomic) _Bool showLogisticVoiceButton; // @synthesize showLogisticVoiceButton=_showLogisticVoiceButton;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) _Bool hideLineView; // @synthesize hideLineView=_hideLineView;
@property(copy, nonatomic) NSString *storyButton; // @synthesize storyButton=_storyButton;
@property(retain, nonatomic) NSDictionary *tradeCommentDic; // @synthesize tradeCommentDic=_tradeCommentDic;
@property(retain, nonatomic) NSDictionary *controlDic; // @synthesize controlDic=_controlDic;
@property(retain, nonatomic) JDButton *anonymousButton; // @synthesize anonymousButton=_anonymousButton;
@property(retain, nonatomic) JDButton *synStoryButton; // @synthesize synStoryButton=_synStoryButton;
@property(retain, nonatomic) UIView *serviceView; // @synthesize serviceView=_serviceView;
- (void).cxx_destruct;
- (id)getTagsArray;
- (void)saveInput;
- (_Bool)hadInput;
- (void)hideKeyboard;
- (void)inputVoiceText:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textChanged:(long long)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)voiceInput:(id)arg1;
- (void)showTextViewForComment;
- (void)hideTextViewForComment;
- (void)changeRateStar;
- (void)rateView:(id)arg1 ratingDidChange:(float)arg2;
- (void)openRulesAction;
- (void)synStoryFlag;
- (void)anonymousCommit;
- (void)changeStoryButton;
- (void)setServiceData:(id)arg1;
- (void)removeServiceData;
- (void)setRateSelected:(id)arg1;
- (id)getRateArray;
- (id)getRealRateArray;
- (void)hideShowTipAnimate;
- (void)hideShowTip;
- (void)synStoryResetFrame;
- (void)beginVoice;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
