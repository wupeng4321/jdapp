//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIButton, UIImageView, UILabel;
@protocol JDFindGoodShopDelegate;

@interface JDShopSingleCouponView : UIView
{
    UIButton *m_bgButton;
    UILabel *m_titleLabel;
    UILabel *m_categoryLabel;
    UILabel *m_shortLabel;
    UILabel *m_discountLabel;
    UILabel *m_moneySignLabel;
    UILabel *m_validPeriod;
    UIImageView *m_doneImageView;
    _Bool _alreadyTake;
    NSDictionary *couponDic;
    NSDictionary *oldCoupDic;
    id <JDFindGoodShopDelegate> delegate;
}

@property(nonatomic) _Bool alreadyTake; // @synthesize alreadyTake=_alreadyTake;
@property(nonatomic) id <JDFindGoodShopDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSDictionary *oldCoupDic; // @synthesize oldCoupDic;
@property(retain, nonatomic) NSDictionary *couponDic; // @synthesize couponDic;
- (void)takeCouponWithCode:(id)arg1;
- (id)getFormatTimeString:(id)arg1;
- (void)refreshCouponToTaked:(long long)arg1;
- (void)updateCouponInfoViews;
- (void)loadCouponInfoView;
- (id)initWithFrame:(struct CGRect)arg1 withDic:(id)arg2 withIndex:(long long)arg3;
- (void)dealloc;

@end

