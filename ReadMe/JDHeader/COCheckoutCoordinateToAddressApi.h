//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractApi.h"

@interface COCheckoutCoordinateToAddressApi : COCheckoutAbstractApi
{
    long long _type;
    long long _page;
    double _longitude;
    double _latitude;
}

- (id)parseWithKeyValues:(id)arg1;
- (id)requestParams;
- (id)functionId;
- (id)initWithCoordType:(long long)arg1 longitude:(double)arg2 latitude:(double)arg3 page:(long long)arg4;

@end

