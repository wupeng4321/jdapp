//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface COCheckoutBigItemJsdRM : NSObject
{
    _Bool _support;
    _Bool _selected;
    _Bool _grayFlag;
    NSNumber *_promiseType;
    NSString *_carriageMoney;
    NSDictionary *_promiseSendPay;
    NSString *_grayMsg;
    NSString *_promiseMsg;
    NSString *_sendMsg;
    NSString *_carriageMoneyTip;
    NSString *_promiseName;
    NSDictionary *_bigItemPromiseSendPay;
    NSString *_bigItemPromiseSpeedHour;
    NSString *_bigItemPromiseCodDate;
    NSString *_bigItemPromiseSpeedMark;
}

@property(retain, nonatomic) NSString *bigItemPromiseSpeedMark; // @synthesize bigItemPromiseSpeedMark=_bigItemPromiseSpeedMark;
@property(retain, nonatomic) NSString *bigItemPromiseCodDate; // @synthesize bigItemPromiseCodDate=_bigItemPromiseCodDate;
@property(retain, nonatomic) NSString *bigItemPromiseSpeedHour; // @synthesize bigItemPromiseSpeedHour=_bigItemPromiseSpeedHour;
@property(retain, nonatomic) NSDictionary *bigItemPromiseSendPay; // @synthesize bigItemPromiseSendPay=_bigItemPromiseSendPay;
@property(retain, nonatomic) NSString *promiseName; // @synthesize promiseName=_promiseName;
@property(retain, nonatomic) NSString *carriageMoneyTip; // @synthesize carriageMoneyTip=_carriageMoneyTip;
@property(retain, nonatomic) NSString *sendMsg; // @synthesize sendMsg=_sendMsg;
@property(retain, nonatomic) NSString *promiseMsg; // @synthesize promiseMsg=_promiseMsg;
@property(retain, nonatomic) NSString *grayMsg; // @synthesize grayMsg=_grayMsg;
@property(nonatomic) _Bool grayFlag; // @synthesize grayFlag=_grayFlag;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSDictionary *promiseSendPay; // @synthesize promiseSendPay=_promiseSendPay;
@property(nonatomic) _Bool support; // @synthesize support=_support;
@property(retain, nonatomic) NSString *carriageMoney; // @synthesize carriageMoney=_carriageMoney;
@property(retain, nonatomic) NSNumber *promiseType; // @synthesize promiseType=_promiseType;
- (void).cxx_destruct;

@end
