//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JDSXRecommendSectionModel : NSObject
{
    NSString *_shopName;
    NSString *_titleTop;
    NSString *_reasonDesc;
    NSString *_enterShopSourceValue;
    NSArray *_wareInfoList;
}

@property(retain, nonatomic) NSArray *wareInfoList; // @synthesize wareInfoList=_wareInfoList;
@property(retain, nonatomic) NSString *enterShopSourceValue; // @synthesize enterShopSourceValue=_enterShopSourceValue;
@property(retain, nonatomic) NSString *reasonDesc; // @synthesize reasonDesc=_reasonDesc;
@property(retain, nonatomic) NSString *titleTop; // @synthesize titleTop=_titleTop;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
- (void).cxx_destruct;

@end

