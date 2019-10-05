//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPBaseModel.h"

@class NSArray, SHVPActivityModel, SHVPLiveShopModel;

@interface SHVPLiveCartDetailModel : SHVPBaseModel
{
    long long _status;
    SHVPLiveShopModel *_shop;
    SHVPActivityModel *_activity;
    NSArray *_skuList;
    long long _code;
}

@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSArray *skuList; // @synthesize skuList=_skuList;
@property(retain, nonatomic) SHVPActivityModel *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) SHVPLiveShopModel *shop; // @synthesize shop=_shop;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end
