//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface CommuneCommentReplyModel : JDModel
{
    NSString *_content;
    NSString *_userNickName;
    NSString *_createTime;
    NSString *_imgUrl;
    NSString *_to;
    NSString *_replyId;
    NSString *_isSelf;
}

@property(copy, nonatomic) NSString *isSelf; // @synthesize isSelf=_isSelf;
@property(copy, nonatomic) NSString *replyId; // @synthesize replyId=_replyId;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *userNickName; // @synthesize userNickName=_userNickName;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
@property(readonly, nonatomic) float contentHeight;
- (void)setDataWithDic:(id)arg1;

@end

