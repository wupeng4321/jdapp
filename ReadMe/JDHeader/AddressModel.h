//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface AddressModel : JDModel
{
    NSString *addressStr_;
    NSString *provinceStr_;
    NSString *cityStr_;
    NSString *areaStr_;
}

@property(retain, nonatomic) NSString *areaStr; // @synthesize areaStr=areaStr_;
@property(retain, nonatomic) NSString *cityStr; // @synthesize cityStr=cityStr_;
@property(retain, nonatomic) NSString *provinceStr; // @synthesize provinceStr=provinceStr_;
@property(retain, nonatomic) NSString *addressStr; // @synthesize addressStr=addressStr_;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

