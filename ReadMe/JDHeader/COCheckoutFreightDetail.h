//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber;

@interface COCheckoutFreightDetail : JDModel
{
    NSNumber *_freightJSD;
    NSNumber *_freightJZD;
    NSNumber *_baseFreightFresh;
    NSNumber *_xuzhongFreightFresh;
    NSNumber *_baseFreightOther;
    NSNumber *_xuzhongFreightOther;
}

@property(retain, nonatomic) NSNumber *xuzhongFreightOther; // @synthesize xuzhongFreightOther=_xuzhongFreightOther;
@property(retain, nonatomic) NSNumber *baseFreightOther; // @synthesize baseFreightOther=_baseFreightOther;
@property(retain, nonatomic) NSNumber *xuzhongFreightFresh; // @synthesize xuzhongFreightFresh=_xuzhongFreightFresh;
@property(retain, nonatomic) NSNumber *baseFreightFresh; // @synthesize baseFreightFresh=_baseFreightFresh;
@property(retain, nonatomic) NSNumber *freightJZD; // @synthesize freightJZD=_freightJZD;
@property(retain, nonatomic) NSNumber *freightJSD; // @synthesize freightJSD=_freightJSD;
- (void).cxx_destruct;

@end

