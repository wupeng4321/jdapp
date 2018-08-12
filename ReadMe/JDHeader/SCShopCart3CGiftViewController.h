//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "SCShopCart3CGiftPoolCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCShopCartMainFlowDataAccess, SCShopCartSkuModel, UITableView;

@interface SCShopCart3CGiftViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, SCShopCart3CGiftPoolCellDelegate>
{
    SCShopCartSkuModel *_skuModel;
    NSString *_suitId;
    unsigned long long _sourceVC;
    CDUnknownBlockType _confirmBlock;
    UITableView *_tableView;
    NSArray *_giftDuplicate;
    SCShopCartMainFlowDataAccess *_dataAccess;
}

@property(retain, nonatomic) SCShopCartMainFlowDataAccess *dataAccess; // @synthesize dataAccess=_dataAccess;
@property(retain, nonatomic) NSArray *giftDuplicate; // @synthesize giftDuplicate=_giftDuplicate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(nonatomic) unsigned long long sourceVC; // @synthesize sourceVC=_sourceVC;
@property(copy, nonatomic) NSString *suitId; // @synthesize suitId=_suitId;
@property(retain, nonatomic) SCShopCartSkuModel *skuModel; // @synthesize skuModel=_skuModel;
- (void).cxx_destruct;
- (void)checkBoxSelectedWithSku:(id)arg1 andCell:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getPageParams;
- (id)getGiftArray;
- (void)setGiftModel:(id)arg1;
- (void)pvSubmitWithSuccess:(_Bool)arg1;
- (void)submit;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

