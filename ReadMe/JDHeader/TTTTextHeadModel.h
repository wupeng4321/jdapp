//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSArray, TTTFloorModel, TTTTabConfigModel;

@interface TTTTextHeadModel : TTTBaseModel
{
    long long _headType;
    TTTFloorModel *_floatFloormodel;
    NSArray *_tabList;
    TTTTabConfigModel *_tabConfig;
    NSArray *_topArrays;
}

@property(retain, nonatomic) NSArray *topArrays; // @synthesize topArrays=_topArrays;
@property(retain, nonatomic) TTTTabConfigModel *tabConfig; // @synthesize tabConfig=_tabConfig;
@property(retain, nonatomic) NSArray *tabList; // @synthesize tabList=_tabList;
@property(retain, nonatomic) TTTFloorModel *floatFloormodel; // @synthesize floatFloormodel=_floatFloormodel;
@property(nonatomic) long long headType; // @synthesize headType=_headType;
- (void).cxx_destruct;
- (void)updateTabIndex:(long long)arg1;
- (void)tapedSelfIndex:(unsigned long long)arg1;
- (void)tapedIndex:(unsigned long long)arg1 isSectionHeader:(_Bool)arg2;
- (void)tapedIndex:(unsigned long long)arg1;
- (id)initWithFloatModel:(id)arg1;
- (id)initWithTabList:(id)arg1 config:(id)arg2;

@end

