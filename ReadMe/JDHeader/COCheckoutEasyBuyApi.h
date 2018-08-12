//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractApi.h"

@class COCheckoutRegionModel;

@interface COCheckoutEasyBuyApi : COCheckoutAbstractApi
{
    unsigned long long _actionType;
    unsigned long long _jumpOrderType;
    COCheckoutRegionModel *_province;
    COCheckoutRegionModel *_city;
    COCheckoutRegionModel *_county;
    COCheckoutRegionModel *_town;
}

@property(retain, nonatomic) COCheckoutRegionModel *town; // @synthesize town=_town;
@property(retain, nonatomic) COCheckoutRegionModel *county; // @synthesize county=_county;
@property(retain, nonatomic) COCheckoutRegionModel *city; // @synthesize city=_city;
@property(retain, nonatomic) COCheckoutRegionModel *province; // @synthesize province=_province;
@property(nonatomic) unsigned long long jumpOrderType; // @synthesize jumpOrderType=_jumpOrderType;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)getAddressParamValue;
- (id)parseWithKeyValues:(id)arg1;
- (id)requestParams;
- (id)functionId;
- (id)initWithType:(unsigned long long)arg1;

@end
