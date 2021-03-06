//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSDictionary, NSString;

@interface OrderFloorRuleModel : JDModel
{
    int _flTyp;
    int _sortId;
    int _sltype;
    int _spaceType;
    int _pageLevel;
    NSString *_flTpId;
    NSArray *_fleList;
    NSArray *_scList;
    NSDictionary *_bannerInfo;
    NSString *_venderId;
    NSString *_exPoint;
    NSString *_clickPoint;
    NSString *_exParam;
    NSString *_clickParam;
}

@property(nonatomic) int pageLevel; // @synthesize pageLevel=_pageLevel;
@property(nonatomic) int spaceType; // @synthesize spaceType=_spaceType;
@property(retain, nonatomic) NSString *clickParam; // @synthesize clickParam=_clickParam;
@property(retain, nonatomic) NSString *exParam; // @synthesize exParam=_exParam;
@property(retain, nonatomic) NSString *clickPoint; // @synthesize clickPoint=_clickPoint;
@property(retain, nonatomic) NSString *exPoint; // @synthesize exPoint=_exPoint;
@property(retain, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(retain, nonatomic) NSDictionary *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
@property(retain, nonatomic) NSArray *scList; // @synthesize scList=_scList;
@property(retain, nonatomic) NSArray *fleList; // @synthesize fleList=_fleList;
@property(nonatomic) int sltype; // @synthesize sltype=_sltype;
@property(nonatomic) int sortId; // @synthesize sortId=_sortId;
@property(nonatomic) int flTyp; // @synthesize flTyp=_flTyp;
@property(retain, nonatomic) NSString *flTpId; // @synthesize flTpId=_flTpId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end

