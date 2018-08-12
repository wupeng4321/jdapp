//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class BigItemDistributionModel, COCheckoutBigItemJsdRM, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface BigItemPromiseModel : JDModel
{
    _Bool _isSelectedJZD;
    _Bool _isSelectedBZD;
    NSString *_bigItemInstallIndex;
    NSArray *_bigItemInstallDatesList;
    NSString *_bigItemJzdInstallIndex;
    NSArray *_bigItemJzdInstallDatesList;
    NSNumber *_bigItemJsdInstallIndex;
    NSArray *_bigItemJsdInstallDatesList;
    BigItemDistributionModel *_bigItemBZDModel;
    BigItemDistributionModel *_bigItemJZDModel;
    COCheckoutBigItemJsdRM *_bigItemJSDModel;
    NSNumber *_bigItemOffset;
    NSMutableArray *_promiseArray;
    NSMutableArray *_titlesOfPromiseArray;
    NSString *_selectedTitle;
    long long _bigItemShipIndex;
    long long _selectedIndexOfPromise;
    NSMutableArray *_promiseTypeArray;
    NSString *_bigInstallDate;
    NSString *_bigInstallValue;
    NSMutableDictionary *_sopBigPromiseForSaveDic;
    NSArray *_tabsMessageArray;
    NSArray *_tabsBubbleImgArray;
}

@property(retain, nonatomic) NSArray *tabsBubbleImgArray; // @synthesize tabsBubbleImgArray=_tabsBubbleImgArray;
@property(retain, nonatomic) NSArray *tabsMessageArray; // @synthesize tabsMessageArray=_tabsMessageArray;
@property(retain, nonatomic) NSMutableDictionary *sopBigPromiseForSaveDic; // @synthesize sopBigPromiseForSaveDic=_sopBigPromiseForSaveDic;
@property(copy, nonatomic) NSString *bigInstallValue; // @synthesize bigInstallValue=_bigInstallValue;
@property(copy, nonatomic) NSString *bigInstallDate; // @synthesize bigInstallDate=_bigInstallDate;
@property(nonatomic) _Bool isSelectedBZD; // @synthesize isSelectedBZD=_isSelectedBZD;
@property(nonatomic) _Bool isSelectedJZD; // @synthesize isSelectedJZD=_isSelectedJZD;
@property(retain, nonatomic) NSMutableArray *promiseTypeArray; // @synthesize promiseTypeArray=_promiseTypeArray;
@property(nonatomic) long long selectedIndexOfPromise; // @synthesize selectedIndexOfPromise=_selectedIndexOfPromise;
@property(nonatomic) long long bigItemShipIndex; // @synthesize bigItemShipIndex=_bigItemShipIndex;
@property(retain, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) NSMutableArray *titlesOfPromiseArray; // @synthesize titlesOfPromiseArray=_titlesOfPromiseArray;
@property(retain, nonatomic) NSMutableArray *promiseArray; // @synthesize promiseArray=_promiseArray;
@property(retain, nonatomic) NSNumber *bigItemOffset; // @synthesize bigItemOffset=_bigItemOffset;
@property(retain, nonatomic) COCheckoutBigItemJsdRM *bigItemJSDModel; // @synthesize bigItemJSDModel=_bigItemJSDModel;
@property(retain, nonatomic) BigItemDistributionModel *bigItemJZDModel; // @synthesize bigItemJZDModel=_bigItemJZDModel;
@property(retain, nonatomic) BigItemDistributionModel *bigItemBZDModel; // @synthesize bigItemBZDModel=_bigItemBZDModel;
@property(retain, nonatomic) NSArray *bigItemJsdInstallDatesList; // @synthesize bigItemJsdInstallDatesList=_bigItemJsdInstallDatesList;
@property(retain, nonatomic) NSNumber *bigItemJsdInstallIndex; // @synthesize bigItemJsdInstallIndex=_bigItemJsdInstallIndex;
@property(retain, nonatomic) NSArray *bigItemJzdInstallDatesList; // @synthesize bigItemJzdInstallDatesList=_bigItemJzdInstallDatesList;
@property(retain, nonatomic) NSString *bigItemJzdInstallIndex; // @synthesize bigItemJzdInstallIndex=_bigItemJzdInstallIndex;
@property(retain, nonatomic) NSArray *bigItemInstallDatesList; // @synthesize bigItemInstallDatesList=_bigItemInstallDatesList;
@property(retain, nonatomic) NSString *bigItemInstallIndex; // @synthesize bigItemInstallIndex=_bigItemInstallIndex;
- (void).cxx_destruct;
- (long long)getBigItemInstallIndexWithType:(long long)arg1 Offset:(long long)arg2;
- (void)setBigSopPromiseForSaveSelectedDay:(long long)arg1 selectedHour:(long long)arg2;
- (id)getSelectedBigInstallTimeValueWithShipIndex:(long long)arg1 isName:(_Bool)arg2;
- (id)getSelectedBigInstallTimeWithShipIndex:(long long)arg1;
- (id)createBigInstallDataWithArr:(id)arg1;
- (void)setTabsMsgMapWithDic:(id)arg1;
- (void)handlePromises;
- (void)setDataWithDic:(id)arg1;

@end
