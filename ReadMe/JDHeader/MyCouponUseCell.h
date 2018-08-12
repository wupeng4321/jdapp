//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyCouponCell.h"

#import "MyNewCouponCellRuleDelegate-Protocol.h"

@class JDButton, JDCoreCouponButton, JDImageView, MyCouponUseModel, NSString;

@interface MyCouponUseCell : MyCouponCell <MyNewCouponCellRuleDelegate>
{
    JDImageView *timeIcon;
    JDCoreCouponButton *couponBtn;
    JDButton *sellIcon;
    JDButton *shareIcon;
    JDButton *overlayIcon;
    JDButton *checkBtn;
    _Bool canSell;
    _Bool canShare;
    _Bool canOverlay;
    CDUnknownBlockType _couponShareBlock;
    CDUnknownBlockType _couponSellBlock;
    MyCouponUseModel *_currentUseModel;
}

@property(retain, nonatomic) MyCouponUseModel *currentUseModel; // @synthesize currentUseModel=_currentUseModel;
@property(retain, nonatomic) JDCoreCouponButton *couponBtn; // @synthesize couponBtn;
@property(retain, nonatomic) JDImageView *timeIcon; // @synthesize timeIcon;
@property(readonly, nonatomic) _Bool canOverlay; // @synthesize canOverlay;
@property(readonly, nonatomic) _Bool canShare; // @synthesize canShare;
@property(readonly, nonatomic) _Bool canSell; // @synthesize canSell;
@property(copy, nonatomic) CDUnknownBlockType couponSellBlock; // @synthesize couponSellBlock=_couponSellBlock;
@property(copy, nonatomic) CDUnknownBlockType couponShareBlock; // @synthesize couponShareBlock=_couponShareBlock;
- (void).cxx_destruct;
- (void)refreshCellUI;
- (void)sellBtnClicked;
- (void)shareBtnClicked;
- (void)setupTimeIconWithCouponState:(long long)arg1;
- (void)updateDateLabelWithUseModel:(id)arg1;
- (void)setCouponModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

