//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommuneBaseDao.h"

@class CommuneStoreNetWork;

@interface CommuneCategoryListDao : CommuneBaseDao
{
    CommuneStoreNetWork *_categoryList;
    CommuneStoreNetWork *_categoryRecommendList;
}

- (void).cxx_destruct;
- (void)getCategoryRecommendListResponseUsingBlock:(CDUnknownBlockType)arg1;
- (void)getCategoryQuestionList:(id)arg1 Page:(id)arg2 PageSize:(id)arg3 offSet:(id)arg4 cidType:(id)arg5 responseUsingBlock:(CDUnknownBlockType)arg6;
- (void)dealloc;

@end

