//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface MyCommunicateModel : JDModel
{
    NSString *_itemId;
    NSString *_questionType;
    NSString *_questionContent;
    NSString *_answerContent;
    NSString *_answerCountText;
    NSString *_letMeAnswerText;
    NSString *_nickName;
    NSString *_userText;
    NSString *_skuId;
    NSString *_wareImg;
    NSString *_userImg;
    NSString *_questionImg;
    NSString *_answerImg;
}

@property(retain, nonatomic) NSString *answerImg; // @synthesize answerImg=_answerImg;
@property(retain, nonatomic) NSString *questionImg; // @synthesize questionImg=_questionImg;
@property(retain, nonatomic) NSString *userImg; // @synthesize userImg=_userImg;
@property(retain, nonatomic) NSString *wareImg; // @synthesize wareImg=_wareImg;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) NSString *userText; // @synthesize userText=_userText;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *letMeAnswerText; // @synthesize letMeAnswerText=_letMeAnswerText;
@property(retain, nonatomic) NSString *answerCountText; // @synthesize answerCountText=_answerCountText;
@property(retain, nonatomic) NSString *answerContent; // @synthesize answerContent=_answerContent;
@property(retain, nonatomic) NSString *questionContent; // @synthesize questionContent=_questionContent;
@property(retain, nonatomic) NSString *questionType; // @synthesize questionType=_questionType;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
