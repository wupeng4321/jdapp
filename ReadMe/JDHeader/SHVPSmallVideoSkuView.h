//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, SHVPSmallVideoLiveCartDetailModel, SHVPSmallVideoSkuCartView, UITableView;

@interface SHVPSmallVideoSkuView : UIView
{
    CDUnknownBlockType _clickEnterCartVC;
    CDUnknownBlockType _clickRow;
    CDUnknownBlockType _clickEnterCart;
    UIView *_backView;
    UITableView *_mainTableView;
    UIView *_noContentView;
    SHVPSmallVideoSkuCartView *_skuCartView;
    SHVPSmallVideoLiveCartDetailModel *_model;
    NSMutableArray *_dataSource;
}

@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SHVPSmallVideoLiveCartDetailModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SHVPSmallVideoSkuCartView *skuCartView; // @synthesize skuCartView=_skuCartView;
@property(retain, nonatomic) UIView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(copy, nonatomic) CDUnknownBlockType clickEnterCart; // @synthesize clickEnterCart=_clickEnterCart;
@property(copy, nonatomic) CDUnknownBlockType clickRow; // @synthesize clickRow=_clickRow;
@property(copy, nonatomic) CDUnknownBlockType clickEnterCartVC; // @synthesize clickEnterCartVC=_clickEnterCartVC;
- (void).cxx_destruct;
- (void)addCartComplete:(long long)arg1;
- (void)goToJump:(id)arg1;
- (void)clickBackView:(id)arg1;
- (void)hideSkuView;
- (void)showSkuView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setLiveCartDetailModel:(id)arg1;
- (void)setupViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

