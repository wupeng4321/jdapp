//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WanderBaseModel.h"

@class NSString;

@interface WanderShopActivePKMessageModel : WanderBaseModel
{
    int _voteType;
    NSString *_commentId;
    NSString *_content;
    NSString *_nickName;
    NSString *_plusCode;
    NSString *_plusUrl;
    NSString *_imgURL;
    NSString *_praiseNum;
    long long _canPraise;
}

@property(nonatomic) int voteType; // @synthesize voteType=_voteType;
@property(nonatomic) long long canPraise; // @synthesize canPraise=_canPraise;
@property(copy, nonatomic) NSString *praiseNum; // @synthesize praiseNum=_praiseNum;
@property(copy, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(copy, nonatomic) NSString *plusUrl; // @synthesize plusUrl=_plusUrl;
@property(copy, nonatomic) NSString *plusCode; // @synthesize plusCode=_plusCode;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

