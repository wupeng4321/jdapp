//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class JDShopPromotionTotalModel, NSArray, NSString;

@interface JDShopPromotionModel : JDModel
{
    int _page;
    int _pageSize;
    int _totalCount;
    int _type;
    long long _vendorId;
    NSArray *_wareList;
    long long _promoId;
    JDShopPromotionTotalModel *_totalModel;
    NSArray *_suitList;
    NSString *_standbyText;
}

@property(copy, nonatomic) NSString *standbyText; // @synthesize standbyText=_standbyText;
@property(retain, nonatomic) NSArray *suitList; // @synthesize suitList=_suitList;
@property(retain, nonatomic) JDShopPromotionTotalModel *totalModel; // @synthesize totalModel=_totalModel;
@property(nonatomic) long long promoId; // @synthesize promoId=_promoId;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *wareList; // @synthesize wareList=_wareList;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int page; // @synthesize page=_page;
@property(nonatomic) long long vendorId; // @synthesize vendorId=_vendorId;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

