//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCoreSemiPopupView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, PDBPTokenPriceModel, UIButton, UILabel, UITableView;

@interface PDBPTokenPricePopupView : JDCoreSemiPopupView <UITableViewDelegate, UITableViewDataSource>
{
    UILabel *_titleLabel;
    UITableView *_contentView;
    UIButton *_confirmButton;
    PDBPTokenPriceModel *_model;
}

@property(retain, nonatomic) PDBPTokenPriceModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITableView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)confirmButtonTapped:(id)arg1;
- (void)renderUIWithData:(id)arg1;
- (void)resetState;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
