//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSNumber, NSString;

@interface TTTLotteryModel : TTTBaseModel
{
    NSString *_code;
    NSString *_subCode;
    NSString *_returnMsg;
    NSString *_userPin;
    NSString *_winner;
    NSString *_prizeName;
    NSNumber *_chances;
    NSString *_promptMsg;
    long long _prizeId;
    long long _prizeType;
    NSString *_prizeImg;
    NSString *_openProblem;
    NSString *_lotteryCode;
    NSString *_address;
    NSString *_name;
    NSString *_mobile;
}

@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *lotteryCode; // @synthesize lotteryCode=_lotteryCode;
@property(copy, nonatomic) NSString *openProblem; // @synthesize openProblem=_openProblem;
@property(copy, nonatomic) NSString *prizeImg; // @synthesize prizeImg=_prizeImg;
@property(nonatomic) long long prizeType; // @synthesize prizeType=_prizeType;
@property(nonatomic) long long prizeId; // @synthesize prizeId=_prizeId;
@property(copy, nonatomic) NSString *promptMsg; // @synthesize promptMsg=_promptMsg;
@property(copy, nonatomic) NSNumber *chances; // @synthesize chances=_chances;
@property(copy, nonatomic) NSString *prizeName; // @synthesize prizeName=_prizeName;
@property(copy, nonatomic) NSString *winner; // @synthesize winner=_winner;
@property(copy, nonatomic) NSString *userPin; // @synthesize userPin=_userPin;
@property(copy, nonatomic) NSString *returnMsg; // @synthesize returnMsg=_returnMsg;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

