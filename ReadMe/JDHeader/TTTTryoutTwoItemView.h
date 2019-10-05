//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"
#import "TTTTryoutBigViewDelegate-Protocol.h"

@class NSString, TTTFloorModel;

@interface TTTTryoutTwoItemView : TTTBaseView <TTTTryoutBigViewDelegate, TTTBaseViewProtocol>
{
    TTTFloorModel *_floorModel;
}

@property(nonatomic) __weak TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
- (void).cxx_destruct;
- (id)fetchShopModel:(long long)arg1;
- (struct CGRect)itemViewFrame:(long long)arg1;
- (void)tryoutItemClick:(id)arg1 clickType:(long long)arg2;
- (void)updateBackcolor;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
