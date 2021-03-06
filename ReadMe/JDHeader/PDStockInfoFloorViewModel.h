//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

#import "PDStockInfoFloorViewProtocol-Protocol.h"

@class NSString, NewProductModel, WareBSKUAddressViewHelper, WareBSKUView;

@interface PDStockInfoFloorViewModel : PDFloorBaseViewModel <PDStockInfoFloorViewProtocol>
{
    _Bool _isClick;
    WareBSKUView *_warebSkuView;
    NewProductModel *_model;
    WareBSKUAddressViewHelper *_addressHelper;
}

+ (void)load;
@property(nonatomic) _Bool isClick; // @synthesize isClick=_isClick;
@property(retain, nonatomic) WareBSKUAddressViewHelper *addressHelper; // @synthesize addressHelper=_addressHelper;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) WareBSKUView *warebSkuView; // @synthesize warebSkuView=_warebSkuView;
- (void).cxx_destruct;
- (void)popAddressViewForOldAddress;
- (id)getAddressString;
- (void)floorTapped:(id)arg1;
- (void)refreshViewForFloorTemplate;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

