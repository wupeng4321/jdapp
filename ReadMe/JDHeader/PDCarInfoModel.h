//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDCarInfoModel : NSObject
{
    _Bool _needCarGift;
    NSString *_carInfoIntroduceUrl;
    NSArray *_carModelInfo;
    NSString *_carContext;
    NSString *_addCarUrl;
    NSString *_carManagerUrl;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *carManagerUrl; // @synthesize carManagerUrl=_carManagerUrl;
@property(copy, nonatomic) NSString *addCarUrl; // @synthesize addCarUrl=_addCarUrl;
@property(copy, nonatomic) NSString *carContext; // @synthesize carContext=_carContext;
@property(nonatomic) _Bool needCarGift; // @synthesize needCarGift=_needCarGift;
@property(retain, nonatomic) NSArray *carModelInfo; // @synthesize carModelInfo=_carModelInfo;
@property(copy, nonatomic) NSString *carInfoIntroduceUrl; // @synthesize carInfoIntroduceUrl=_carInfoIntroduceUrl;
- (void).cxx_destruct;

@end

