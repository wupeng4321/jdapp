//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class NSMutableArray, NSString, TTTFloorModel;

@interface TTTComposeView : TTTBaseView <TTTBaseViewProtocol>
{
    TTTFloorModel *_floorModel;
    NSMutableArray *_composeSubViews;
}

@property(retain, nonatomic) NSMutableArray *composeSubViews; // @synthesize composeSubViews=_composeSubViews;
@property(retain, nonatomic) TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
- (void).cxx_destruct;
- (struct CGRect)p_getFrameOfComposeViewStyle:(id)arg1 atIndex:(long long)arg2;
- (void)setupThreeComposeViews;
- (void)setupTwoComposeViews;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

