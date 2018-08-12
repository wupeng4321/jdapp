//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPQFullBaseViewController.h"

@class JDPQHomePayViewParamModel, JDPayBizURLRequest, UIButton;

@interface JDPQHomepayeViewController : JDPQFullBaseViewController
{
    _Bool _isWebView;
    _Bool _refreshEnable;
    UIButton *_openButton;
    JDPQHomePayViewParamModel *_viewParamModel;
    JDPayBizURLRequest *_reportRiskRequest;
}

@property(nonatomic) _Bool refreshEnable; // @synthesize refreshEnable=_refreshEnable;
@property(nonatomic) JDPayBizURLRequest *reportRiskRequest; // @synthesize reportRiskRequest=_reportRiskRequest;
@property(retain, nonatomic) JDPQHomePayViewParamModel *viewParamModel; // @synthesize viewParamModel=_viewParamModel;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
- (void).cxx_destruct;
- (void)applicationWillEnterForegroundNotification;
- (void)private_pushToConfirmView;
- (void)private_pushToVerifyViewWithReportRiskReturnModel:(id)arg1;
- (void)private_loadReportRiskSuccessReturnModel:(id)arg1;
- (void)private_reportRisk;
- (void)private_refresh;
- (void)private_openAction:(id)arg1;
- (void)updateRefreshState;
- (void)private_createResultCtrl;
- (void)private_createOpenButton;
- (void)private_createWebView;
- (void)removeNotification;
- (void)registerNotification;
- (void)private_setup;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)navBarLeftButtonAction:(id)arg1;
- (void)dealloc;

@end

