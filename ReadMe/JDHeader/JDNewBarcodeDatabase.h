//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDDatabase.h"

@interface JDNewBarcodeDatabase : JDDatabase
{
}

- (_Bool)deleteAllBrowseHistory;
- (id)getHistory:(long long)arg1;
- (id)getHistory:(long long)arg1 pageNum:(long long)arg2 ordery:(id)arg3;
- (id)changeTimeFormat:(id)arg1;
- (_Bool)updateItem:(id)arg1;
- (_Bool)getProductByResult:(id)arg1;
- (_Bool)insertScanItem:(id)arg1;
- (void)checkTable;

@end
