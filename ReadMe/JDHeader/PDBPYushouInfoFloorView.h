//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "PDYushouProcessViewDelegate-Protocol.h"

@class NSString, PDBPContainerDataModel, PDBPPingouView, PDBPYushouOneLadderView, PDBPYushouProcessView;

@interface PDBPYushouInfoFloorView : PDFloorBaseView <PDYushouProcessViewDelegate>
{
    PDBPYushouOneLadderView *_oneLadderView;
    PDBPPingouView *_pinGouView;
    PDBPYushouProcessView *_processView;
    PDBPContainerDataModel *_model;
}

@property(retain, nonatomic) PDBPContainerDataModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PDBPYushouProcessView *processView; // @synthesize processView=_processView;
@property(retain, nonatomic) PDBPPingouView *pinGouView; // @synthesize pinGouView=_pinGouView;
@property(retain, nonatomic) PDBPYushouOneLadderView *oneLadderView; // @synthesize oneLadderView=_oneLadderView;
- (void).cxx_destruct;
- (void)processViewTappedMTA;
- (void)processViewTapped;
- (void)renderUIWithData:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

