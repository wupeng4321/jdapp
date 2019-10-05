//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface OrderRefundModel : NSObject
{
    int _orderStatusId;
    NSNumber *_tipId;
    NSNumber *_isDeliveryLayerShow;
    NSString *_tipSub;
    NSString *_confirmDeliveryDesc;
    NSString *_salesReturnUrl;
    NSString *_code;
    NSString *_tip;
    NSString *_failTip;
    NSMutableArray *_refundReasonList;
    NSArray *_wareInfoList;
    NSString *_title;
    long long _nameReLenLimit;
    long long _phoneReLenLimit;
    NSString *_orderId;
}

@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) int orderStatusId; // @synthesize orderStatusId=_orderStatusId;
@property(nonatomic) long long phoneReLenLimit; // @synthesize phoneReLenLimit=_phoneReLenLimit;
@property(nonatomic) long long nameReLenLimit; // @synthesize nameReLenLimit=_nameReLenLimit;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *wareInfoList; // @synthesize wareInfoList=_wareInfoList;
@property(retain, nonatomic) NSMutableArray *refundReasonList; // @synthesize refundReasonList=_refundReasonList;
@property(retain, nonatomic) NSString *failTip; // @synthesize failTip=_failTip;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *salesReturnUrl; // @synthesize salesReturnUrl=_salesReturnUrl;
@property(retain, nonatomic) NSString *confirmDeliveryDesc; // @synthesize confirmDeliveryDesc=_confirmDeliveryDesc;
@property(retain, nonatomic) NSString *tipSub; // @synthesize tipSub=_tipSub;
@property(retain, nonatomic) NSNumber *isDeliveryLayerShow; // @synthesize isDeliveryLayerShow=_isDeliveryLayerShow;
@property(retain, nonatomic) NSNumber *tipId; // @synthesize tipId=_tipId;
- (void).cxx_destruct;
- (id)formatDicInArr:(id)arg1;
- (id)initWithDic:(id)arg1;
- (void)dealloc;

@end
