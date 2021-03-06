//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface COCheckoutMainVenderFreightRiskRM : NSObject
{
    NSString *_venderId;
    NSString *_venderName;
    NSString *_insuranceFee;
    NSString *_descriptionMsg;
    NSNumber *_selected;
    NSNumber *_type;
    NSNumber *_insuranceType;
}

+ (id)replacedKeyFromPropertyName;
@property(readonly, nonatomic) NSNumber *insuranceType; // @synthesize insuranceType=_insuranceType;
@property(readonly, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSNumber *selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) NSString *descriptionMsg; // @synthesize descriptionMsg=_descriptionMsg;
@property(readonly, nonatomic) NSString *insuranceFee; // @synthesize insuranceFee=_insuranceFee;
@property(readonly, nonatomic) NSString *venderName; // @synthesize venderName=_venderName;
@property(readonly, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
- (void).cxx_destruct;
- (id)getFreightRiskParamValueForRecord;

@end

