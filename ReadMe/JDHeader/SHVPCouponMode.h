//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableAttributedString, NSString;

@interface SHVPCouponMode : NSObject
{
    NSString *_act;
    NSString *_couponId;
    NSString *_operation;
    NSString *_quota;
    NSString *_denomination;
    NSMutableAttributedString *_priceStr;
    NSMutableAttributedString *_denoStr;
}

@property(retain, nonatomic) NSMutableAttributedString *denoStr; // @synthesize denoStr=_denoStr;
@property(retain, nonatomic) NSMutableAttributedString *priceStr; // @synthesize priceStr=_priceStr;
@property(copy, nonatomic) NSString *denomination; // @synthesize denomination=_denomination;
@property(copy, nonatomic) NSString *quota; // @synthesize quota=_quota;
@property(copy, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(copy, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
@property(copy, nonatomic) NSString *act; // @synthesize act=_act;
- (void).cxx_destruct;

@end

