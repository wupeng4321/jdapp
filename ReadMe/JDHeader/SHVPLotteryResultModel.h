//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHVPLotteryResultModel : NSObject
{
    NSString *_action;
    NSString *_activityCode;
    NSString *_activityType;
    NSString *_productId;
    NSString *_productUrl;
    NSString *_productName;
    NSString *_nickName;
}

@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *activityCode; // @synthesize activityCode=_activityCode;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end
