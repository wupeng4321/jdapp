//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

@class PDBStockAccessoriesFloorView;

@interface PDBStockAccessoriesFloor : PDFloorBaseViewModel
{
    PDBStockAccessoriesFloorView *_accessories_common;
}

@property(retain, nonatomic) PDBStockAccessoriesFloorView *accessories_common; // @synthesize accessories_common=_accessories_common;
- (void).cxx_destruct;
- (void)render;
- (void)refreshViewForFloorTemplate;
- (void)resetState;

@end
