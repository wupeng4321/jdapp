//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDDatabase.h"

@interface PageTrackDatabase : JDDatabase
{
}

- (id)findBySKU:(id)arg1;
- (_Bool)isExistWithSKU:(id)arg1;
- (_Bool)updateItem:(id)arg1;
- (void)addColumn;
- (_Bool)deleteAll;
- (_Bool)deleteItemWithSKU:(id)arg1;
- (id)itemWithSKU:(id)arg1;
- (_Bool)addItem:(id)arg1;
- (void)checkTable;

@end

