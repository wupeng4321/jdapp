//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

@class PDBPGroupBuyFloorView, PDBPGroupBuyModel;

@interface PDBPGropBuyFloor : PDFloorBaseViewModel
{
    PDBPGroupBuyModel *_groupBuymodel;
    PDBPGroupBuyFloorView *_groupBuyView;
}

@property(retain, nonatomic) PDBPGroupBuyFloorView *groupBuyView; // @synthesize groupBuyView=_groupBuyView;
@property(retain, nonatomic) PDBPGroupBuyModel *groupBuymodel; // @synthesize groupBuymodel=_groupBuymodel;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)render;
- (void)resetState;
- (void)expoSpecial;

@end

