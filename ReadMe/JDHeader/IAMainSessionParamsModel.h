//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IAMainSessionParamsModel : NSObject
{
    NSString *_sku;
    NSString *_orderId;
    NSString *_warePrice;
    NSString *_subscibeState;
    long long _sourceId;
}

+ (id)modelFromDict:(id)arg1;
+ (id)dictFromModel:(id)arg1;
@property(nonatomic) long long sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *subscibeState; // @synthesize subscibeState=_subscibeState;
@property(retain, nonatomic) NSString *warePrice; // @synthesize warePrice=_warePrice;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *sku; // @synthesize sku=_sku;
- (void).cxx_destruct;

@end

