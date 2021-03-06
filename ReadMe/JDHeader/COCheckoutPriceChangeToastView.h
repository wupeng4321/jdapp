//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractToastView.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSTimer, UITableView;

@interface COCheckoutPriceChangeToastView : COCheckoutAbstractToastView <UITableViewDelegate, UITableViewDataSource, JDBaseToastViewDelegate>
{
    NSTimer *_priceTimer;
    long long _interruptTime;
    NSString *_title;
    NSString *_cancelButtonTitle;
    NSString *_doneButtonTitle;
    NSArray *_items;
    UITableView *_tableView;
    NSMutableArray *_layouts;
}

+ (id)toastViewWithItems:(id)arg1 andInterruptTime:(long long)arg2;
@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)priceTimerFire:(id)arg1;
- (id)baseToastView;
- (void)layoutSubviews;
- (id)initWithItems:(id)arg1 andInterruptTime:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

