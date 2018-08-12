//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTTFloorProtocol-Protocol.h"

@class JDStoreNetwork, NSIndexPath, NSString;

@interface TTTFlowInputFloorProtocol : NSObject <TTTFloorProtocol>
{
    JDStoreNetwork *_netRequest;
    NSIndexPath *_indexPath;
    double _tableviewFrameChange;
}

@property(nonatomic) double tableviewFrameChange; // @synthesize tableviewFrameChange=_tableviewFrameChange;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) JDStoreNetwork *netRequest; // @synthesize netRequest=_netRequest;
- (void).cxx_destruct;
- (void)refresh:(id)arg1;
- (void)goToJump:(id)arg1 floorData:(id)arg2 tableView:(id)arg3;
- (id)jumpTypeThree;
- (id)jumpTypeTwo;
- (id)jumpTypeOne;
- (id)getRowData:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)rowNumInSection:(id)arg1;
- (double)cellHeight:(id)arg1 indexPath:(id)arg2;
- (id)cellReuseIdentifier:(id)arg1 indexPath:(id)arg2;
- (id)subViewName;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

