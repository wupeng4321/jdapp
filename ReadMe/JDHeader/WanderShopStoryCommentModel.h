//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WanderBaseModel.h"

@class NSString;

@interface WanderShopStoryCommentModel : WanderBaseModel
{
    _Bool _isAuthor;
    NSString *_pubDate;
    NSString *_plusCode;
    NSString *_plusUrl;
    NSString *_body;
    NSString *_nickName;
    NSString *_imgURL;
    NSString *_pubUserId;
    NSString *_commentId;
    NSString *_canDel;
}

@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(copy, nonatomic) NSString *canDel; // @synthesize canDel=_canDel;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(readonly, copy, nonatomic) NSString *pubUserId; // @synthesize pubUserId=_pubUserId;
@property(readonly, copy, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(readonly, copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *plusUrl; // @synthesize plusUrl=_plusUrl;
@property(readonly, copy, nonatomic) NSString *plusCode; // @synthesize plusCode=_plusCode;
@property(readonly, copy, nonatomic) NSString *pubDate; // @synthesize pubDate=_pubDate;
- (void).cxx_destruct;

@end
