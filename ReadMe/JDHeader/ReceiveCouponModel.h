//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSDictionary, NSString;

@interface ReceiveCouponModel : JDModel
{
    NSString *_e;
    NSString *_desc;
    NSDictionary *_payConfig;
}

@property(retain, nonatomic) NSDictionary *payConfig; // @synthesize payConfig=_payConfig;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *e; // @synthesize e=_e;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
