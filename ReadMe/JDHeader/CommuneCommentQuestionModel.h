//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommuneCommentCommentModel.h"

@class CommuneSingleExpertModel, NSString;

@interface CommuneCommentQuestionModel : CommuneCommentCommentModel
{
    NSString *_canPraise;
    NSString *_praiseNum;
    NSString *_showPraise;
    NSString *_questionContent;
    NSString *_questionId;
    NSString *_productId;
    NSString *_type;
    CommuneSingleExpertModel *_expertInfo;
}

@property(retain, nonatomic) CommuneSingleExpertModel *expertInfo; // @synthesize expertInfo=_expertInfo;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSString *questionContent; // @synthesize questionContent=_questionContent;
@property(copy, nonatomic) NSString *showPraise; // @synthesize showPraise=_showPraise;
@property(copy, nonatomic) NSString *praiseNum; // @synthesize praiseNum=_praiseNum;
@property(copy, nonatomic) NSString *canPraise; // @synthesize canPraise=_canPraise;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

