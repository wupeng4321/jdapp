//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol-Protocol.h"

@class NSArray, NSNumber, NSString, TTTJumpModel;

@interface TTTCheckInTotalModel : TTTBaseModel <TTTJumpProtocol>
{
    _Bool _isFloatSignedType;
    _Bool _isShowBackBtn;
    NSNumber *_code;
    NSString *_subCode;
    NSString *_subCodeMsg;
    NSString *_statistics;
    NSString *_noAwardTxt;
    TTTJumpModel *_jump;
    NSArray *_dayslist;
    NSArray *_awardList;
    NSString *_rule;
    NSString *_signText;
    NSString *_btnText;
    NSNumber *_rulesHeight;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSNumber *rulesHeight; // @synthesize rulesHeight=_rulesHeight;
@property(nonatomic) _Bool isShowBackBtn; // @synthesize isShowBackBtn=_isShowBackBtn;
@property(nonatomic) _Bool isFloatSignedType; // @synthesize isFloatSignedType=_isFloatSignedType;
@property(copy, nonatomic) NSString *btnText; // @synthesize btnText=_btnText;
@property(copy, nonatomic) NSString *signText; // @synthesize signText=_signText;
@property(copy, nonatomic) NSString *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSArray *awardList; // @synthesize awardList=_awardList;
@property(retain, nonatomic) NSArray *dayslist; // @synthesize dayslist=_dayslist;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *noAwardTxt; // @synthesize noAwardTxt=_noAwardTxt;
@property(copy, nonatomic) NSString *statistics; // @synthesize statistics=_statistics;
@property(copy, nonatomic) NSString *subCodeMsg; // @synthesize subCodeMsg=_subCodeMsg;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(copy, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)firstJumpObject;
- (double)viewHeight:(long long)arg1;
- (long long)getRulesViewType;
- (long long)getCheckInViewType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
