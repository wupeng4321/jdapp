//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTTFloorProtocol-Protocol.h"

@class NSString;

@interface TTTFlexibleViewFloorProtocol : NSObject <TTTFloorProtocol>
{
}

+ (void)setReuseId_slide:(id)arg1;
+ (id)ReuseId_slide;
+ (void)setReuseId_1R3:(id)arg1;
+ (id)ReuseId_1R3;
+ (void)setReuseId_1R2:(id)arg1;
+ (id)ReuseId_1R2;
+ (void)setReuseId_1R1:(id)arg1;
+ (id)ReuseId_1R1;
- (id)p_getRowData:(id)arg1 indexPath:(id)arg2;
- (double)p_flexibleViewHeight:(id)arg1;
- (unsigned long long)p_waresNumForRow:(id)arg1;
- (unsigned long long)p_waresRows:(id)arg1;
- (id)getRowData:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)rowNumInSection:(id)arg1;
- (double)cellHeight:(id)arg1 indexPath:(id)arg2;
- (id)cellReuseIdentifier:(id)arg1 indexPath:(id)arg2;
- (id)subViewNameDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

