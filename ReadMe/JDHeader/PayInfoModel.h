//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface PayInfoModel : JDModel
{
    _Bool _isGoodsDetailBaiTiaoFlag;
    NSString *_orderId;
    NSString *_orderTypeCode;
    NSString *_orderType;
    NSString *_orderPrice;
    NSString *_back_url;
    NSNumber *_baiTiaoNum;
    NSString *_paymentCode;
}

@property(copy, nonatomic) NSString *paymentCode; // @synthesize paymentCode=_paymentCode;
@property(copy, nonatomic) NSNumber *baiTiaoNum; // @synthesize baiTiaoNum=_baiTiaoNum;
@property(nonatomic) _Bool isGoodsDetailBaiTiaoFlag; // @synthesize isGoodsDetailBaiTiaoFlag=_isGoodsDetailBaiTiaoFlag;
@property(copy, nonatomic) NSString *back_url; // @synthesize back_url=_back_url;
@property(copy, nonatomic) NSString *orderPrice; // @synthesize orderPrice=_orderPrice;
@property(copy, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(copy, nonatomic) NSString *orderTypeCode; // @synthesize orderTypeCode=_orderTypeCode;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)modelToDictionary;
- (void)setDataWithDic:(id)arg1;

@end

