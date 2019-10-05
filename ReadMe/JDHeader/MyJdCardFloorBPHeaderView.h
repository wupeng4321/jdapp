//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyJdCardFloorHeaderView.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "MyJdCardFloorHeaderViewDelegate-Protocol.h"
#import "MyJdFloorManagerViewDelegate-Protocol.h"

@class JDStoreNetwork, MyJdBaseFloor, MyJdCardFloorBubbleBusinessManager, MyJdCardHeaderModel, MyJdCardMTAInfo, NSString;

@interface MyJdCardFloorBPHeaderView : MyJdCardFloorHeaderView <MyJdCardFloorHeaderViewDelegate, MyJdFloorManagerViewDelegate, JDBaseToastViewDelegate>
{
    MyJdCardHeaderModel *_headerModel;
    MyJdCardMTAInfo *_mtaInfo;
    MyJdCardFloorBubbleBusinessManager *_bubbleBusinessManager;
    JDStoreNetwork *_network;
    MyJdBaseFloor *_floor;
}

@property(nonatomic) __weak MyJdBaseFloor *floor; // @synthesize floor=_floor;
@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) MyJdCardFloorBubbleBusinessManager *bubbleBusinessManager; // @synthesize bubbleBusinessManager=_bubbleBusinessManager;
@property(retain, nonatomic) MyJdCardMTAInfo *mtaInfo; // @synthesize mtaInfo=_mtaInfo;
@property(retain, nonatomic) MyJdCardHeaderModel *headerModel; // @synthesize headerModel=_headerModel;
- (void).cxx_destruct;
- (void)closeFloorRequest;
- (void)removeFloorPermanent;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)floorManagerView:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (void)headerView:(id)arg1 clickCloseButton:(id)arg2;
- (id)cardFloorState;
- (void)updateHeaderModel:(id)arg1 mtaInfo:(id)arg2 bubbleManager:(id)arg3 floor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
