//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBaseViewModel.h"

#import "JDRiskVerifyDelegate-Protocol.h"

@class BJSearchCouponModel, CCCouponJumpOrReceiveManager, JDRiskVerificationManager, NSMutableArray, NSString;

@interface CCSearchHistoryListViewModel : CCBaseViewModel <JDRiskVerifyDelegate>
{
    long long currentPage;
    _Bool rvcFlag;
    NSString *_searchKey;
    BJSearchCouponModel *_receivedModel;
    NSMutableArray *_searchCouponItems;
    JDRiskVerificationManager *_riskVerificationManger;
    CCCouponJumpOrReceiveManager *_receiveManager;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _successBlock;
}

@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) CCCouponJumpOrReceiveManager *receiveManager; // @synthesize receiveManager=_receiveManager;
@property(retain, nonatomic) JDRiskVerificationManager *riskVerificationManger; // @synthesize riskVerificationManger=_riskVerificationManger;
@property(retain, nonatomic) NSMutableArray *searchCouponItems; // @synthesize searchCouponItems=_searchCouponItems;
@property(retain, nonatomic) BJSearchCouponModel *receivedModel; // @synthesize receivedModel=_receivedModel;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
- (void).cxx_destruct;
- (void)cancelNetwork;
- (void)setRefreshState:(long long)arg1;
- (void)JDRiskVerifyFailure;
- (void)JDRiskVerifySuccessWithBsid:(id)arg1;
- (void)RvcReceivedVerification:(id)arg1;
- (void)oneKeyReceiveCommonCoupon:(id)arg1 params:(id)arg2;
- (void)oneKeyReceiveCoupon:(id)arg1 bsid:(id)arg2;
- (void)receiveOneOfSearchResults:(id)arg1;
- (void)receiveOneOfSearchResults:(id)arg1 reloadWithSuccess:(CDUnknownBlockType)arg2;
- (void)fetchSearchResultsWithKey:(id)arg1 reloadWithData:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

