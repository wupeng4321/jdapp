//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface PayElementNameMap : JDModel
{
    NSString *_paymentTypeName;
    NSString *_payAndShipTypeName;
    NSString *_paymentName;
    NSString *_titleIcon;
    NSString *_titleDescription;
}

@property(copy, nonatomic) NSString *titleDescription; // @synthesize titleDescription=_titleDescription;
@property(copy, nonatomic) NSString *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) NSString *paymentName; // @synthesize paymentName=_paymentName;
@property(retain, nonatomic) NSString *payAndShipTypeName; // @synthesize payAndShipTypeName=_payAndShipTypeName;
@property(retain, nonatomic) NSString *paymentTypeName; // @synthesize paymentTypeName=_paymentTypeName;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
