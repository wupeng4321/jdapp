//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSDictionary, NSString;

@interface OrderAddressModel : JDModel
{
    int _nameID;
    NSString *_name;
    NSString *_siteId;
    NSString *_siteType;
    NSString *_siteName;
    NSString *_paymentId;
    NSDictionary *_sendPay;
}

+ (id)modelWithModel:(id)arg1;
@property(retain, nonatomic) NSDictionary *sendPay; // @synthesize sendPay=_sendPay;
@property(copy, nonatomic) NSString *paymentId; // @synthesize paymentId=_paymentId;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
@property(copy, nonatomic) NSString *siteType; // @synthesize siteType=_siteType;
@property(copy, nonatomic) NSString *siteId; // @synthesize siteId=_siteId;
@property(nonatomic) int nameID; // @synthesize nameID=_nameID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
