//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FeedbackCategoryBoxViewDelegate-Protocol.h"
#import "FeedbackImageListViewDelegate-Protocol.h"
#import "FeedbackImgEnlargeViewControllerDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class FeedbackCategoryBoxView, FeedbackImageListView, MyJdHomeModel, NSArray, NSMutableArray, NSString, NSTimer, UIButton, UIImageView, UILabel, UITextView;
@protocol FeedBackInputViewDelegate;

@interface FeedBackInputView : UIView <UITextViewDelegate, FeedbackCategoryBoxViewDelegate, FeedbackImageListViewDelegate, FeedbackImgEnlargeViewControllerDelegate, JDBaseToastViewDelegate>
{
    NSMutableArray *_feedbackCategoryArr;
    long long _selectedIndex;
    long long _textLength;
    _Bool _hasTipped;
    _Bool _showImageListView;
    _Bool _showVoiceButton;
    MyJdHomeModel *_dataModel;
    UITextView *_inputView;
    id <FeedBackInputViewDelegate> _delegate;
    long long _rowNumber;
    NSArray *_imagesArray;
    long long _totalVoiceInputTextLength;
    UILabel *_titleLabel;
    UILabel *_placeHolderLabel;
    UILabel *_countLabel;
    UIView *_contentView;
    FeedbackCategoryBoxView *_feedbackCategoryBoxView;
    FeedbackImageListView *_feedbackImageListView;
    UIButton *_voiceButton;
    UIImageView *_firstHintImageView;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *firstHintImageView; // @synthesize firstHintImageView=_firstHintImageView;
@property(retain, nonatomic) UIButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(retain, nonatomic) FeedbackImageListView *feedbackImageListView; // @synthesize feedbackImageListView=_feedbackImageListView;
@property(retain, nonatomic) FeedbackCategoryBoxView *feedbackCategoryBoxView; // @synthesize feedbackCategoryBoxView=_feedbackCategoryBoxView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long totalVoiceInputTextLength; // @synthesize totalVoiceInputTextLength=_totalVoiceInputTextLength;
@property(nonatomic, getter=isShowVoiceButton) _Bool showVoiceButton; // @synthesize showVoiceButton=_showVoiceButton;
@property(nonatomic, getter=isShowImageListView) _Bool showImageListView; // @synthesize showImageListView=_showImageListView;
@property(retain, nonatomic) NSArray *imagesArray; // @synthesize imagesArray=_imagesArray;
@property(nonatomic) long long rowNumber; // @synthesize rowNumber=_rowNumber;
@property(nonatomic) __weak id <FeedBackInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) MyJdHomeModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)textChanged:(long long)arg1;
- (void)inputVoiceText:(id)arg1;
- (void)showSpeechRecognizerView;
- (void)voiceInput;
- (_Bool)isFirstUseVoiceInput;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)userCancelDeleteImage;
- (void)userConfirmDeleteImage;
- (void)userDeleteImage;
- (void)imageTappedWithIndex:(id)arg1 andImageView:(id)arg2;
- (void)AddImage;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)didItemTapped:(id)arg1 withModel:(id)arg2;
- (void)resetPlaceholder:(id)arg1;
- (id)modelListWithConfig:(id)arg1;
- (void)setupSubViews;
- (void)setCountLabelFrame;
- (void)layoutSubviewsFrame;
- (void)dismissHintImageView;
- (void)showVoiceHint;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
