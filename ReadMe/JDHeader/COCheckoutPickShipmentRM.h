//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSNumber, NSString;

@interface COCheckoutPickShipmentRM : JDModel
{
    _Bool _isHidePickSite;
    NSNumber *_pickId;
    NSString *_pickName;
    NSString *_codDate;
    NSArray *_pickDates;
    NSString *_promise211;
}

@property(nonatomic) _Bool isHidePickSite; // @synthesize isHidePickSite=_isHidePickSite;
@property(copy, nonatomic) NSString *promise211; // @synthesize promise211=_promise211;
@property(retain, nonatomic) NSArray *pickDates; // @synthesize pickDates=_pickDates;
@property(copy, nonatomic) NSString *codDate; // @synthesize codDate=_codDate;
@property(copy, nonatomic) NSString *pickName; // @synthesize pickName=_pickName;
@property(retain, nonatomic) NSNumber *pickId; // @synthesize pickId=_pickId;
- (void).cxx_destruct;
- (void)updatePromise211:(id)arg1;
- (void)updatePickDates:(id)arg1;
- (void)updatePickName:(id)arg1;
- (void)updatePickId:(id)arg1;
- (void)updateCodDate:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end

