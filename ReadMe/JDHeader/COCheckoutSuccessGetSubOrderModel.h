//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSNumber, NSString;

@interface COCheckoutSuccessGetSubOrderModel : JDModel
{
    NSNumber *status;
    NSString *orderId;
    NSString *factPrice;
    NSString *mixMsg;
    NSArray *_childOrderVoList;
    NSString *_paymentCode;
    NSString *_factPaymentName;
}

@property(retain, nonatomic) NSString *factPaymentName; // @synthesize factPaymentName=_factPaymentName;
@property(retain, nonatomic) NSString *paymentCode; // @synthesize paymentCode=_paymentCode;
@property(retain, nonatomic) NSArray *childOrderVoList; // @synthesize childOrderVoList=_childOrderVoList;
@property(retain, nonatomic) NSString *mixMsg; // @synthesize mixMsg;
@property(retain, nonatomic) NSString *factPrice; // @synthesize factPrice;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId;
@property(retain, nonatomic) NSNumber *status; // @synthesize status;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;
- (id)createchildOrderVoListWithArr:(id)arg1;

@end

