//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSFFilterConfig, FSFFilterInterface, FSFilterAddressViewModel, FSFilterExpandViewModel, FSFilterPriceDataViewModel, FSFilterPromotionCategoryViewModel, FSSearchMyCarService, NSArray;

@interface FSFilterDataService : NSObject
{
    FSFFilterConfig *_filterConfig;
    FSFFilterInterface *_filterInterface;
    NSArray *_serviceArray;
    FSFilterAddressViewModel *_addressViewModel;
    FSFilterPriceDataViewModel *_priceViewModel;
    FSFilterPriceDataViewModel *_firstPriceViewModel;
    NSArray *_expandViewModelArray;
    NSArray *_firstExpandViewModelArray;
    NSArray *_exposedBtnModelArray;
    NSArray *_firstExposedBtnModelArray;
    FSFilterExpandViewModel *_allCategoryExpandViewModel;
    FSFilterPromotionCategoryViewModel *_promotionCategoryViewModel;
    NSArray *_deliverAddressViewModelArray;
    FSSearchMyCarService *_idPlusService;
}

@property(retain, nonatomic) FSSearchMyCarService *idPlusService; // @synthesize idPlusService=_idPlusService;
@property(retain, nonatomic) NSArray *deliverAddressViewModelArray; // @synthesize deliverAddressViewModelArray=_deliverAddressViewModelArray;
@property(retain, nonatomic) FSFilterPromotionCategoryViewModel *promotionCategoryViewModel; // @synthesize promotionCategoryViewModel=_promotionCategoryViewModel;
@property(retain, nonatomic) FSFilterExpandViewModel *allCategoryExpandViewModel; // @synthesize allCategoryExpandViewModel=_allCategoryExpandViewModel;
@property(retain, nonatomic) NSArray *firstExposedBtnModelArray; // @synthesize firstExposedBtnModelArray=_firstExposedBtnModelArray;
@property(retain, nonatomic) NSArray *exposedBtnModelArray; // @synthesize exposedBtnModelArray=_exposedBtnModelArray;
@property(retain, nonatomic) NSArray *firstExpandViewModelArray; // @synthesize firstExpandViewModelArray=_firstExpandViewModelArray;
@property(retain, nonatomic) NSArray *expandViewModelArray; // @synthesize expandViewModelArray=_expandViewModelArray;
@property(retain, nonatomic) FSFilterPriceDataViewModel *firstPriceViewModel; // @synthesize firstPriceViewModel=_firstPriceViewModel;
@property(retain, nonatomic) FSFilterPriceDataViewModel *priceViewModel; // @synthesize priceViewModel=_priceViewModel;
@property(retain, nonatomic) FSFilterAddressViewModel *addressViewModel; // @synthesize addressViewModel=_addressViewModel;
@property(retain, nonatomic) NSArray *serviceArray; // @synthesize serviceArray=_serviceArray;
@property(retain, nonatomic) FSFFilterInterface *filterInterface; // @synthesize filterInterface=_filterInterface;
@property(retain, nonatomic) FSFFilterConfig *filterConfig; // @synthesize filterConfig=_filterConfig;
- (void).cxx_destruct;
- (id)getRequestPromationDataDict;
- (id)gennerateExpandAllCategoryDataDicWithModel:(id)arg1;
- (id)gennerateExpandDeliverAddressDataDicWithModel:(id)arg1;
- (id)gennerateSpecialFilterDataDicWithModel:(id)arg1;
- (id)gennerateExpandFilterDataDicWithModel:(id)arg1;
- (id)gennerateExpressionFilterDataDicWithModel:(id)arg1;
- (id)getRequestExpandDict;
- (id)getRequestPromotionAllCategoryDict;
- (id)getRequestPriceDict;
- (id)getRequestServiceDict;
- (id)getCategoryPassExpandDict;
- (id)getPromotionFilterRequestDataDict;
- (id)getCategoryFilterRequestDataDict;
- (id)getSearchFilterRequestDataDict;
- (void)updateFilterExpandDataWithBtnModel:(id)arg1;
- (void)updateServiceDataWithBtnModel:(id)arg1;
- (void)exposedButtonDidClickWithBtnModel:(id)arg1;
- (void)updateExposedExpandData;
- (void)savePriceSeletedData;
- (void)saveServiceSelectedData;
- (void)confirmButtonClick;
- (void)resetExposedNormal;
- (void)resetExposedFilterListContainData;
- (void)resetExposedActivity;
- (void)deselectAllCateogryExpandData;
- (void)resetFilterListPriceAndExpandData;
- (void)resetFilterListAllData;
- (void)clearAllData;
- (void)allCategoryClickUpdateDataWithFilterSearchModel:(id)arg1;
- (void)promotionUpdateDataWithFilterSearchModel:(id)arg1;
- (void)categoryUpdateDataWithFilterCategoryModel:(id)arg1;
- (void)searchUpdateDataWithFilterSearchModel:(id)arg1;
- (void)updateServiceArrayCloseJinKanYouHuoCheckedState:(_Bool)arg1;
- (void)updateServiceArrayWorldBuyCheckedState:(_Bool)arg1;
- (_Bool)isJDDistributionChecked;
- (void)synchronousDataAfterConfig;
- (id)init;

@end

