//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSDictionary, NSIndexPath, NSNumber, NSString;

@interface Promise311NewModel : JDModel
{
    _Bool selected;
    _Bool support;
    NSString *tipMsg;
    NSArray *days;
    NSString *promise311Tip;
    NSDictionary *promiseTime;
    NSNumber *promiseType;
    NSString *show311Text;
    NSIndexPath *_selectedIndex;
    NSString *promiseDate;
    NSDictionary *promiseSendPay;
    NSString *promiseTimeRange;
    NSString *_promiseName;
    NSString *_batchId;
    NSString *_promiseDateForRecord;
}

@property(copy, nonatomic) NSString *promiseDateForRecord; // @synthesize promiseDateForRecord=_promiseDateForRecord;
@property(retain, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(retain, nonatomic) NSString *promiseName; // @synthesize promiseName=_promiseName;
@property(retain, nonatomic) NSString *promiseTimeRange; // @synthesize promiseTimeRange;
@property(retain, nonatomic) NSDictionary *promiseSendPay; // @synthesize promiseSendPay;
@property(retain, nonatomic) NSString *promiseDate; // @synthesize promiseDate;
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSString *show311Text; // @synthesize show311Text;
@property(retain, nonatomic) NSNumber *promiseType; // @synthesize promiseType;
@property(retain, nonatomic) NSDictionary *promiseTime; // @synthesize promiseTime;
@property(retain, nonatomic) NSString *promise311Tip; // @synthesize promise311Tip;
@property(retain, nonatomic) NSArray *days; // @synthesize days;
@property(nonatomic) _Bool support; // @synthesize support;
@property(retain, nonatomic) NSString *tipMsg; // @synthesize tipMsg;
@property(nonatomic) _Bool selected; // @synthesize selected;
- (void).cxx_destruct;
- (void)setSelectedIndexWithTime:(id)arg1;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
