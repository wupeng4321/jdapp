//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FSFFilterInterface : NSObject
{
    int _inlet;
    NSString *_pageP;
    NSString *_logId;
    NSString *_maidianType;
    NSString *_hcCid3;
    NSString *_keyword;
    NSString *_activityId;
    NSString *_couponId;
    NSString *_backCouponId;
    NSString *_eCardID;
}

@property(nonatomic) int inlet; // @synthesize inlet=_inlet;
@property(copy, nonatomic) NSString *eCardID; // @synthesize eCardID=_eCardID;
@property(copy, nonatomic) NSString *backCouponId; // @synthesize backCouponId=_backCouponId;
@property(copy, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *hcCid3; // @synthesize hcCid3=_hcCid3;
@property(copy, nonatomic) NSString *maidianType; // @synthesize maidianType=_maidianType;
@property(copy, nonatomic) NSString *logId; // @synthesize logId=_logId;
@property(copy, nonatomic) NSString *pageP; // @synthesize pageP=_pageP;
- (void).cxx_destruct;
- (void)mtaExposedGlobalSales;
- (void)mtaExposedNewClothesWithLoaction:(long long)arg1;
- (void)mtaMoreCategoryBtnClick;
- (void)mtaExposedAllCatgoryExpandViewModel:(id)arg1;
- (void)mtaAllCategorySubClick;
- (void)mtaAllOpenClick:(id)arg1;
- (void)mtaAllBrandClick;
- (void)mtaAllCategoryExpandClickWithName:(id)arg1 location:(long long)arg2 selected:(_Bool)arg3;
- (void)mtaExpandClick;
- (id)getNuwaStringWithPriceViewModel:(id)arg1 expandViewModelArray:(id)arg2;
- (void)mtaFilterListConfirmBtnClickWithAddressId:(id)arg1 priceViewModel:(id)arg2 expandViewModelArray:(id)arg3;
- (void)mtaResetBtnClick;
- (void)mtaRequestPrice;
- (void)mtaExposedConfirmBtnClickWithExposedButtonModel:(id)arg1;
- (void)mtaJDServiceExposureWithServiceArray:(id)arg1;
- (void)mtaJDServiceClickWithServiceViewModel:(id)arg1 index:(long long)arg2;
- (_Bool)isSearchList;

@end
