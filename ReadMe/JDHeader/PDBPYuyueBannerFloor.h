//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

@class PDBPYuyueBannerFloorView, PDBPYuyueModel;

@interface PDBPYuyueBannerFloor : PDFloorBaseViewModel
{
    PDBPYuyueBannerFloorView *_yuyueFloorView;
    PDBPYuyueModel *_model;
}

@property(retain, nonatomic) PDBPYuyueModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PDBPYuyueBannerFloorView *yuyueFloorView; // @synthesize yuyueFloorView=_yuyueFloorView;
- (void).cxx_destruct;
- (void)updateWithTime:(double)arg1;
- (void)render;
- (void)refreshViewForFloorTemplate;
- (void)resetState;

@end

