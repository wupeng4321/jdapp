//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface COCheckoutUpdateSelfPickSiteApiModel : NSObject
{
    NSString *_siteId;
    NSString *_customerName;
    NSString *_customerMobile;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *customerMobile; // @synthesize customerMobile=_customerMobile;
@property(copy, nonatomic) NSString *customerName; // @synthesize customerName=_customerName;
@property(copy, nonatomic) NSString *siteId; // @synthesize siteId=_siteId;
- (void).cxx_destruct;

@end

