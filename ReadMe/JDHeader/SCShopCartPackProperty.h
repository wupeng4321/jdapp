//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableArray, NSNumber, NSString;

@interface SCShopCartPackProperty : JDModel
{
    NSNumber *_PackId;
    NSString *_PackName;
    NSMutableArray *_ProductList;
    NSString *_buyCount;
    NSString *_productCount;
    NSString *_SourceType;
    NSString *_SourceValue;
}

@property(copy, nonatomic) NSString *SourceValue; // @synthesize SourceValue=_SourceValue;
@property(copy, nonatomic) NSString *SourceType; // @synthesize SourceType=_SourceType;
@property(copy, nonatomic) NSString *productCount; // @synthesize productCount=_productCount;
@property(copy, nonatomic) NSString *buyCount; // @synthesize buyCount=_buyCount;
@property(retain, nonatomic) NSMutableArray *ProductList; // @synthesize ProductList=_ProductList;
@property(copy, nonatomic) NSString *PackName; // @synthesize PackName=_PackName;
@property(retain, nonatomic) NSNumber *PackId; // @synthesize PackId=_PackId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (id)init;

@end

