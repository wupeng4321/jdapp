//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface JDShopCrmCouponsModel : JDModel
{
    NSString *_couponId;
    NSNumber *_status;
}

@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

