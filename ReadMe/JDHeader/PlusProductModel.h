//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface PlusProductModel : JDModel
{
    NSString *_productSku;
    NSString *_productImg;
    NSString *_plusPrice;
    NSString *_price;
}

@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *plusPrice; // @synthesize plusPrice=_plusPrice;
@property(retain, nonatomic) NSString *productImg; // @synthesize productImg=_productImg;
@property(retain, nonatomic) NSString *productSku; // @synthesize productSku=_productSku;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

