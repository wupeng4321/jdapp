//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DJXYShopInfo : NSObject
{
    NSString *_logoUrl;
    long long _type;
    NSArray *_skus;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *skus; // @synthesize skus=_skus;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
- (void).cxx_destruct;

@end

