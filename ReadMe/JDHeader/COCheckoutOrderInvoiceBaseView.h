//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDContentItem.h"

@class UIView;

@interface COCheckoutOrderInvoiceBaseView : JDContentItem
{
    UIView *_topLineView;
    UIView *_bottomLineView;
}

+ (id)NewOrderInvoiceViewWithType:(long long)arg1;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
- (void).cxx_destruct;
- (id)getTypeAttributedString:(id)arg1;
- (void)setTopLineHidden:(_Bool)arg1;
- (void)setBottomLineHidden:(_Bool)arg1;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2;
- (void)isDisplayBottomLineViewAllWidth:(_Bool)arg1;
- (_Bool)isDisplayInvoiceTitle:(id)arg1;
- (void)setInvoiceDefault:(id)arg1;
- (void)show;
- (void)dealloc;

@end

