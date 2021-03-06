//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

#import "PDBPIconViewDelegate-Protocol.h"

@class NSMutableString, NSString, PDBPIconDisplayView, PDBPIconJxView, PDBPIconModel, PDBPIconNormalView;

@interface PDBPIconFloor : PDFloorBaseViewModel <PDBPIconViewDelegate>
{
    PDBPIconNormalView *_iconView;
    PDBPIconJxView *_iconJingxuanView;
    PDBPIconModel *_model;
    PDBPIconDisplayView *_iconDisplayView;
    NSMutableString *_iconListString;
}

@property(retain, nonatomic) NSMutableString *iconListString; // @synthesize iconListString=_iconListString;
@property(retain, nonatomic) PDBPIconDisplayView *iconDisplayView; // @synthesize iconDisplayView=_iconDisplayView;
@property(retain, nonatomic) PDBPIconModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PDBPIconJxView *iconJingxuanView; // @synthesize iconJingxuanView=_iconJingxuanView;
@property(retain, nonatomic) PDBPIconNormalView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)iconDetailAction;
- (void)floorTapMta;
- (void)getIconListString;
- (void)render;
- (void)resetState;
- (void)refreshViewForFloorTemplate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

