//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

#import "PDMasterGraphFloorViewDelegate-Protocol.h"

@class NSString, NewProductModel, PDMasterGraphFloorView, PDShowImgActiveModel;

@interface PDMasterGraphViewModel : PDFloorBaseViewModel <PDMasterGraphFloorViewDelegate>
{
    PDMasterGraphFloorView *_masterGraphFloorView;
    NewProductModel *_model;
    PDShowImgActiveModel *_showImgActive;
}

+ (void)load;
@property(retain, nonatomic) PDShowImgActiveModel *showImgActive; // @synthesize showImgActive=_showImgActive;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PDMasterGraphFloorView *masterGraphFloorView; // @synthesize masterGraphFloorView=_masterGraphFloorView;
- (void).cxx_destruct;
- (void)itemTappedAtIndex:(long long)arg1;
- (void)floorTapped;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (void)expoSpecial;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

