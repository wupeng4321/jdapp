//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface AMBrandModel : JDModel
{
    NSString *_brand;
    NSString *_brand_name;
    NSString *_brand_ename;
    NSString *_brand_code;
}

@property(copy, nonatomic) NSString *brand_code; // @synthesize brand_code=_brand_code;
@property(copy, nonatomic) NSString *brand_ename; // @synthesize brand_ename=_brand_ename;
@property(copy, nonatomic) NSString *brand_name; // @synthesize brand_name=_brand_name;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
