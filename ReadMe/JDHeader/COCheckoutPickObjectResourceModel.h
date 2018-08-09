//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSNumber, NSString;

@interface COCheckoutPickObjectResourceModel : JDModel
{
    _Bool _isRecommendAddress;
    _Bool _canUse;
    _Bool _cantUseType;
    NSNumber *_cityId;
    NSNumber *_townId;
    NSNumber *_areaId;
    NSNumber *_provinceId;
    NSNumber *_pickId;
    NSString *_name;
    NSString *_where;
    NSString *_mobile;
    NSString *_pickIcon;
    NSString *_pickName;
    NSString *_cantUseMsg;
    NSArray *_cantUseSkuList;
    NSString *_minDistance;
    NSString *_minDistanceMsg;
    double _minDistanceNum;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) double minDistanceNum; // @synthesize minDistanceNum=_minDistanceNum;
@property(nonatomic) _Bool cantUseType; // @synthesize cantUseType=_cantUseType;
@property(nonatomic) _Bool canUse; // @synthesize canUse=_canUse;
@property(nonatomic) _Bool isRecommendAddress; // @synthesize isRecommendAddress=_isRecommendAddress;
@property(readonly, copy, nonatomic) NSString *minDistanceMsg; // @synthesize minDistanceMsg=_minDistanceMsg;
@property(readonly, copy, nonatomic) NSString *minDistance; // @synthesize minDistance=_minDistance;
@property(readonly, nonatomic) NSArray *cantUseSkuList; // @synthesize cantUseSkuList=_cantUseSkuList;
@property(readonly, copy, nonatomic) NSString *cantUseMsg; // @synthesize cantUseMsg=_cantUseMsg;
@property(readonly, copy, nonatomic) NSString *pickName; // @synthesize pickName=_pickName;
@property(readonly, copy, nonatomic) NSString *pickIcon; // @synthesize pickIcon=_pickIcon;
@property(readonly, copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(readonly, copy, nonatomic) NSString *where; // @synthesize where=_where;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSNumber *pickId; // @synthesize pickId=_pickId;
@property(readonly, nonatomic) NSNumber *provinceId; // @synthesize provinceId=_provinceId;
@property(readonly, nonatomic) NSNumber *areaId; // @synthesize areaId=_areaId;
@property(readonly, nonatomic) NSNumber *townId; // @synthesize townId=_townId;
@property(readonly, nonatomic) NSNumber *cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;
- (id)newValueFromOldValue:(id)arg1 property:(id)arg2;

@end

