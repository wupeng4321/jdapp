//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSDictionary, NSMutableArray, OrderDetailInfoModel, OrderFloorRuleModel;

@interface OrderTemplateBaseModel : JDModel
{
    _Bool _isCardStyleAvailable;
    OrderDetailInfoModel *_businessModel;
    NSDictionary *_busiData;
    NSDictionary *_orderInfo;
    NSDictionary *_flList;
    OrderFloorRuleModel *_ruleModel;
    NSMutableArray *_wareList;
    NSDictionary *_shopInfoMap;
}

@property(nonatomic) _Bool isCardStyleAvailable; // @synthesize isCardStyleAvailable=_isCardStyleAvailable;
@property(retain, nonatomic) NSDictionary *shopInfoMap; // @synthesize shopInfoMap=_shopInfoMap;
@property(retain, nonatomic) NSMutableArray *wareList; // @synthesize wareList=_wareList;
@property(retain, nonatomic) OrderFloorRuleModel *ruleModel; // @synthesize ruleModel=_ruleModel;
@property(retain, nonatomic) NSDictionary *flList; // @synthesize flList=_flList;
@property(retain, nonatomic) NSDictionary *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(retain, nonatomic) NSDictionary *busiData; // @synthesize busiData=_busiData;
@property(retain, nonatomic) OrderDetailInfoModel *businessModel; // @synthesize businessModel=_businessModel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getDataDicFromShopInfoMap;
- (void)setData;

@end

