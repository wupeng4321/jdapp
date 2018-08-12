//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NewShareViewDelegate-Protocol.h"
#import "QRShareViewDelegate-Protocol.h"
#import "ScreenShotCancelViewDelegate-Protocol.h"
#import "ScreenShotShareViewDelegate-Protocol.h"
#import "ShareRewardConfirmDelegate-Protocol.h"
#import "ShareRewardViewDelegate-Protocol.h"

@class NSString, NewShareView, QRShareView, ScreenShotCancelView, ScreenShotShareView, ShareRewardLoginConfirmView, ShareRewardView, UIButton;

@interface ShareContainerView : UIView <NewShareViewDelegate, ShareRewardViewDelegate, ShareRewardConfirmDelegate, QRShareViewDelegate, ScreenShotShareViewDelegate, ScreenShotCancelViewDelegate>
{
    NewShareView *_normalPannel;
    UIButton *_bigCancelButton;
    QRShareView *_qrShareView;
    ScreenShotShareView *_scSharePannel;
    ScreenShotCancelView *_scCancelView;
    ShareRewardView *_shareIncentivePannel;
    ShareRewardLoginConfirmView *_loginConfirmView;
    CDUnknownBlockType _shareChannelCallback;
}

@property(copy, nonatomic) CDUnknownBlockType shareChannelCallback; // @synthesize shareChannelCallback=_shareChannelCallback;
@property(retain, nonatomic) ShareRewardLoginConfirmView *loginConfirmView; // @synthesize loginConfirmView=_loginConfirmView;
@property(retain, nonatomic) ShareRewardView *shareIncentivePannel; // @synthesize shareIncentivePannel=_shareIncentivePannel;
@property(retain, nonatomic) ScreenShotCancelView *scCancelView; // @synthesize scCancelView=_scCancelView;
@property(retain, nonatomic) ScreenShotShareView *scSharePannel; // @synthesize scSharePannel=_scSharePannel;
@property(retain, nonatomic) QRShareView *qrShareView; // @synthesize qrShareView=_qrShareView;
@property(retain, nonatomic) UIButton *bigCancelButton; // @synthesize bigCancelButton=_bigCancelButton;
@property(retain, nonatomic) NewShareView *normalPannel; // @synthesize normalPannel=_normalPannel;
- (void).cxx_destruct;
- (void)shareScreenShotCancelTapped;
- (void)scSharePannelDismissAfterThreeSec;
- (void)shareScreenShotToChannel:(id)arg1;
- (void)shareQRCancelTapped;
- (void)shareQRToChannel:(id)arg1;
- (void)notLogin;
- (void)goLogin;
- (void)shareRewardOpenWeb;
- (void)shareRewardBottomCancel;
- (void)shareRewardToChannel:(id)arg1;
- (void)shareCanceledBottomTapped;
- (void)copyTapped;
- (void)qrShareTapped;
- (void)shareToChannelTapped:(id)arg1;
- (void)normalPannelSpinFaceToFaceBtn;
- (void)dismissScreenShotPannelWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissNormalAndIncentivePannel:(CDUnknownBlockType)arg1;
- (void)bigCancelTapped;
- (void)openCancelButton;
- (void)openScreenShotViewsCallback:(CDUnknownBlockType)arg1;
- (void)openQRPannelWithImage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)openLoginConfirmViewWithString:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)openIncentivePannelParam:(id)arg1 rewardStr:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)openNormalPannelWithParam:(id)arg1 title:(id)arg2 normalPannelCallback:(CDUnknownBlockType)arg3;
- (id)initShareContainerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

