//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface COCheckoutPreShipmentTypesInfoModel : JDModel
{
    _Bool selected;
    _Bool available;
    NSString *name;
    NSNumber *Id;
    NSString *descriptionStr;
}

@property(copy, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr;
@property(nonatomic) _Bool available; // @synthesize available;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(retain, nonatomic) NSNumber *Id; // @synthesize Id;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
