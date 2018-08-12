//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDAddressViewDataSource-Protocol.h"
#import "JDAddressViewDelegate-Protocol.h"
#import "JDCommonAddressViewDataSource-Protocol.h"
#import "JDCommonAddressViewDelegate-Protocol.h"

@class JDAddressView, JDStoreNetwork, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NewProductModel, PDCaptchaServiceComponent;

@interface WareBSKUAddressViewHelper : NSObject <JDAddressViewDelegate, JDAddressViewDataSource, JDCommonAddressViewDataSource, JDCommonAddressViewDelegate>
{
    _Bool _popForOldAddress;
    NSMutableDictionary *location_;
    NewProductModel *_model;
    long long _tab;
    NSMutableDictionary *_locations;
    NSMutableDictionary *_params;
    JDStoreNetwork *_stockDao;
    PDCaptchaServiceComponent *_captchaService;
    NSMutableArray *_addressArray;
    JDAddressView *_addressView;
    NSDictionary *_commonAddressDict;
    NSString *_action;
    long long _commonSelectRow;
    NSMutableDictionary *_indexesAddress;
}

@property(retain, nonatomic) NSMutableDictionary *indexesAddress; // @synthesize indexesAddress=_indexesAddress;
@property(nonatomic) _Bool popForOldAddress; // @synthesize popForOldAddress=_popForOldAddress;
@property(nonatomic) long long commonSelectRow; // @synthesize commonSelectRow=_commonSelectRow;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSDictionary *commonAddressDict; // @synthesize commonAddressDict=_commonAddressDict;
@property(retain, nonatomic) JDAddressView *addressView; // @synthesize addressView=_addressView;
@property(retain, nonatomic) NSMutableArray *addressArray; // @synthesize addressArray=_addressArray;
@property(retain, nonatomic) PDCaptchaServiceComponent *captchaService; // @synthesize captchaService=_captchaService;
@property(retain, nonatomic) JDStoreNetwork *stockDao; // @synthesize stockDao=_stockDao;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableDictionary *locations; // @synthesize locations=_locations;
@property(nonatomic) long long tab; // @synthesize tab=_tab;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableDictionary *location; // @synthesize location=location_;
- (void).cxx_destruct;
- (void)didFinishCommonAddressView:(id)arg1 andWithRow:(long long)arg2;
- (void)commonAddressView:(id)arg1 didClickBottomButton:(id)arg2;
- (void)commonAddressView:(id)arg1 didSelectRow:(long long)arg2;
- (id)commonAddressView:(id)arg1 titleForRow:(long long)arg2;
- (double)commonAddressView:(id)arg1 heightForRow:(long long)arg2;
- (long long)numberOfRowsInCommonAddressView:(id)arg1;
- (void)addressView:(id)arg1 didClickLeftButton:(id)arg2;
- (void)addressView:(id)arg1 didClickRightButton:(id)arg2;
- (void)addressView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 inTab:(long long)arg3;
- (id)sectionIndexTitlesForTab:(long long)arg1;
- (id)addressView:(id)arg1 titleForRowAtIndexPath:(id)arg2 inTab:(long long)arg3;
- (id)addressView:(id)arg1 inTab:(long long)arg2 titleForHeaderInSection:(long long)arg3;
- (long long)addressView:(id)arg1 numberOfRowsInSection:(long long)arg2 inTab:(long long)arg3;
- (long long)addressView:(id)arg1 numberOfSectionsInTab:(long long)arg2;
- (_Bool)isSectionIndexWithDict:(id)arg1;
- (void)creatAddressView;
- (_Bool)checkoutData:(id)arg1 indexs:(id)arg2;
- (void)didFinishPickingAddress:(id)arg1;
- (void)didFinishResponse:(id)arg1 requestSetup:(id)arg2 components:(id)arg3 msg:(id)arg4 withSectionIndex:(_Bool)arg5;
- (void)fetchAddressWithParams:(id)arg1 withSectionIndex:(_Bool)arg2;
- (void)fetchAddressWithParamsByStockAction;
- (id)getAddressString;
- (void)popAddressViewForOldAddress;
- (_Bool)isDiaoyuIslandsDiction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

