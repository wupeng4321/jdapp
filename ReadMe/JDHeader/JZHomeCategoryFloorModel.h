//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JZHomeFloorBaseModel.h"

@class JZHomeThemeInfoModel, NSArray;

@interface JZHomeCategoryFloorModel : JZHomeFloorBaseModel
{
    _Bool _needShowThemeView;
    JZHomeThemeInfoModel *_themeInfo;
    NSArray *_skuList;
}

+ (id)objectClassInArray;
@property(nonatomic) _Bool needShowThemeView; // @synthesize needShowThemeView=_needShowThemeView;
@property(retain, nonatomic) NSArray *skuList; // @synthesize skuList=_skuList;
@property(retain, nonatomic) JZHomeThemeInfoModel *themeInfo; // @synthesize themeInfo=_themeInfo;
- (void).cxx_destruct;
- (double)floorHeight;

@end
