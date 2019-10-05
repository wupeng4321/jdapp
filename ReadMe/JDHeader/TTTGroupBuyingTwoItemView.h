//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class NSString, TTTFloorModel;

@interface TTTGroupBuyingTwoItemView : TTTBaseView <TTTBaseViewProtocol>
{
    TTTFloorModel *_floorModel;
    CDUnknownBlockType _click;
}

@property(copy, nonatomic) CDUnknownBlockType click; // @synthesize click=_click;
@property(nonatomic) __weak TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
- (void).cxx_destruct;
- (struct CGRect)itemViewFrame:(long long)arg1;
- (void)updateBackcolor;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
