//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface JDNetworkUrlModel : JDModel <NSCoding>
{
    _Bool isJD;
    NSString *domainName;
    NSString *ip;
    NSString *transmitted;
    NSString *received;
    NSString *packetLoss;
    NSString *min;
    NSString *avg;
    NSString *max;
    NSString *dev;
    NSString *code;
    double rate;
    long long timeoutNumber;
    long long totalNumber;
    double totalTime;
    double maxTime;
    double minTime;
}

@property(nonatomic) double minTime; // @synthesize minTime;
@property(nonatomic) double maxTime; // @synthesize maxTime;
@property(nonatomic) double totalTime; // @synthesize totalTime;
@property(nonatomic) long long totalNumber; // @synthesize totalNumber;
@property(nonatomic) long long timeoutNumber; // @synthesize timeoutNumber;
@property(nonatomic) _Bool isJD; // @synthesize isJD;
@property(nonatomic) double rate; // @synthesize rate;
@property(retain, nonatomic) NSString *code; // @synthesize code;
@property(retain, nonatomic) NSString *dev; // @synthesize dev;
@property(retain, nonatomic) NSString *max; // @synthesize max;
@property(retain, nonatomic) NSString *avg; // @synthesize avg;
@property(retain, nonatomic) NSString *min; // @synthesize min;
@property(retain, nonatomic) NSString *packetLoss; // @synthesize packetLoss;
@property(retain, nonatomic) NSString *received; // @synthesize received;
@property(retain, nonatomic) NSString *transmitted; // @synthesize transmitted;
@property(retain, nonatomic) NSString *ip; // @synthesize ip;
@property(retain, nonatomic) NSString *domainName; // @synthesize domainName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end

