//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SHVPQuestionResultModel, UIButton, UIImageView, UILabel, UITableView;

@interface SHVPQAFinalResultView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    unsigned long long _showType;
    SHVPQuestionResultModel *_model;
    UIView *_contentView;
    UIImageView *_topImageView;
    UIButton *_closeBtn;
    NSString *_commonTip;
    NSArray *_winnerArr;
    UILabel *_topTipLabel;
    UITableView *_winnerTableView;
    NSString *_successTip;
    CDUnknownBlockType _shareBlock;
    UILabel *_successTipLabel1;
    UILabel *_successTipLabel2;
    UILabel *_successTipLabel3;
    UIButton *_shareBtn;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UILabel *successTipLabel3; // @synthesize successTipLabel3=_successTipLabel3;
@property(retain, nonatomic) UILabel *successTipLabel2; // @synthesize successTipLabel2=_successTipLabel2;
@property(retain, nonatomic) UILabel *successTipLabel1; // @synthesize successTipLabel1=_successTipLabel1;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(copy, nonatomic) NSString *successTip; // @synthesize successTip=_successTip;
@property(retain, nonatomic) UITableView *winnerTableView; // @synthesize winnerTableView=_winnerTableView;
@property(retain, nonatomic) UILabel *topTipLabel; // @synthesize topTipLabel=_topTipLabel;
@property(copy, nonatomic) NSArray *winnerArr; // @synthesize winnerArr=_winnerArr;
@property(copy, nonatomic) NSString *commonTip; // @synthesize commonTip=_commonTip;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SHVPQuestionResultModel *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)closeBtnAction;
- (void)configSuccess;
- (void)configCommon;
- (void)setUpWithModel:(id)arg1 commonTip:(id)arg2 successTip:(id)arg3 shareBlock:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
