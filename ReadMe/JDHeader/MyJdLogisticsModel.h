//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MyJdLogisticsModel : NSObject
{
    NSString *_orderId;
    NSString *_imageUrl;
    NSString *_stateIcon;
    NSString *_stateInfo;
    NSString *_deliveryInfo;
    NSArray *_labelsInfo;
}

@property(copy, nonatomic) NSArray *labelsInfo; // @synthesize labelsInfo=_labelsInfo;
@property(copy, nonatomic) NSString *deliveryInfo; // @synthesize deliveryInfo=_deliveryInfo;
@property(copy, nonatomic) NSString *stateInfo; // @synthesize stateInfo=_stateInfo;
@property(copy, nonatomic) NSString *stateIcon; // @synthesize stateIcon=_stateIcon;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)initModelFromDictionary:(id)arg1;

@end

