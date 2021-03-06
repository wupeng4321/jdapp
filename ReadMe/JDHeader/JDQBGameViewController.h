//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDGameChargeInfoView_NewDelegate-Protocol.h"
#import "JDQBAndGameChargeSelectViewDelegate-Protocol.h"
#import "JDQBChargeInfoView_NewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDChargeNoticeView, JDGameChargeInfoView_New, JDQBAndGameChargeSelectView, JDQBChargeInfoView_New, JDRechargeTextModel, NSString, UIButton, UIImageView, UITableView;

@interface JDQBGameViewController : JDViewController <JDQBChargeInfoView_NewDelegate, JDGameChargeInfoView_NewDelegate, JDQBAndGameChargeSelectViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    JDQBAndGameChargeSelectView *_qBAndGameChargeSelectView;
    UIButton *_chargeBtn;
    UIImageView *_chargeBtnBottomBg;
    double _cellHeight;
    _Bool _isGotoAuthView;
    int _qqAndGameViewType;
    JDQBChargeInfoView_New *_qqChargeView;
    JDGameChargeInfoView_New *_gameChargeView;
    NSString *_strPayBackUrl;
    JDRechargeTextModel *_textModel;
    UITableView *_tableView;
    JDChargeNoticeView *_noticeView;
}

@property(retain, nonatomic) JDChargeNoticeView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isGotoAuthView; // @synthesize isGotoAuthView=_isGotoAuthView;
@property(retain, nonatomic) JDRechargeTextModel *textModel; // @synthesize textModel=_textModel;
@property(retain, nonatomic) NSString *strPayBackUrl; // @synthesize strPayBackUrl=_strPayBackUrl;
@property(retain, nonatomic) JDGameChargeInfoView_New *gameChargeView; // @synthesize gameChargeView=_gameChargeView;
@property(retain, nonatomic) JDQBChargeInfoView_New *qqChargeView; // @synthesize qqChargeView=_qqChargeView;
@property(nonatomic) int qqAndGameViewType; // @synthesize qqAndGameViewType=_qqAndGameViewType;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)chargeBtnClick:(id)arg1;
- (void)dismissAddressViewAndUpdateAddressModel:(_Bool)arg1;
- (void)selectViewContentClick:(long long)arg1 accType:(int)arg2;
- (void)selectViewCloseBtnClick;
- (void)showSelectContentView:(int)arg1 content:(id)arg2;
- (void)showQbSelectContent:(int)arg1 content:(id)arg2 lastSelect:(id)arg3;
- (void)turnToGameSelect;
- (void)showGameSelectContent:(int)arg1 content:(id)arg2 lastSelect:(id)arg3;
- (void)setChargeBtnText:(id)arg1 busType:(int)arg2;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(struct CGSize)arg1;
- (void)updateMobileAndFlowChargeCellFrame:(double)arg1 busType:(int)arg2;
- (void)setChargeBtnStatus:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadMainView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setRechargeTextModel:(id)arg1;
- (void)initQQAndGameView;
- (void)initTableView;
- (id)initWithBusType:(int)arg1 delegate:(id)arg2 title:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

