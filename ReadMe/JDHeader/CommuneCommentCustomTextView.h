//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class CommuneCheckButton, CommuneCustomTextView, NSString, UIButton, UIImageView, UILabel;
@protocol CommuneCommentCustomTextViewDelegate;

@interface CommuneCommentCustomTextView : UIView <UITextViewDelegate>
{
    double _keyBoardHeight;
    _Bool _keyBoardIsShow;
    struct CGRect _originRect;
    double _oringTextHeight;
    _Bool _respondsSelector;
    _Bool _anonymity;
    _Bool _voiceSwitch;
    _Bool _anonymousStateChage;
    _Bool _isVoiceInput;
    _Bool _mark;
    NSString *_commentText;
    CDUnknownBlockType _sendCallBack;
    CDUnknownBlockType _clickCallBack;
    CDUnknownBlockType _keyBoardShow;
    NSString *_minLength;
    NSString *_maxLength;
    NSString *_tip;
    id <CommuneCommentCustomTextViewDelegate> _delegate;
    UIView *_inputLabelView;
    UIView *_inputView;
    UIView *_bottomView;
    CommuneCustomTextView *_textView;
    UILabel *_placeHolderLabel;
    UILabel *_placeLabel;
    UILabel *_indexLabel;
    UIImageView *_anonymityImage;
    NSString *_commentId;
    NSString *_destReplyId;
    CommuneCheckButton *_checkButton;
    UIButton *_voiceBtn;
}

@property(retain, nonatomic) UIButton *voiceBtn; // @synthesize voiceBtn=_voiceBtn;
@property(retain, nonatomic) CommuneCheckButton *checkButton; // @synthesize checkButton=_checkButton;
@property(copy, nonatomic) NSString *destReplyId; // @synthesize destReplyId=_destReplyId;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) UIImageView *anonymityImage; // @synthesize anonymityImage=_anonymityImage;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) UILabel *placeLabel; // @synthesize placeLabel=_placeLabel;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(nonatomic, getter=isMark) _Bool mark; // @synthesize mark=_mark;
@property(retain, nonatomic) CommuneCustomTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *inputLabelView; // @synthesize inputLabelView=_inputLabelView;
@property(nonatomic) _Bool isVoiceInput; // @synthesize isVoiceInput=_isVoiceInput;
@property(nonatomic) __weak id <CommuneCommentCustomTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool anonymousStateChage; // @synthesize anonymousStateChage=_anonymousStateChage;
@property(nonatomic) _Bool voiceSwitch; // @synthesize voiceSwitch=_voiceSwitch;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *maxLength; // @synthesize maxLength=_maxLength;
@property(copy, nonatomic) NSString *minLength; // @synthesize minLength=_minLength;
@property(copy, nonatomic) CDUnknownBlockType keyBoardShow; // @synthesize keyBoardShow=_keyBoardShow;
@property(copy, nonatomic) CDUnknownBlockType clickCallBack; // @synthesize clickCallBack=_clickCallBack;
@property(copy, nonatomic) CDUnknownBlockType sendCallBack; // @synthesize sendCallBack=_sendCallBack;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(nonatomic) _Bool anonymity; // @synthesize anonymity=_anonymity;
- (void).cxx_destruct;
- (void)sendBtnClick;
- (_Bool)customBecomeFirstResponderPlaceHolder:(id)arg1 commentId:(id)arg2 destReplyId:(id)arg3 text:(id)arg4;
- (_Bool)customResignFirstResponder;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)resetView;
- (void)resetViewFrame;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addTargetForKeyBorad;
- (void)anonymityImageClick:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)tapView;
- (void)showVoiceView;
- (void)setAnonymousSwitch:(_Bool)arg1;
- (void)setUpViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
