//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMRenderModel.h"

@class NSString;

@interface AMBlusherModel : AMRenderModel
{
    long long _saturation;
    long long _glossiness;
    long long _pearliness;
    NSString *_name;
    NSString *_colorValue;
    NSString *_sku;
}

@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(copy, nonatomic) NSString *colorValue; // @synthesize colorValue=_colorValue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long pearliness; // @synthesize pearliness=_pearliness;
@property(nonatomic) long long glossiness; // @synthesize glossiness=_glossiness;
@property(nonatomic) long long saturation; // @synthesize saturation=_saturation;
- (void).cxx_destruct;
- (id)amGetProductName;
- (void)setDataWithDic:(id)arg1;

@end

