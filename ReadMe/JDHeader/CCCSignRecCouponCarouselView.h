//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CCCWeakTimer, NSArray, NSMutableArray, NSString, UIImageView, UITableView;

@interface CCCSignRecCouponCarouselView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_recCouponsArray;
    UITableView *_tableView;
    UIImageView *_recCouponBackImageView;
    NSMutableArray *_oneMoreRecCouponsArray;
    double _automaticallyScrollDuration;
    double _currentOffSetY;
    CCCWeakTimer *_timer;
}

@property(retain, nonatomic) CCCWeakTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double currentOffSetY; // @synthesize currentOffSetY=_currentOffSetY;
@property(nonatomic) double automaticallyScrollDuration; // @synthesize automaticallyScrollDuration=_automaticallyScrollDuration;
@property(retain, nonatomic) NSMutableArray *oneMoreRecCouponsArray; // @synthesize oneMoreRecCouponsArray=_oneMoreRecCouponsArray;
@property(retain, nonatomic) UIImageView *recCouponBackImageView; // @synthesize recCouponBackImageView=_recCouponBackImageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *recCouponsArray; // @synthesize recCouponsArray=_recCouponsArray;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)startScrollAutomtically;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

