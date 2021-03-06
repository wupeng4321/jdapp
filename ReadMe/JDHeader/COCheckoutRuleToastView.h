//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractToastView.h"

#import "JDBaseToastTextListViewDataSource-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"

@class COCheckoutJdBeanUseRuleApi, COCheckoutRuleModel, NSString;

@interface COCheckoutRuleToastView : COCheckoutAbstractToastView <JDBaseToastViewDelegate, JDBaseToastTextListViewDataSource>
{
    unsigned long long _type;
    COCheckoutJdBeanUseRuleApi *_ruleApi;
    COCheckoutRuleModel *_ruleModel;
}

@property(retain, nonatomic) COCheckoutRuleModel *ruleModel; // @synthesize ruleModel=_ruleModel;
@property(retain, nonatomic) COCheckoutJdBeanUseRuleApi *ruleApi; // @synthesize ruleApi=_ruleApi;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)toastView:(id)arg1 DetailForSection:(long long)arg2;
- (id)toastView:(id)arg1 titleForSection:(long long)arg2;
- (long long)numberOfSectionsInToastView:(id)arg1;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)callSuperShow;
- (id)getRuleTitle;
- (void)dismiss;
- (void)show;
- (id)baseToastView;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

