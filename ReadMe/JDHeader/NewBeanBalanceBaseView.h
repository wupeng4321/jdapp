//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderVirtualBaseView.h"

@class COCheckoutAdditionalOrderModel;
@protocol BeanBalanceViewDelegate;

@interface NewBeanBalanceBaseView : OrderVirtualBaseView
{
    id <BeanBalanceViewDelegate> _beanBalanceDelegate;
    COCheckoutAdditionalOrderModel *_additionalOrderModel;
}

+ (id)NewBeanBalanceWithType:(long long)arg1;
@property(retain, nonatomic) COCheckoutAdditionalOrderModel *additionalOrderModel; // @synthesize additionalOrderModel=_additionalOrderModel;
@property(nonatomic) __weak id <BeanBalanceViewDelegate> beanBalanceDelegate; // @synthesize beanBalanceDelegate=_beanBalanceDelegate;
- (void).cxx_destruct;
- (struct CGSize)sizeWithString:(id)arg1 withFont:(id)arg2 constrainedWithWidth:(double)arg3;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2;
- (void)setBottomLineOriginX:(double)arg1;
- (void)show;
- (void)dealloc;

@end

