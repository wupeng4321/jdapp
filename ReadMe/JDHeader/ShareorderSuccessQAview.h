//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, ShareOrderQAModel, ShareOrderSuccessTextView, UIButton, UIImageView, UILabel;

@interface ShareorderSuccessQAview : UIView <UITextViewDelegate>
{
    UIView *_questionView;
    ShareOrderSuccessTextView *_textView;
    ShareOrderQAModel *_model;
    CDUnknownBlockType _heightChangeBlock;
    CDUnknownBlockType _changeQuestionBlock;
    NSString *_wareId;
    CDUnknownBlockType _didPushlishCommentBlock;
    UILabel *_questionLabel;
    UIImageView *_tampImageView;
    UIButton *_changeButton;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *changeButton; // @synthesize changeButton=_changeButton;
@property(retain, nonatomic) UIImageView *tampImageView; // @synthesize tampImageView=_tampImageView;
@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(copy, nonatomic) CDUnknownBlockType didPushlishCommentBlock; // @synthesize didPushlishCommentBlock=_didPushlishCommentBlock;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(copy, nonatomic) CDUnknownBlockType changeQuestionBlock; // @synthesize changeQuestionBlock=_changeQuestionBlock;
@property(copy, nonatomic) CDUnknownBlockType heightChangeBlock; // @synthesize heightChangeBlock=_heightChangeBlock;
@property(retain, nonatomic) ShareOrderQAModel *model; // @synthesize model=_model;
@property(retain, nonatomic) ShareOrderSuccessTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *questionView; // @synthesize questionView=_questionView;
- (void).cxx_destruct;
- (void)changeQuestion;
- (void)didPublishComment;
- (void)setQuestionId:(id)arg1 question:(id)arg2 isShowChangeButton:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
