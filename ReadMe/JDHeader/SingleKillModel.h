//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class NSArray, NSNumber, NSString, SSSCategoryModel, SSSFloatViewModel, SSSHistoryModel, SSSSingleKillLiangfanModel, SecKillStyleAndShareModel, SingleKillSpikeGoodsModel, SingleKillXViewModel, SingleNewAccountModel;

@interface SingleKillModel : SecKillBaseModel
{
    _Bool _isFirstTab;
    _Bool _isLoadingHistory;
    _Bool _isLoadedHistory;
    _Bool _isAddedHistoryToView;
    _Bool _isPulledAddedHistoryView;
    _Bool _isChangeSkin;
    _Bool _isShowGlobalView;
    NSString *_toastMsg;
    NSString *_gid;
    NSString *_code;
    NSArray *_groups;
    NSArray *_brandList;
    NSArray *_nBrandList;
    NSArray *_miaoShaList;
    NSArray *_plusGoodsList;
    SingleKillSpikeGoodsModel *_spikeGoodsModel;
    NSArray *_lightningBuy;
    NSArray *_bannerList;
    NSArray *_listArray;
    NSArray *_currentArray;
    NSArray *_tuanFloor;
    SSSSingleKillLiangfanModel *_discount;
    NSString *_url;
    NSString *_message;
    NSString *_operateImg;
    NSString *_jumpUrl;
    NSString *_operateWord;
    SingleNewAccountModel *_account;
    SecKillStyleAndShareModel *_detail;
    SSSFloatViewModel *_floatViewModel;
    SingleKillXViewModel *_singleXViewModel;
    SSSCategoryModel *_cateModel;
    SSSHistoryModel *_historyModel;
    NSString *_sourceValue;
    long long _scrollToIndex;
    NSString *_counterABtest;
    NSNumber *_miaoShaAdvance;
}

+ (id)replacedKeyFromPropertyName;
+ (id)objectClassInArray;
@property(copy, nonatomic) NSNumber *miaoShaAdvance; // @synthesize miaoShaAdvance=_miaoShaAdvance;
@property(nonatomic) _Bool isShowGlobalView; // @synthesize isShowGlobalView=_isShowGlobalView;
@property(copy, nonatomic) NSString *counterABtest; // @synthesize counterABtest=_counterABtest;
@property(nonatomic) long long scrollToIndex; // @synthesize scrollToIndex=_scrollToIndex;
@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(retain, nonatomic) SSSHistoryModel *historyModel; // @synthesize historyModel=_historyModel;
@property(retain, nonatomic) SSSCategoryModel *cateModel; // @synthesize cateModel=_cateModel;
@property(nonatomic) _Bool isChangeSkin; // @synthesize isChangeSkin=_isChangeSkin;
@property(nonatomic) _Bool isPulledAddedHistoryView; // @synthesize isPulledAddedHistoryView=_isPulledAddedHistoryView;
@property(nonatomic) _Bool isAddedHistoryToView; // @synthesize isAddedHistoryToView=_isAddedHistoryToView;
@property(nonatomic) _Bool isLoadedHistory; // @synthesize isLoadedHistory=_isLoadedHistory;
@property(nonatomic) _Bool isLoadingHistory; // @synthesize isLoadingHistory=_isLoadingHistory;
@property(nonatomic) _Bool isFirstTab; // @synthesize isFirstTab=_isFirstTab;
@property(retain, nonatomic) SingleKillXViewModel *singleXViewModel; // @synthesize singleXViewModel=_singleXViewModel;
@property(retain, nonatomic) SSSFloatViewModel *floatViewModel; // @synthesize floatViewModel=_floatViewModel;
@property(retain, nonatomic) SecKillStyleAndShareModel *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) SingleNewAccountModel *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *operateWord; // @synthesize operateWord=_operateWord;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *operateImg; // @synthesize operateImg=_operateImg;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) SSSSingleKillLiangfanModel *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSArray *tuanFloor; // @synthesize tuanFloor=_tuanFloor;
@property(retain, nonatomic) NSArray *currentArray; // @synthesize currentArray=_currentArray;
@property(retain, nonatomic) NSArray *listArray; // @synthesize listArray=_listArray;
@property(retain, nonatomic) NSArray *bannerList; // @synthesize bannerList=_bannerList;
@property(retain, nonatomic) NSArray *lightningBuy; // @synthesize lightningBuy=_lightningBuy;
@property(retain, nonatomic) SingleKillSpikeGoodsModel *spikeGoodsModel; // @synthesize spikeGoodsModel=_spikeGoodsModel;
@property(retain, nonatomic) NSArray *plusGoodsList; // @synthesize plusGoodsList=_plusGoodsList;
@property(retain, nonatomic) NSArray *miaoShaList; // @synthesize miaoShaList=_miaoShaList;
@property(retain, nonatomic) NSArray *nBrandList; // @synthesize nBrandList=_nBrandList;
@property(retain, nonatomic) NSArray *brandList; // @synthesize brandList=_brandList;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *gid; // @synthesize gid=_gid;
@property(copy, nonatomic) NSString *toastMsg; // @synthesize toastMsg=_toastMsg;
- (void).cxx_destruct;
- (void)addHistoryData;
- (void)addPullUpReminder;
- (void)addCategoryData;
- (double)computerJumpHeight:(id)arg1 tableHeaderHeight:(double)arg2 singleKillViewHeight:(double)arg3 brandKillViewHeight:(double)arg4 newbrandKillViewHeight:(double)arg5 lightningBuyViewHeight:(double)arg6 bannerFloorHeight:(double)arg7 groupBuyingViewHeight:(double)arg8 superGroupShoppingHeight:(double)arg9;
- (id)coverListArray;
- (void)keyValuesDidFinishConvertingToObject;

@end
