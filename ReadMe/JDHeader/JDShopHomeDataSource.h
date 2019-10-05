//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDActivityForSearchUnitViewDelegate-Protocol.h"
#import "JDShopDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol FlashProductViewDelegate, JDNativeShopTempDelegate><JDNJAdViewDelegate><JDShopDelegate><TemplateReactViewDelegate;

@interface JDShopHomeDataSource : NSObject <UITableViewDataSource, JDShopDelegate, JDActivityForSearchUnitViewDelegate>
{
    long long onceForAllProduct;
    int allWareConfig;
    NSMutableArray *m_shopFloorArray;
    NSString *shopId;
    id <JDNativeShopTempDelegate><JDNJAdViewDelegate><JDShopDelegate><TemplateReactViewDelegate> shopDelegate;
    id <FlashProductViewDelegate> flashDelegate;
    NSMutableArray *m_resultArray;
    NSDictionary *_shopDic;
    NSString *_shopNameTestId;
    NSMutableDictionary *_shopFlashModelDic;
    NSString *_flt;
    NSString *_venderId;
}

@property(retain, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(retain, nonatomic) NSString *flt; // @synthesize flt=_flt;
@property(retain, nonatomic) NSMutableDictionary *shopFlashModelDic; // @synthesize shopFlashModelDic=_shopFlashModelDic;
@property(retain, nonatomic) NSString *shopNameTestId; // @synthesize shopNameTestId=_shopNameTestId;
@property(retain, nonatomic) NSDictionary *shopDic; // @synthesize shopDic=_shopDic;
@property(retain, nonatomic) NSMutableArray *m_resultArray; // @synthesize m_resultArray;
@property(nonatomic) int allWareConfig; // @synthesize allWareConfig;
@property(nonatomic) id <FlashProductViewDelegate> flashDelegate; // @synthesize flashDelegate;
@property(nonatomic) id <JDNativeShopTempDelegate><JDNJAdViewDelegate><JDShopDelegate><TemplateReactViewDelegate> shopDelegate; // @synthesize shopDelegate;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId;
@property(retain, nonatomic) NSMutableArray *m_shopFloorArray; // @synthesize m_shopFloorArray;
- (_Bool)isAddHeightWithDic:(id)arg1;
- (void)turnToWareDetailView:(id)arg1 productType:(id)arg2;
- (void)setCornerRadiusWith:(id)arg1 indexRow:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
