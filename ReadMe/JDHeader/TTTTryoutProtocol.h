//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTTFloorProtocol-Protocol.h"

@class NSString;

@interface TTTTryoutProtocol : NSObject <TTTFloorProtocol>
{
}

+ (void)setListViewReuseId:(id)arg1;
+ (id)listViewReuseId;
+ (void)setBigViewReuseId:(id)arg1;
+ (id)bigViewReuseId;
- (id)subViewNameDict;
- (id)getRowData:(id)arg1 indexPath:(id)arg2;
- (id)cellReuseIdentifier:(id)arg1 indexPath:(id)arg2;
- (double)cellHeight:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)rowNumInSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

