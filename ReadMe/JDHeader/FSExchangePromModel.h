//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSSearchProdcutModel, NSString;

@interface FSExchangePromModel : NSObject
{
    _Bool _isStockout;
    FSSearchProdcutModel *_productModel;
    NSString *_productCode;
    NSString *_imageURL;
    NSString *_productName;
    NSString *_fsNoPriceMsg;
    NSString *_jdPrice;
    NSString *_excPrice;
}

@property(copy, nonatomic) NSString *excPrice; // @synthesize excPrice=_excPrice;
@property(copy, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
@property(copy, nonatomic) NSString *fsNoPriceMsg; // @synthesize fsNoPriceMsg=_fsNoPriceMsg;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) _Bool isStockout; // @synthesize isStockout=_isStockout;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(retain, nonatomic) FSSearchProdcutModel *productModel; // @synthesize productModel=_productModel;
- (void).cxx_destruct;

@end

