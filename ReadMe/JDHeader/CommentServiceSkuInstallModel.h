//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSDictionary, NSMutableArray, NSString;

@interface CommentServiceSkuInstallModel : JDModel
{
    _Bool _integrityCheck;
    NSString *_imgUrl;
    NSString *_status;
    NSString *_tipMessage;
    NSString *_alliancesTradeTipMsg;
    NSString *_skuId;
    NSString *_inputText;
    NSString *_voiceSwitch;
    NSString *_fullName;
    NSString *_type;
    NSString *_orderId;
    NSMutableArray *_installText;
    long long _mtaVoiceOriginY;
    NSDictionary *_badReviewLabelDic;
}

@property(retain, nonatomic) NSDictionary *badReviewLabelDic; // @synthesize badReviewLabelDic=_badReviewLabelDic;
@property(nonatomic) long long mtaVoiceOriginY; // @synthesize mtaVoiceOriginY=_mtaVoiceOriginY;
@property(retain, nonatomic) NSMutableArray *installText; // @synthesize installText=_installText;
@property(nonatomic) _Bool integrityCheck; // @synthesize integrityCheck=_integrityCheck;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *voiceSwitch; // @synthesize voiceSwitch=_voiceSwitch;
@property(copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *alliancesTradeTipMsg; // @synthesize alliancesTradeTipMsg=_alliancesTradeTipMsg;
@property(copy, nonatomic) NSString *tipMessage; // @synthesize tipMessage=_tipMessage;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

