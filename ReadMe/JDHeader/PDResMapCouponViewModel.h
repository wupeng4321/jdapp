//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface PDResMapCouponViewModel : NSObject
{
    NSMutableArray *_canReceiveArray;
    NSMutableArray *_canUtilizeArray;
    NSMutableArray *_couponMutableArray;
    NSArray *_couponInfo;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(retain, nonatomic) NSMutableArray *couponMutableArray; // @synthesize couponMutableArray=_couponMutableArray;
@property(retain, nonatomic) NSMutableArray *canUtilizeArray; // @synthesize canUtilizeArray=_canUtilizeArray;
@property(retain, nonatomic) NSMutableArray *canReceiveArray; // @synthesize canReceiveArray=_canReceiveArray;
- (void).cxx_destruct;
- (void)configData;

@end

