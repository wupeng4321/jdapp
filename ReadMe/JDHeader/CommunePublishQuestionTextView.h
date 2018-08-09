//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CommuneMatchedQuestionTableViewCellDidClickDelegate-Protocol.h"
#import "CommuneTableViewDataSourceDelegate-Protocol.h"
#import "CommuneTableViewDelegate-Protocol.h"
#import "CommuneTableViewWrapperDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CommunePublishDao, CommuneTableViewWrapper, NSArray, NSMutableArray, NSString, UILabel, UITextView;
@protocol CommuneTextViewDelegate;

@interface CommunePublishQuestionTextView : UIView <UITextViewDelegate, CommuneTableViewWrapperDelegate, CommuneTableViewDataSourceDelegate, CommuneTableViewDelegate, CommuneMatchedQuestionTableViewCellDidClickDelegate>
{
    UILabel *_placeHolderLabel;
    CommunePublishDao *_publishDao;
    _Bool _isComplete;
    _Bool _isLoading;
    UITextView *_inputView;
    id <CommuneTextViewDelegate> _tdelegate;
    NSString *_sku;
    CDUnknownBlockType _textChangeBlock;
    NSString *_maxlenght;
    NSString *_minlenght;
    CommuneTableViewWrapper *_questionListTv;
    NSString *_keyword;
    NSMutableArray *_questionList;
    NSArray *_keywordList;
    long long _page;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSArray *keywordList; // @synthesize keywordList=_keywordList;
@property(retain, nonatomic) NSMutableArray *questionList; // @synthesize questionList=_questionList;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) CommuneTableViewWrapper *questionListTv; // @synthesize questionListTv=_questionListTv;
@property(copy, nonatomic) NSString *minlenght; // @synthesize minlenght=_minlenght;
@property(copy, nonatomic) NSString *maxlenght; // @synthesize maxlenght=_maxlenght;
@property(copy, nonatomic) CDUnknownBlockType textChangeBlock; // @synthesize textChangeBlock=_textChangeBlock;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(nonatomic) __weak id <CommuneTextViewDelegate> tdelegate; // @synthesize tdelegate=_tdelegate;
@property(retain, nonatomic) UITextView *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (id)getAttributedString;
- (void)CommuneMatchedQuestionTableViewCellDidClick:(id)arg1 model:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)CommuneTableViewLoadMore;
- (_Bool)CommuneTableViewCanloadMore;
- (void)voiceTextChange;
- (int)checkContentLength;
@property(copy, nonatomic) NSString *text;
- (void)setFrame:(struct CGRect)arg1;
- (double)getHeightTextContent;
- (id)removeSpaceAndNewline:(id)arg1;
- (void)searchSimilarQuestionsListWithKeyWord:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 max:(id)arg2 min:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

