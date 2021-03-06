//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCShopCartBaseCell.h"

#import "SCShopCartSkuReserveDelegate-Protocol.h"

@class NSString, SCShopCartReserveModel, UILabel, UIView;

@interface SCShopCartReserveCell : SCShopCartBaseCell <SCShopCartSkuReserveDelegate>
{
    UILabel *_panicBuyingLabel;
    UILabel *_titleLabel;
    UIView *_clockView;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    UILabel *_secondlabel;
    UIView *_line;
    SCShopCartReserveModel *_reserveModel;
}

@property(retain, nonatomic) SCShopCartReserveModel *reserveModel; // @synthesize reserveModel=_reserveModel;
- (void).cxx_destruct;
- (void)setClockWithLimitTime:(long long)arg1;
- (void)skuCountDown;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

