//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PDBPYushouInfoModel : NSObject
{
    _Bool _isMergedBuy;
    _Bool _isYuShou;
    NSString *_countdownNumMills;
    NSString *_expectedDeliveryDate;
    NSString *_tailMoney;
    NSString *_tailMoneyEndTime;
    NSString *_tailMoneyStartTime;
    NSArray *_yuShou3LadderData;
    NSString *_yuShouDeposit;
    NSString *_yuShouNumOfPeople;
    NSString *_yuShouPrice;
    NSString *_yuShouText;
    NSString *_yuShouType;
    NSString *_yuShouladder;
    NSString *_yuShounowStage;
    NSArray *_yushouRule;
    NSString *_yushouStepType;
    NSString *_mergedLogoText;
    NSString *_mergedBuyText;
    NSNumber *_yuShouStage1Num;
    NSString *_yuShouStage1Price;
    NSNumber *_yuShouStage2Num;
    NSString *_yuShouStage2Price;
    NSNumber *_yuShouStage3Num;
    NSString *_yuShouStage3Price;
}

@property(copy, nonatomic) NSString *yuShouStage3Price; // @synthesize yuShouStage3Price=_yuShouStage3Price;
@property(retain, nonatomic) NSNumber *yuShouStage3Num; // @synthesize yuShouStage3Num=_yuShouStage3Num;
@property(copy, nonatomic) NSString *yuShouStage2Price; // @synthesize yuShouStage2Price=_yuShouStage2Price;
@property(retain, nonatomic) NSNumber *yuShouStage2Num; // @synthesize yuShouStage2Num=_yuShouStage2Num;
@property(copy, nonatomic) NSString *yuShouStage1Price; // @synthesize yuShouStage1Price=_yuShouStage1Price;
@property(retain, nonatomic) NSNumber *yuShouStage1Num; // @synthesize yuShouStage1Num=_yuShouStage1Num;
@property(copy, nonatomic) NSString *mergedBuyText; // @synthesize mergedBuyText=_mergedBuyText;
@property(copy, nonatomic) NSString *mergedLogoText; // @synthesize mergedLogoText=_mergedLogoText;
@property(copy, nonatomic) NSString *yushouStepType; // @synthesize yushouStepType=_yushouStepType;
@property(retain, nonatomic) NSArray *yushouRule; // @synthesize yushouRule=_yushouRule;
@property(copy, nonatomic) NSString *yuShounowStage; // @synthesize yuShounowStage=_yuShounowStage;
@property(copy, nonatomic) NSString *yuShouladder; // @synthesize yuShouladder=_yuShouladder;
@property(copy, nonatomic) NSString *yuShouType; // @synthesize yuShouType=_yuShouType;
@property(copy, nonatomic) NSString *yuShouText; // @synthesize yuShouText=_yuShouText;
@property(copy, nonatomic) NSString *yuShouPrice; // @synthesize yuShouPrice=_yuShouPrice;
@property(copy, nonatomic) NSString *yuShouNumOfPeople; // @synthesize yuShouNumOfPeople=_yuShouNumOfPeople;
@property(copy, nonatomic) NSString *yuShouDeposit; // @synthesize yuShouDeposit=_yuShouDeposit;
@property(retain, nonatomic) NSArray *yuShou3LadderData; // @synthesize yuShou3LadderData=_yuShou3LadderData;
@property(copy, nonatomic) NSString *tailMoneyStartTime; // @synthesize tailMoneyStartTime=_tailMoneyStartTime;
@property(copy, nonatomic) NSString *tailMoneyEndTime; // @synthesize tailMoneyEndTime=_tailMoneyEndTime;
@property(copy, nonatomic) NSString *tailMoney; // @synthesize tailMoney=_tailMoney;
@property(nonatomic) _Bool isYuShou; // @synthesize isYuShou=_isYuShou;
@property(nonatomic) _Bool isMergedBuy; // @synthesize isMergedBuy=_isMergedBuy;
@property(copy, nonatomic) NSString *expectedDeliveryDate; // @synthesize expectedDeliveryDate=_expectedDeliveryDate;
@property(copy, nonatomic) NSString *countdownNumMills; // @synthesize countdownNumMills=_countdownNumMills;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end

