//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDSegmentButtonDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDButton, JDStatusView, NSDictionary, NSMutableArray, NSString, UILabel, UITableView;
@protocol OrderCenterPaySelectCouponViewDelegate;

@interface OrderCenterPay_SelectCouponView : UIView <JDSegmentButtonDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *selectCouponArr;
    long long selectIndex;
    JDButton *backBtn;
    UILabel *titleLabel;
    JDButton *ruleBtn;
    JDButton *segmentBtn;
    UILabel *headTipLabel;
    UITableView *canUseTableView;
    UITableView *cannotUseTableView;
    UIView *bottomView;
    id <OrderCenterPaySelectCouponViewDelegate> delegate;
    UILabel *cellRuleLabel;
    NSString *_orderId;
    NSString *_selectedCouponSizeTip;
    NSMutableArray *_canUseArr;
    NSMutableArray *_cannotUseArr;
    NSDictionary *_couponDic;
    JDStatusView *_couponErrorView;
}

@property(retain, nonatomic) JDStatusView *couponErrorView; // @synthesize couponErrorView=_couponErrorView;
@property(retain, nonatomic) NSDictionary *couponDic; // @synthesize couponDic=_couponDic;
@property(retain, nonatomic) NSMutableArray *cannotUseArr; // @synthesize cannotUseArr=_cannotUseArr;
@property(retain, nonatomic) NSMutableArray *canUseArr; // @synthesize canUseArr=_canUseArr;
@property(retain, nonatomic) NSString *selectedCouponSizeTip; // @synthesize selectedCouponSizeTip=_selectedCouponSizeTip;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) UITableView *cannotUseTableView; // @synthesize cannotUseTableView;
@property(retain, nonatomic) UITableView *canUseTableView; // @synthesize canUseTableView;
@property(retain, nonatomic) UILabel *cellRuleLabel; // @synthesize cellRuleLabel;
@property(nonatomic) __weak id <OrderCenterPaySelectCouponViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (struct CGRect)getTableViewFrame:(long long)arg1;
- (id)getTableViewWithFrame:(struct CGRect)arg1;
- (void)resetTableOffSet;
- (void)confirmBtnClicked:(id)arg1;
- (void)ruleBtnClicked:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)segmentButton:(id)arg1 didSelectIndex:(long long)arg2;
- (void)updatePayData:(id)arg1;
- (double)getTipWidth:(id)arg1;
- (double)getSpacingWithUseTip:(id)arg1 noUseTip:(id)arg2;
- (void)updateCouponData:(id)arg1 payViewClicked:(_Bool)arg2;
- (id)getTipString:(id)arg1 highlightStr:(id)arg2;
- (id)getSplitLine:(struct CGPoint)arg1 colorHex:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

