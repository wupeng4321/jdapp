//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class NSMutableArray, NSString, TTTWaresRowModel;

@interface TTTWaresThreeListView : TTTBaseView <TTTBaseViewProtocol>
{
    TTTWaresRowModel *_rowModel;
    NSMutableArray *_wareItems;
}

@property(retain, nonatomic) NSMutableArray *wareItems; // @synthesize wareItems=_wareItems;
@property(retain, nonatomic) TTTWaresRowModel *rowModel; // @synthesize rowModel=_rowModel;
- (void).cxx_destruct;
- (struct CGRect)itemViewFrameIndex:(long long)arg1;
- (void)updateBackcolor;
- (void)bindDataWithViewModel:(id)arg1;
- (void)itemViewClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

