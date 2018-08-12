//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyJdBaseFloor.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "MyJdCardFloorFooterDelegate-Protocol.h"
#import "MyJdCardFloorHeaderViewDelegate-Protocol.h"
#import "MyJdFloorManagerViewDelegate-Protocol.h"

@class JDStoreNetwork, MyJdCardFloorBubbleBusinessManager, MyJdCardFloorFooterView, MyJdCardFloorHeaderView, MyJdFinanceCardModel, MyJdHomeModel, NSArray, NSString;

@interface MyJdFinanceCardFloor : MyJdBaseFloor <MyJdFloorManagerViewDelegate, JDBaseToastViewDelegate, MyJdCardFloorFooterDelegate, MyJdCardFloorHeaderViewDelegate>
{
    MyJdHomeModel *_configModel;
    MyJdFinanceCardModel *_businessModel;
    NSArray *_cellPresenters;
    JDStoreNetwork *_network;
    MyJdCardFloorBubbleBusinessManager *_bubbleBusinessManager;
    MyJdCardFloorFooterView *_footerView;
    MyJdCardFloorHeaderView *_headerView;
}

+ (void)load;
@property(retain, nonatomic) MyJdCardFloorHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MyJdCardFloorFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MyJdCardFloorBubbleBusinessManager *bubbleBusinessManager; // @synthesize bubbleBusinessManager=_bubbleBusinessManager;
@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) NSArray *cellPresenters; // @synthesize cellPresenters=_cellPresenters;
@property(retain, nonatomic) MyJdFinanceCardModel *businessModel; // @synthesize businessModel=_businessModel;
@property(retain, nonatomic) MyJdHomeModel *configModel; // @synthesize configModel=_configModel;
- (void).cxx_destruct;
- (void)handleMoreButtonClickEvent:(id)arg1;
- (id)moreButtonTitle;
- (void)closeFloorRequest;
- (void)removeFloorPermanent;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)floorManagerView:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (void)headerView:(id)arg1 clickCloseButton:(id)arg2;
- (void)cleanup;
- (void)myjd_resetExpoStates;
- (double)myjd_heightForFooter;
- (id)myjd_viewForFooter;
- (double)myjd_heightForHeader;
- (id)myjd_viewForHeader;
- (long long)myjd_numberOfRows;
- (void)myjd_updateData:(id)arg1 forKey:(id)arg2;
- (void)myjd_expoSpecialForRows:(id)arg1;
- (void)handleCellClickEventAtRow:(long long)arg1;
- (void)myjd_didClickViewForRow:(long long)arg1;
- (id)myjd_renderViewForRow:(long long)arg1 reusingView:(id)arg2;
- (id)myjd_reuseIdentifierForRow:(long long)arg1;
- (double)myjd_heightForRow:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

