//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PDBPYuyueModel : NSObject
{
    _Bool _isYuYue;
    _Bool _isbuyTime;
    NSString *_yuyueType;
    NSString *_yuyueState;
    NSString *_yuYueStartTime;
    NSString *_yuYueEndTime;
    NSString *_buyStartTime;
    NSNumber *_startTime;
    NSString *_buyEndTime;
    NSString *_loginText;
    NSString *_buyTime;
    NSString *_buyTimeLabel;
    NSArray *_yuyueRuleText;
    NSString *_yuyueShowCode;
    NSString *_yuyueText;
    NSString *_autoAddCart;
    long long _yuyueNum;
}

@property(nonatomic) long long yuyueNum; // @synthesize yuyueNum=_yuyueNum;
@property(copy, nonatomic) NSString *autoAddCart; // @synthesize autoAddCart=_autoAddCart;
@property(nonatomic) _Bool isbuyTime; // @synthesize isbuyTime=_isbuyTime;
@property(copy, nonatomic) NSString *yuyueText; // @synthesize yuyueText=_yuyueText;
@property(copy, nonatomic) NSString *yuyueShowCode; // @synthesize yuyueShowCode=_yuyueShowCode;
@property(retain, nonatomic) NSArray *yuyueRuleText; // @synthesize yuyueRuleText=_yuyueRuleText;
@property(copy, nonatomic) NSString *buyTimeLabel; // @synthesize buyTimeLabel=_buyTimeLabel;
@property(copy, nonatomic) NSString *buyTime; // @synthesize buyTime=_buyTime;
@property(copy, nonatomic) NSString *loginText; // @synthesize loginText=_loginText;
@property(copy, nonatomic) NSString *buyEndTime; // @synthesize buyEndTime=_buyEndTime;
@property(copy, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *buyStartTime; // @synthesize buyStartTime=_buyStartTime;
@property(copy, nonatomic) NSString *yuYueEndTime; // @synthesize yuYueEndTime=_yuYueEndTime;
@property(copy, nonatomic) NSString *yuYueStartTime; // @synthesize yuYueStartTime=_yuYueStartTime;
@property(copy, nonatomic) NSString *yuyueState; // @synthesize yuyueState=_yuyueState;
@property(copy, nonatomic) NSString *yuyueType; // @synthesize yuyueType=_yuyueType;
@property(nonatomic) _Bool isYuYue; // @synthesize isYuYue=_isYuYue;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end
