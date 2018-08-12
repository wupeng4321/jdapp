//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCoreCouponBaseCell.h"

#import "JDCoreCouponFaceViewDelegate-Protocol.h"
#import "MyNewCouponCellRuleDelegate-Protocol.h"

@class JDButton, JDImageView, MyCouponCellRule, NSString, UILabel;

@interface MyCouponCell : JDCoreCouponBaseCell <MyNewCouponCellRuleDelegate, JDCoreCouponFaceViewDelegate>
{
    JDImageView *line;
    JDImageView *r_shadowView;
    JDImageView *b_shadowView;
    UILabel *moreIcon;
    _Bool showExpandBtn;
    _Bool isExpand;
    JDButton *expandBtn;
    MyCouponCellRule *cellBottomView;
    NSString *cellRule;
}

@property(retain, nonatomic) JDButton *expandBtn; // @synthesize expandBtn;
@property(retain, nonatomic) MyCouponCellRule *cellBottomView; // @synthesize cellBottomView;
@property(copy, nonatomic) NSString *cellRule; // @synthesize cellRule;
- (void).cxx_destruct;
- (void)expandBtnClicked;
- (void)couponFaceExpandAction:(_Bool)arg1;
- (void)cellBottomViewClicked;
- (void)setCouponModel:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

