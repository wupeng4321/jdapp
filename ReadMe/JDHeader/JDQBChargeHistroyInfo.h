//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface JDQBChargeHistroyInfo : NSObject <NSCoding>
{
    int _nBuyNumb;
    NSString *_strChargeAccount;
    NSString *_strChargeType;
    NSString *_strChargeCount;
    NSString *_strDiscount;
    NSString *_strChargeWay;
    NSString *_strMobile;
    NSString *_strSkuID;
    NSString *_strBrandID;
}

@property(nonatomic) int nBuyNumb; // @synthesize nBuyNumb=_nBuyNumb;
@property(retain, nonatomic) NSString *strBrandID; // @synthesize strBrandID=_strBrandID;
@property(retain, nonatomic) NSString *strSkuID; // @synthesize strSkuID=_strSkuID;
@property(retain, nonatomic) NSString *strMobile; // @synthesize strMobile=_strMobile;
@property(retain, nonatomic) NSString *strChargeWay; // @synthesize strChargeWay=_strChargeWay;
@property(retain, nonatomic) NSString *strDiscount; // @synthesize strDiscount=_strDiscount;
@property(retain, nonatomic) NSString *strChargeCount; // @synthesize strChargeCount=_strChargeCount;
@property(retain, nonatomic) NSString *strChargeType; // @synthesize strChargeType=_strChargeType;
@property(retain, nonatomic) NSString *strChargeAccount; // @synthesize strChargeAccount=_strChargeAccount;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

