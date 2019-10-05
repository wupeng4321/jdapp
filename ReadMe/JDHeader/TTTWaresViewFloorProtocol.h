//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTTFloorProtocol-Protocol.h"

@class JDStoreNetwork, NSString;

@interface TTTWaresViewFloorProtocol : NSObject <TTTFloorProtocol>
{
    JDStoreNetwork *_netRequest;
}

+ (id)carouselSmallReuseId;
+ (void)setCarouselSmallReuseId:(id)arg1;
+ (id)carousel3LReuseId;
+ (void)setCarousel3LReuseId:(id)arg1;
+ (id)carousel1LLReuseId;
+ (void)setCarousel1LLReuseId:(id)arg1;
+ (id)carousel1LHReuseId;
+ (void)setCarousel1LHReuseId:(id)arg1;
@property(retain, nonatomic) JDStoreNetwork *netRequest; // @synthesize netRequest=_netRequest;
- (void).cxx_destruct;
- (id)subViewNameDict;
- (void)addBaiTiaoData:(id)arg1 toWare:(id)arg2;
- (void)p_endProcessData:(id)arg1 toFloorModel:(id)arg2;
- (id)p_processWaresData:(id)arg1 toFloorData:(id)arg2;
- (void)cellWillAppearRequestFloorData:(id)arg1 tableView:(id)arg2 rowAtIndexPath:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)getRowData:(id)arg1 indexPath:(id)arg2;
- (id)cellReuseIdentifier:(id)arg1 indexPath:(id)arg2;
- (double)cellHeight:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)rowNumInSection:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
