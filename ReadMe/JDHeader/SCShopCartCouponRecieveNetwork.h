//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork;

@interface SCShopCartCouponRecieveNetwork : NSObject
{
    JDStoreNetwork *_network;
}

@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)getCouponsWith:(id)arg1 completion:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;
- (void)getCouponsWith:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

