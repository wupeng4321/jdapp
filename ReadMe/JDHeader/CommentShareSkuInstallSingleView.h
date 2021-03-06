//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CommentShareLogisticsViewDelegate-Protocol.h"
#import "ShareOrderCommentRateViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CommentServiceSkuInstallModel, CommentShareLogisticsView, NSString, ShareOrderNewTextView, ShareOrderVoiceView, UIButton, UILabel;
@protocol CommentShareSkuInstallSingleViewDelegate;

@interface CommentShareSkuInstallSingleView : UIView <UITextViewDelegate, ShareOrderCommentRateViewDelegate, CommentShareLogisticsViewDelegate>
{
    long long _voiceCnt;
    UIView *lineView1;
    _Bool _showVoiceButton;
    NSString *_skuId;
    ShareOrderNewTextView *_shareTextView;
    id <CommentShareSkuInstallSingleViewDelegate> _delegate;
    CommentServiceSkuInstallModel *_installModel;
    ShareOrderVoiceView *_voiceButton;
    UILabel *_numLabel;
    double _voiceViewHeight;
    UIView *_installView;
    double _logisticStartY;
    CommentShareLogisticsView *_logisticsView;
    UIButton *_submmitButton;
    UIView *_logisticsTextBackView;
    struct _NSRange _lastRange;
}

@property(retain, nonatomic) UIView *logisticsTextBackView; // @synthesize logisticsTextBackView=_logisticsTextBackView;
@property(retain, nonatomic) UIButton *submmitButton; // @synthesize submmitButton=_submmitButton;
@property(retain, nonatomic) CommentShareLogisticsView *logisticsView; // @synthesize logisticsView=_logisticsView;
@property(nonatomic) double logisticStartY; // @synthesize logisticStartY=_logisticStartY;
@property(nonatomic) struct _NSRange lastRange; // @synthesize lastRange=_lastRange;
@property(retain, nonatomic) UIView *installView; // @synthesize installView=_installView;
@property(nonatomic) double voiceViewHeight; // @synthesize voiceViewHeight=_voiceViewHeight;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(nonatomic) _Bool showVoiceButton; // @synthesize showVoiceButton=_showVoiceButton;
@property(retain, nonatomic) ShareOrderVoiceView *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(retain, nonatomic) CommentServiceSkuInstallModel *installModel; // @synthesize installModel=_installModel;
@property(nonatomic) __weak id <CommentShareSkuInstallSingleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ShareOrderNewTextView *shareTextView; // @synthesize shareTextView=_shareTextView;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)hideTextViewForComment;
- (void)showTextViewForComment;
- (void)changeRateStar;
- (void)rateView:(id)arg1 ratingDidChange:(float)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textChanged:(long long)arg1 forNumLabel:(id)arg2;
- (void)voiceInput:(id)arg1;
- (id)getSkuInstallRate:(_Bool)arg1;
- (id)tagsArray;
- (long long)mtaVoiceOriginY;
- (long long)mtaVoiceCount;
- (id)mtaScore;
- (id)convertArrayToString:(id)arg1;
- (_Bool)isFinishedRate;
- (_Bool)isChangeRate;
- (id)getSkuInstallContent;
- (void)resignTextView;
- (void)scrollViewToSkuView:(_Bool)arg1 voiceHeight:(long long)arg2;
- (void)installAction;
- (void)refresh;
- (void)setAchiveData:(id)arg1;
- (void)setupUI:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 Model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

