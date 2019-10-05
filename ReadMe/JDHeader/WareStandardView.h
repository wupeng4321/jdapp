//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "PDFloorViewProtocol-Protocol.h"
#import "PDViewProtocol-Protocol.h"

@class NSString, PDDeliveryInstallView, PDO2OMarkView, PDTreatyAdView, UILabel, WareBYanbaoView;
@protocol PDFloorViewProtocol;

@interface WareStandardView : PDFloorBaseView <PDViewProtocol, PDFloorViewProtocol>
{
    UILabel *titleLable_;
    UILabel *msgLable_;
    WareBYanbaoView *_yanbaoView;
    WareBYanbaoView *_jdSerView;
    WareBYanbaoView *_filView;
    id <PDFloorViewProtocol> _delegate;
    PDDeliveryInstallView *_deliveryInstallView;
    UILabel *_stockNumLabel;
    PDTreatyAdView *_treatyAdView;
    PDO2OMarkView *_o2oMarkView;
}

@property(retain, nonatomic) PDO2OMarkView *o2oMarkView; // @synthesize o2oMarkView=_o2oMarkView;
@property(retain, nonatomic) PDTreatyAdView *treatyAdView; // @synthesize treatyAdView=_treatyAdView;
@property(retain, nonatomic) UILabel *stockNumLabel; // @synthesize stockNumLabel=_stockNumLabel;
@property(retain, nonatomic) PDDeliveryInstallView *deliveryInstallView; // @synthesize deliveryInstallView=_deliveryInstallView;
@property(nonatomic) __weak id <PDFloorViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)message:(id)arg1 info:(id)arg2;
- (void)setWithJdSerView:(id)arg1;
- (double)setWithYanBaoView:(id)arg1;
- (double)setWithFilInfoView:(id)arg1;
- (double)setWithDeliveryInstallView:(id)arg1;
- (double)setWithO2OStoreView:(id)arg1;
- (double)setWithTreatyAdView:(id)arg1;
- (void)renderUIWithProductModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
