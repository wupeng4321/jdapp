//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SopShipmentModel.h"

@class BigItemPromiseModel, COCheckoutShipmentTypeAbstrastModel, NSString, SopShipPromiseModel;

@interface SopJdAndOtherShipmentModel : SopShipmentModel
{
    _Bool _isSopJdShipment;
    _Bool _isSopOtherShipment;
    _Bool _isSopJdHonorShipment;
    NSString *_sopJdShipmentId;
    NSString *_sopJdShipmentName;
    NSString *_sopJdPomiseDate;
    SopShipPromiseModel *_promiseSopJd;
    BigItemPromiseModel *_sopJdBigItemPromise;
    NSString *_sopOtherShipmentId;
    NSString *_sopOtherShipmentName;
    NSString *_sopOtherPomiseDate;
    SopShipPromiseModel *_promiseSopOther;
    BigItemPromiseModel *_sopOtherBigItemPromise;
    NSString *_sopJdHonorShipmentName;
    NSString *_sopJdHonorShipmentId;
    NSString *_sopJdHonorPomiseDate;
    SopShipPromiseModel *_promiseSopJdHonor;
    COCheckoutShipmentTypeAbstrastModel *_sopJdHonorInfos;
}

@property(retain, nonatomic) COCheckoutShipmentTypeAbstrastModel *sopJdHonorInfos; // @synthesize sopJdHonorInfos=_sopJdHonorInfos;
@property(retain, nonatomic) SopShipPromiseModel *promiseSopJdHonor; // @synthesize promiseSopJdHonor=_promiseSopJdHonor;
@property(copy, nonatomic) NSString *sopJdHonorPomiseDate; // @synthesize sopJdHonorPomiseDate=_sopJdHonorPomiseDate;
@property(copy, nonatomic) NSString *sopJdHonorShipmentId; // @synthesize sopJdHonorShipmentId=_sopJdHonorShipmentId;
@property(copy, nonatomic) NSString *sopJdHonorShipmentName; // @synthesize sopJdHonorShipmentName=_sopJdHonorShipmentName;
@property(nonatomic) _Bool isSopJdHonorShipment; // @synthesize isSopJdHonorShipment=_isSopJdHonorShipment;
@property(retain, nonatomic) BigItemPromiseModel *sopOtherBigItemPromise; // @synthesize sopOtherBigItemPromise=_sopOtherBigItemPromise;
@property(retain, nonatomic) SopShipPromiseModel *promiseSopOther; // @synthesize promiseSopOther=_promiseSopOther;
@property(copy, nonatomic) NSString *sopOtherPomiseDate; // @synthesize sopOtherPomiseDate=_sopOtherPomiseDate;
@property(copy, nonatomic) NSString *sopOtherShipmentName; // @synthesize sopOtherShipmentName=_sopOtherShipmentName;
@property(copy, nonatomic) NSString *sopOtherShipmentId; // @synthesize sopOtherShipmentId=_sopOtherShipmentId;
@property(nonatomic) _Bool isSopOtherShipment; // @synthesize isSopOtherShipment=_isSopOtherShipment;
@property(retain, nonatomic) BigItemPromiseModel *sopJdBigItemPromise; // @synthesize sopJdBigItemPromise=_sopJdBigItemPromise;
@property(retain, nonatomic) SopShipPromiseModel *promiseSopJd; // @synthesize promiseSopJd=_promiseSopJd;
@property(copy, nonatomic) NSString *sopJdPomiseDate; // @synthesize sopJdPomiseDate=_sopJdPomiseDate;
@property(copy, nonatomic) NSString *sopJdShipmentName; // @synthesize sopJdShipmentName=_sopJdShipmentName;
@property(copy, nonatomic) NSString *sopJdShipmentId; // @synthesize sopJdShipmentId=_sopJdShipmentId;
@property(nonatomic) _Bool isSopJdShipment; // @synthesize isSopJdShipment=_isSopJdShipment;
- (void).cxx_destruct;
- (id)getShippingPromiseRM;
- (id)getAllShippingTypeName;
- (id)getShippingTypeName;
- (id)getShippingTypeId;
- (_Bool)isSopShiping;
- (void)setDataWithDic:(id)arg1;

@end
