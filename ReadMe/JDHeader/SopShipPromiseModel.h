//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SopShipPromiseModel : JDModel
{
    NSArray *_days;
    NSNumber *_batchId;
    NSString *_promiseDate;
    NSString *_promiseTime;
    NSString *_promiseTimeRange;
    NSDictionary *_promiseSendPay;
    NSDictionary *_promiseForSaveDic;
}

@property(retain, nonatomic) NSDictionary *promiseForSaveDic; // @synthesize promiseForSaveDic=_promiseForSaveDic;
@property(retain, nonatomic) NSDictionary *promiseSendPay; // @synthesize promiseSendPay=_promiseSendPay;
@property(retain, nonatomic) NSString *promiseTimeRange; // @synthesize promiseTimeRange=_promiseTimeRange;
@property(retain, nonatomic) NSString *promiseTime; // @synthesize promiseTime=_promiseTime;
@property(retain, nonatomic) NSString *promiseDate; // @synthesize promiseDate=_promiseDate;
@property(retain, nonatomic) NSNumber *batchId; // @synthesize batchId=_batchId;
@property(retain, nonatomic) NSArray *days; // @synthesize days=_days;
- (void).cxx_destruct;
- (void)setPromiseForSaveSelectedDay:(long long)arg1 selectedHour:(long long)arg2;
- (void)setDataWithDic:(id)arg1;

@end

