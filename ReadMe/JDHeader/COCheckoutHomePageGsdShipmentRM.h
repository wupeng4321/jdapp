//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class MidSmallPromiseModel, NSNumber, NSString;

@interface COCheckoutHomePageGsdShipmentRM : JDModel
{
    _Bool _isSplitTime;
    _Bool _hasSelectedTime;
    NSNumber *_Id;
    NSString *_name;
    NSString *_descriptionString;
    NSString *_midSmallDate;
    NSString *_midSmallMessage;
    NSString *_bigItemMessage;
    MidSmallPromiseModel *_midSmallPromiseModel;
    NSString *_iconUrl;
}

@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) _Bool hasSelectedTime; // @synthesize hasSelectedTime=_hasSelectedTime;
@property(retain, nonatomic) MidSmallPromiseModel *midSmallPromiseModel; // @synthesize midSmallPromiseModel=_midSmallPromiseModel;
@property(nonatomic) _Bool isSplitTime; // @synthesize isSplitTime=_isSplitTime;
@property(copy, nonatomic) NSString *bigItemMessage; // @synthesize bigItemMessage=_bigItemMessage;
@property(copy, nonatomic) NSString *midSmallMessage; // @synthesize midSmallMessage=_midSmallMessage;
@property(copy, nonatomic) NSString *midSmallDate; // @synthesize midSmallDate=_midSmallDate;
@property(copy, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

