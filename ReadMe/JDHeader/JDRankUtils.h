//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDRankUtils : NSObject
{
}

+ (id)allCategoryGetCurrentViewController;
+ (_Bool)isvalidrankId:(id)arg1;
+ (void)coverCachebycateList:(id)arg1 rankId:(id)arg2;
+ (id)getRankListName:(id)arg1;
+ (id)pickoutNewSubCate:(id)arg1 cateId:(id)arg2 rankId:(id)arg3;
+ (id)pickoutNewCate:(id)arg1 rankId:(id)arg2;
+ (id)pickoutNewCate:(id)arg1;
+ (_Bool)isABTestNew:(id)arg1 aBTestArray:(id)arg2;
+ (id)getPageId:(int)arg1;
+ (id)getBottomSelectRankName:(int)arg1;
+ (id)getRankName:(int)arg1;
+ (id)getMTARankName:(int)arg1 ifProduct:(_Bool)arg2;
+ (id)getRankSourceName:(int)arg1;
+ (id)transferToRankIdByRankType:(int)arg1;
+ (int)transferToCellTypeByRankId:(id)arg1;

@end
