//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSSearchBaseRequest.h"

@class NSString;

@interface FSSPromCouponTotalRequest : FSSearchBaseRequest
{
    NSString *_couponID;
    long long _inlet;
}

@property(nonatomic) long long inlet; // @synthesize inlet=_inlet;
@property(copy, nonatomic) NSString *couponID; // @synthesize couponID=_couponID;
- (void).cxx_destruct;
- (id)parseWithCompoments:(id)arg1;
- (void)setupRequest:(id)arg1;

@end
