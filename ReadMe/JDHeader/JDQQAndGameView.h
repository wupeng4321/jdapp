//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "JDChargeCentreAccessoryViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDRechargeTextModel, JDStoreNetwork, NSArray, NSString, UITableView;
@protocol JDMobileAndFlowATestViewDelegate;

@interface JDQQAndGameView : JDView <JDChargeCentreAccessoryViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    JDStoreNetwork *_net;
    id <JDMobileAndFlowATestViewDelegate> _updateFrameDelegate;
    NSString *_strPayBackUrl;
    JDRechargeTextModel *_textModel;
    NSArray *_itemArray;
    UITableView *_QQGameTableview;
    long long _expoIndex;
}

@property(nonatomic) long long expoIndex; // @synthesize expoIndex=_expoIndex;
@property(retain, nonatomic) UITableView *QQGameTableview; // @synthesize QQGameTableview=_QQGameTableview;
@property(retain, nonatomic) NSArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) JDRechargeTextModel *textModel; // @synthesize textModel=_textModel;
@property(retain, nonatomic) NSString *strPayBackUrl; // @synthesize strPayBackUrl=_strPayBackUrl;
@property(nonatomic) __weak id <JDMobileAndFlowATestViewDelegate> updateFrameDelegate; // @synthesize updateFrameDelegate=_updateFrameDelegate;
- (void).cxx_destruct;
- (void)gotoMPage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)queryQQGameList;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
