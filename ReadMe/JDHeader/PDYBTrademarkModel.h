//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PDYBTrademarkModel : NSObject
{
    NSString *_imgurl;
    NSNumber *_productId;
    NSString *_sortName;
    NSArray *_products;
    NSString *_serUrl;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *serUrl; // @synthesize serUrl=_serUrl;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(copy, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
@property(retain, nonatomic) NSNumber *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *imgurl; // @synthesize imgurl=_imgurl;
- (void).cxx_destruct;

@end

