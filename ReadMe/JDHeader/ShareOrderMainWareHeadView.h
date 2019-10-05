//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "ShareOrderCarServiceBaseProtocol-Protocol.h"
#import "ShareOrderCarWareScoreCellDelegate-Protocol.h"
#import "ShareOrderCommentRateViewDelegate-Protocol.h"
#import "ShareOrderKeyboardToolDelegate-Protocol.h"
#import "ShareOrderTextViewForCommentCellDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class JDImageView, NSMutableArray, NSString, ShareOrderCarServiceModel, ShareOrderCarServiceView, ShareOrderCommentRateView, ShareOrderCommentWareInfoModel, ShareOrderGiftBannarView, ShareOrderKeyboardTool, ShareOrderNewTextView, UIButton, UILabel, UIView;
@protocol ShareOrderCarWareScoreCellDelegate, ShareOrderMainWareHeadViewDelegate;

@interface ShareOrderMainWareHeadView : UICollectionReusableView <UITextViewDelegate, ShareOrderCommentRateViewDelegate, ShareOrderCarWareScoreCellDelegate, ShareOrderCarServiceBaseProtocol, ShareOrderTextViewForCommentCellDelegate, ShareOrderKeyboardToolDelegate>
{
    double touchWindowHeight;
    double touchViewHeight;
    double scrollHeight;
    double changHeight;
    UIButton *giftButton;
    double appearTime;
    double beginTime;
    NSString *_serverPlaceText;
    struct CGRect currentCarServiceCommentFrame;
    _Bool carServiceCommentIsFirstResponder;
    long long _textEditType;
    ShareOrderCommentRateView *_rateScoreView;
    long long _voiceCnt;
    UIView *_commentView;
    NSString *_evaluateText;
    ShareOrderNewTextView *_textView;
    id <ShareOrderMainWareHeadViewDelegate> _delegate;
    ShareOrderCommentWareInfoModel *_wareModel;
    ShareOrderCarServiceModel *_carServiceModel;
    NSMutableArray *_sectionArray;
    id <ShareOrderCarWareScoreCellDelegate> _wareScoreCellDelegate;
    JDImageView *_topBackgroundImage;
    UIView *_wareDetailView;
    UILabel *_dynamicTipsLabel;
    UILabel *_label;
    UILabel *_scoreLabel;
    double _voiceViewHeight;
    UIView *_feedbackReminderView;
    UILabel *_rateText;
    long long _minLength;
    long long _maxLength;
    UIView *_separateView;
    ShareOrderGiftBannarView *_bannarView;
    ShareOrderCarServiceView *_carServiceView;
    ShareOrderKeyboardTool *_keyboardTool;
    struct _NSRange _lastRange;
}

+ (double)heightNoCommentNoShareOrder:(id)arg1;
+ (double)getHeaderHeight:(id)arg1;
+ (double)getCarServiceViewHeightWithModelArray:(id)arg1;
@property(retain, nonatomic) ShareOrderKeyboardTool *keyboardTool; // @synthesize keyboardTool=_keyboardTool;
@property(retain, nonatomic) ShareOrderCarServiceView *carServiceView; // @synthesize carServiceView=_carServiceView;
@property(retain, nonatomic) ShareOrderGiftBannarView *bannarView; // @synthesize bannarView=_bannarView;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) long long minLength; // @synthesize minLength=_minLength;
@property(retain, nonatomic) UILabel *rateText; // @synthesize rateText=_rateText;
@property(retain, nonatomic) UIView *feedbackReminderView; // @synthesize feedbackReminderView=_feedbackReminderView;
@property(nonatomic) double voiceViewHeight; // @synthesize voiceViewHeight=_voiceViewHeight;
@property(nonatomic) struct _NSRange lastRange; // @synthesize lastRange=_lastRange;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UILabel *dynamicTipsLabel; // @synthesize dynamicTipsLabel=_dynamicTipsLabel;
@property(retain, nonatomic) UIView *wareDetailView; // @synthesize wareDetailView=_wareDetailView;
@property(retain, nonatomic) JDImageView *topBackgroundImage; // @synthesize topBackgroundImage=_topBackgroundImage;
@property(nonatomic) __weak id <ShareOrderCarWareScoreCellDelegate> wareScoreCellDelegate; // @synthesize wareScoreCellDelegate=_wareScoreCellDelegate;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) ShareOrderCarServiceModel *carServiceModel; // @synthesize carServiceModel=_carServiceModel;
@property(retain, nonatomic) ShareOrderCommentWareInfoModel *wareModel; // @synthesize wareModel=_wareModel;
@property(nonatomic) __weak id <ShareOrderMainWareHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ShareOrderNewTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *evaluateText; // @synthesize evaluateText=_evaluateText;
@property(retain, nonatomic) UIView *commentView; // @synthesize commentView=_commentView;
@property(nonatomic) long long voiceCnt; // @synthesize voiceCnt=_voiceCnt;
@property(retain, nonatomic) ShareOrderCommentRateView *rateScoreView; // @synthesize rateScoreView=_rateScoreView;
@property(nonatomic) long long textEditType; // @synthesize textEditType=_textEditType;
- (void).cxx_destruct;
- (void)beginVoice;
- (void)endEditingWithCell:(id)arg1 WithCurrentModel:(id)arg2;
- (void)beginEditingWithCell:(id)arg1 WithCurrentModel:(id)arg2;
- (void)rateViewDidChange:(double)arg1 WithCurrentModel:(id)arg2;
- (struct CGRect)getCarServiceCommentFrame;
- (_Bool)getCarServiceFirstResponderStatus;
- (void)rateView:(id)arg1 ratingDidChange:(float)arg2;
- (_Bool)isDynampicEditTextInfoAbTest;
- (id)getDynampicEditTextTipsAttributedStringWithInputTextNum:(long long)arg1;
- (void)showDynampicInputTextTipsWithInputLength:(long long)arg1;
- (void)inputVoiceText:(id)arg1;
- (void)voiceInput;
- (void)fitCommentView;
- (_Bool)resignFirstResponder;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)hideKeyboard;
- (void)convertShieldList:(id)arg1 imageShieldList:(id)arg2;
- (void)textChanged:(long long)arg1;
- (void)showGuideView;
- (void)setData:(id)arg1;
- (void)setRateText;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
