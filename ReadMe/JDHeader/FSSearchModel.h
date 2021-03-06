//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSAdShopModel, FSBarFilterModel, FSSWordOfMouseTabInfoModel, FSSearchCycleShopModel, FSSearchEggModel, FSSearchMobileShopModel, FSSearchWordInfoModel, NSArray, NSDictionary, NSNumber, NSString;

@interface FSSearchModel : NSObject
{
    _Bool _shopCarousel;
    _Bool _isBookDisc;
    _Bool _isFood;
    _Bool _netContent;
    _Bool _problemFeedback;
    _Bool _hasNextPage;
    int _curPage;
    NSNumber *_wareCount;
    NSString *_logid;
    NSString *_exprid;
    NSString *_adEventId;
    NSString *_showStyleRule;
    NSString *_errorCorrection;
    NSString *_suggestKeyword;
    NSString *_hiddenKeyword;
    NSString *_betterBrandAdvice;
    FSSearchMobileShopModel *_mobileShopInfo;
    FSAdShopModel *_adShop;
    NSString *_isPop;
    NSDictionary *_activity;
    FSSearchCycleShopModel *_multiShops;
    NSArray *_wareInfo;
    NSDictionary *_HotTags;
    NSArray *_tiledFilterTags;
    NSArray *_middleTags;
    NSArray *_beltAdShop;
    NSString *_myHistory;
    NSDictionary *_banner;
    NSDictionary *_newUserEgg;
    NSString *_localNum;
    FSSearchEggModel *_eggsAcitivity;
    NSString *_HcCid3;
    NSString *_promotionListUrl;
    FSSearchWordInfoModel *_wordSearchInfo;
    NSString *_requerySearch;
    NSString *_mtest;
    NSString *_showShopTab;
    NSString *_showArticleTab;
    NSString *_articleTabTitle;
    NSString *_showStoreTab;
    NSString *_storeTabTitle;
    NSDictionary *_attachCategoryAskInfo;
    FSSWordOfMouseTabInfoModel *_showPraiseTab;
    NSString *_oneBoxUrl;
    FSBarFilterModel *_barFilter;
    NSString *_IsSpecialStock;
    NSString *_articleInserted;
    NSString *_specialEffect;
}

@property(copy, nonatomic) NSString *specialEffect; // @synthesize specialEffect=_specialEffect;
@property(copy, nonatomic) NSString *articleInserted; // @synthesize articleInserted=_articleInserted;
@property(copy, nonatomic) NSString *IsSpecialStock; // @synthesize IsSpecialStock=_IsSpecialStock;
@property(retain, nonatomic) FSBarFilterModel *barFilter; // @synthesize barFilter=_barFilter;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) int curPage; // @synthesize curPage=_curPage;
@property(retain, nonatomic) NSString *oneBoxUrl; // @synthesize oneBoxUrl=_oneBoxUrl;
@property(retain, nonatomic) FSSWordOfMouseTabInfoModel *showPraiseTab; // @synthesize showPraiseTab=_showPraiseTab;
@property(retain, nonatomic) NSDictionary *attachCategoryAskInfo; // @synthesize attachCategoryAskInfo=_attachCategoryAskInfo;
@property(copy, nonatomic) NSString *storeTabTitle; // @synthesize storeTabTitle=_storeTabTitle;
@property(copy, nonatomic) NSString *showStoreTab; // @synthesize showStoreTab=_showStoreTab;
@property(copy, nonatomic) NSString *articleTabTitle; // @synthesize articleTabTitle=_articleTabTitle;
@property(copy, nonatomic) NSString *showArticleTab; // @synthesize showArticleTab=_showArticleTab;
@property(copy, nonatomic) NSString *showShopTab; // @synthesize showShopTab=_showShopTab;
@property(copy, nonatomic) NSString *mtest; // @synthesize mtest=_mtest;
@property(copy, nonatomic) NSString *requerySearch; // @synthesize requerySearch=_requerySearch;
@property(retain, nonatomic) FSSearchWordInfoModel *wordSearchInfo; // @synthesize wordSearchInfo=_wordSearchInfo;
@property(copy, nonatomic) NSString *promotionListUrl; // @synthesize promotionListUrl=_promotionListUrl;
@property(copy, nonatomic) NSString *HcCid3; // @synthesize HcCid3=_HcCid3;
@property(retain, nonatomic) FSSearchEggModel *eggsAcitivity; // @synthesize eggsAcitivity=_eggsAcitivity;
@property(copy, nonatomic) NSString *localNum; // @synthesize localNum=_localNum;
@property(retain, nonatomic, getter=theNewUserEgg) NSDictionary *newUserEgg; // @synthesize newUserEgg=_newUserEgg;
@property(retain, nonatomic) NSDictionary *banner; // @synthesize banner=_banner;
@property(nonatomic) _Bool problemFeedback; // @synthesize problemFeedback=_problemFeedback;
@property(copy, nonatomic) NSString *myHistory; // @synthesize myHistory=_myHistory;
@property(retain, nonatomic) NSArray *beltAdShop; // @synthesize beltAdShop=_beltAdShop;
@property(retain, nonatomic) NSArray *middleTags; // @synthesize middleTags=_middleTags;
@property(retain, nonatomic) NSArray *tiledFilterTags; // @synthesize tiledFilterTags=_tiledFilterTags;
@property(retain, nonatomic) NSDictionary *HotTags; // @synthesize HotTags=_HotTags;
@property(nonatomic) _Bool netContent; // @synthesize netContent=_netContent;
@property(nonatomic) _Bool isFood; // @synthesize isFood=_isFood;
@property(nonatomic) _Bool isBookDisc; // @synthesize isBookDisc=_isBookDisc;
@property(retain, nonatomic) NSArray *wareInfo; // @synthesize wareInfo=_wareInfo;
@property(nonatomic) _Bool shopCarousel; // @synthesize shopCarousel=_shopCarousel;
@property(retain, nonatomic) FSSearchCycleShopModel *multiShops; // @synthesize multiShops=_multiShops;
@property(retain, nonatomic) NSDictionary *activity; // @synthesize activity=_activity;
@property(copy, nonatomic) NSString *isPop; // @synthesize isPop=_isPop;
@property(retain, nonatomic) FSAdShopModel *adShop; // @synthesize adShop=_adShop;
@property(retain, nonatomic) FSSearchMobileShopModel *mobileShopInfo; // @synthesize mobileShopInfo=_mobileShopInfo;
@property(copy, nonatomic) NSString *betterBrandAdvice; // @synthesize betterBrandAdvice=_betterBrandAdvice;
@property(copy, nonatomic) NSString *hiddenKeyword; // @synthesize hiddenKeyword=_hiddenKeyword;
@property(copy, nonatomic) NSString *suggestKeyword; // @synthesize suggestKeyword=_suggestKeyword;
@property(copy, nonatomic) NSString *errorCorrection; // @synthesize errorCorrection=_errorCorrection;
@property(copy, nonatomic) NSString *showStyleRule; // @synthesize showStyleRule=_showStyleRule;
@property(copy, nonatomic) NSString *adEventId; // @synthesize adEventId=_adEventId;
@property(copy, nonatomic) NSString *exprid; // @synthesize exprid=_exprid;
@property(copy, nonatomic) NSString *logid; // @synthesize logid=_logid;
@property(retain, nonatomic) NSNumber *wareCount; // @synthesize wareCount=_wareCount;
- (void).cxx_destruct;

@end

