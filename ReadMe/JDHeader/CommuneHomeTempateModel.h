//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface CommuneHomeTempateModel : JDModel
{
    NSNumber *_isTopLine;
    NSNumber *_isCenterLine;
    NSNumber *_isBottomLine;
    id _content;
    NSString *_floorIntro;
    NSNumber *_templateType;
    NSDictionary *_param;
    NSString *_functionId;
    NSString *_sourceValue;
    id _userInfo;
    NSMutableArray *_allButtonItems;
    id _appCenterItem;
    NSNumber *_badgeNumber;
    double _itemViewHeight;
    NSArray *_itemViews;
    NSString *_abTest;
    NSNumber *_type;
    NSString *_moreUrl;
    NSString *_subStyle;
    NSNumber *_imgTime;
    NSNumber *_imgNum;
    NSNumber *_ynShare;
    NSString *_md5Id;
    NSDate *_saveTime;
    NSString *_goodShopSource;
}

@property(copy, nonatomic) NSString *goodShopSource; // @synthesize goodShopSource=_goodShopSource;
@property(retain, nonatomic) NSDate *saveTime; // @synthesize saveTime=_saveTime;
@property(copy, nonatomic) NSString *md5Id; // @synthesize md5Id=_md5Id;
@property(retain, nonatomic) NSNumber *ynShare; // @synthesize ynShare=_ynShare;
@property(retain, nonatomic) NSNumber *imgNum; // @synthesize imgNum=_imgNum;
@property(retain, nonatomic) NSNumber *imgTime; // @synthesize imgTime=_imgTime;
@property(copy, nonatomic) NSString *subStyle; // @synthesize subStyle=_subStyle;
@property(copy, nonatomic) NSString *moreUrl; // @synthesize moreUrl=_moreUrl;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *abTest; // @synthesize abTest=_abTest;
@property(readonly, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(readonly, nonatomic) double itemViewHeight; // @synthesize itemViewHeight=_itemViewHeight;
@property(retain, nonatomic) NSNumber *badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(retain, nonatomic) id appCenterItem; // @synthesize appCenterItem=_appCenterItem;
@property(retain, nonatomic) NSMutableArray *allButtonItems; // @synthesize allButtonItems=_allButtonItems;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(copy, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
@property(copy, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(copy, nonatomic) NSNumber *templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *floorIntro; // @synthesize floorIntro=_floorIntro;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *isBottomLine; // @synthesize isBottomLine=_isBottomLine;
@property(retain, nonatomic) NSNumber *isCenterLine; // @synthesize isCenterLine=_isCenterLine;
@property(retain, nonatomic) NSNumber *isTopLine; // @synthesize isTopLine=_isTopLine;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

