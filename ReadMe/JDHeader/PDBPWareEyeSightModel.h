//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDBPWareEyeSightModel : NSObject
{
    _Bool _isHaveEyeSight;
    long long _hitStatus;
    long long _availableTime;
    NSString *_priceContent;
    NSString *_priceReduce;
    NSString *_eyeSightUrl;
    NSString *_eyeSightImage;
    NSString *_eyeSightEndUrl;
    NSString *_eyeSightEndMessage;
    NSString *_eyeSightCode;
}

@property(copy, nonatomic) NSString *eyeSightCode; // @synthesize eyeSightCode=_eyeSightCode;
@property(copy, nonatomic) NSString *eyeSightEndMessage; // @synthesize eyeSightEndMessage=_eyeSightEndMessage;
@property(copy, nonatomic) NSString *eyeSightEndUrl; // @synthesize eyeSightEndUrl=_eyeSightEndUrl;
@property(copy, nonatomic) NSString *eyeSightImage; // @synthesize eyeSightImage=_eyeSightImage;
@property(copy, nonatomic) NSString *eyeSightUrl; // @synthesize eyeSightUrl=_eyeSightUrl;
@property(copy, nonatomic) NSString *priceReduce; // @synthesize priceReduce=_priceReduce;
@property(copy, nonatomic) NSString *priceContent; // @synthesize priceContent=_priceContent;
@property(nonatomic) long long availableTime; // @synthesize availableTime=_availableTime;
@property(nonatomic) long long hitStatus; // @synthesize hitStatus=_hitStatus;
@property(nonatomic) _Bool isHaveEyeSight; // @synthesize isHaveEyeSight=_isHaveEyeSight;
- (void).cxx_destruct;

@end

