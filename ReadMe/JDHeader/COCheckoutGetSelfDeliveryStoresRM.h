//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface COCheckoutGetSelfDeliveryStoresRM : NSObject
{
    _Bool _isMapHidden;
    NSString *_address;
    NSNumber *_latitude;
    NSNumber *_longtitude;
    NSArray *_venderStoreList;
    NSString *_where;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *where; // @synthesize where=_where;
@property(readonly, nonatomic) NSArray *venderStoreList; // @synthesize venderStoreList=_venderStoreList;
@property(readonly, nonatomic) NSNumber *longtitude; // @synthesize longtitude=_longtitude;
@property(readonly, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) _Bool isMapHidden; // @synthesize isMapHidden=_isMapHidden;
- (void).cxx_destruct;

@end
