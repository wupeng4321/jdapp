//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView;
@protocol TDPCounponViewDelegate;

@interface TDPCouponView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_couplist;
    long long _couponViewtype;
    id <TDPCounponViewDelegate> _delegate;
    UIView *_bgView;
    UIView *_bigContanerView;
    UIImageView *_counponContainerView;
    UIButton *_closeButton;
    UITableView *_couponTableView;
    UIImageView *_tipImageView;
    UIImageView *_decorateView;
    UILabel *_couponInfoLabel;
    double _finialTop;
    double _originTop;
}

@property(nonatomic) double originTop; // @synthesize originTop=_originTop;
@property(nonatomic) double finialTop; // @synthesize finialTop=_finialTop;
@property(retain, nonatomic) UILabel *couponInfoLabel; // @synthesize couponInfoLabel=_couponInfoLabel;
@property(retain, nonatomic) UIImageView *decorateView; // @synthesize decorateView=_decorateView;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) UITableView *couponTableView; // @synthesize couponTableView=_couponTableView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *counponContainerView; // @synthesize counponContainerView=_counponContainerView;
@property(retain, nonatomic) UIView *bigContanerView; // @synthesize bigContanerView=_bigContanerView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <TDPCounponViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long couponViewtype; // @synthesize couponViewtype=_couponViewtype;
@property(readonly, nonatomic) NSMutableArray *couplist; // @synthesize couplist=_couplist;
- (void).cxx_destruct;
- (void)closeSelf;
- (void)animateWithTime:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)modelWithIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCounponlist:(id)arg1 couponType:(long long)arg2;
- (void)resetForUngetCoupon:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 couponList:(id)arg2 couponViewType:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 couponViewType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

