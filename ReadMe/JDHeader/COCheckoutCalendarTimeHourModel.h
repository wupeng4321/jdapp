//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface COCheckoutCalendarTimeHourModel : NSObject
{
    _Bool _isCanSelected;
    NSString *_promiseTimeRange;
    NSDictionary *_promiseSendPay;
    NSString *_batchId;
    NSString *_yunfeiMsg;
    long long _timeRangType;
    NSString *_yunfeiMsgColor;
    NSString *_promiseTagType;
    NSNumber *_cutOrder;
}

@property(retain, nonatomic) NSNumber *cutOrder; // @synthesize cutOrder=_cutOrder;
@property(retain, nonatomic) NSString *promiseTagType; // @synthesize promiseTagType=_promiseTagType;
@property(retain, nonatomic) NSString *yunfeiMsgColor; // @synthesize yunfeiMsgColor=_yunfeiMsgColor;
@property(nonatomic) long long timeRangType; // @synthesize timeRangType=_timeRangType;
@property(retain, nonatomic) NSString *yunfeiMsg; // @synthesize yunfeiMsg=_yunfeiMsg;
@property(retain, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(nonatomic) _Bool isCanSelected; // @synthesize isCanSelected=_isCanSelected;
@property(retain, nonatomic) NSDictionary *promiseSendPay; // @synthesize promiseSendPay=_promiseSendPay;
@property(retain, nonatomic) NSString *promiseTimeRange; // @synthesize promiseTimeRange=_promiseTimeRange;
- (void).cxx_destruct;

@end
