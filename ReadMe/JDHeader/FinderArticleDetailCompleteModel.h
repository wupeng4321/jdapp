//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderArticleDetailListModel, FinderArticleJumpModel, FinderJumpModel, NSString;

@interface FinderArticleDetailCompleteModel : NSObject
{
    _Bool _isBlackUser;
    _Bool _canComment;
    _Bool _reportSwitch;
    NSString *_code;
    NSString *_subCode;
    FinderArticleDetailListModel *_articleContent;
    FinderArticleJumpModel *_authorPageJump;
    FinderJumpModel *_reportJump;
    FinderArticleJumpModel *_addCommentJump;
    NSString *_richTextUrl;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *richTextUrl; // @synthesize richTextUrl=_richTextUrl;
@property(retain, nonatomic) FinderArticleJumpModel *addCommentJump; // @synthesize addCommentJump=_addCommentJump;
@property(retain, nonatomic) FinderJumpModel *reportJump; // @synthesize reportJump=_reportJump;
@property(nonatomic) _Bool reportSwitch; // @synthesize reportSwitch=_reportSwitch;
@property(retain, nonatomic) FinderArticleJumpModel *authorPageJump; // @synthesize authorPageJump=_authorPageJump;
@property(nonatomic) _Bool canComment; // @synthesize canComment=_canComment;
@property(nonatomic) _Bool isBlackUser; // @synthesize isBlackUser=_isBlackUser;
@property(retain, nonatomic) FinderArticleDetailListModel *articleContent; // @synthesize articleContent=_articleContent;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)articleFirstSectionContentLength:(long long)arg1;
- (id)articleShareWeiBoContent;
- (id)fetchShareModel;
- (id)fetchModel:(id)arg1;
- (long long)numberOfRowInSection:(long long)arg1;
- (double)heightForHeaderInSection:(long long)arg1;
- (long long)numberOfSection;
- (void)refreshCommentState:(id)arg1;
- (void)appendNoCommentModel;
- (void)updateDeleteComment:(id)arg1;
- (void)updateAddComment:(id)arg1;
- (void)commentData:(id)arg1;
- (void)keyValuesDidFinishConvertingToObject;

@end
