//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionBaseCell.h"

#import "IAMainSessionActivityHeaderViewDelegate-Protocol.h"

@class IAMainSessionActivityHeaderView, IAMainSessionActivityModel, NSMutableArray, NSString, UIView;

@interface IAMainSessionActivityCell : IAMainSessionBaseCell <IAMainSessionActivityHeaderViewDelegate>
{
    UIView *_backContentView;
    IAMainSessionActivityHeaderView *_headerView;
    NSMutableArray *_reuseItemView;
    IAMainSessionActivityModel *_activityModel;
}

@property(retain, nonatomic) IAMainSessionActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(retain, nonatomic) NSMutableArray *reuseItemView; // @synthesize reuseItemView=_reuseItemView;
@property(retain, nonatomic) IAMainSessionActivityHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *backContentView; // @synthesize backContentView=_backContentView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configDelegate:(id)arg1;
- (void)clickDoTaskBtn:(id)arg1;
- (id)_createNewItemView;
- (id)reuseForItemView:(long long)arg1;
- (void)setupAndAddReuseItemView;
- (void)setupHeaderView;
- (void)setupBackContentView;
- (void)configModel:(id)arg1 publicModel:(id)arg2;
- (void)customLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

