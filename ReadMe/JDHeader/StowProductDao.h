//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDDatabase.h"

@interface StowProductDao : JDDatabase
{
}

- (_Bool)deleteAllStowedIDs;
- (id)getAllStowedIds;
- (_Bool)deleteStowedWareWithStowId:(id)arg1;
- (_Bool)addNewStowWithStowId:(id)arg1;
- (void)insertStowIds:(id)arg1;
- (_Bool)insertNewStowWithStowId:(id)arg1;
- (_Bool)isStowedWithStowId:(id)arg1;
- (void)checkTable;

@end

