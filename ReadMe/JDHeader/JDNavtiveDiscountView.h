//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class JDNavtiveDiscountMoreView, NSMutableArray, NSString, UIScrollView;

@interface JDNavtiveDiscountView : UIView <UIScrollViewDelegate>
{
    UIScrollView *m_ScrollView;
    JDNavtiveDiscountMoreView *m_moreView;
    NSMutableArray *discountArray;
    _Bool isMoving;
    CDUnknownBlockType moreBlock;
    CDUnknownBlockType operationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock;
@property(copy, nonatomic) CDUnknownBlockType moreBlock; // @synthesize moreBlock;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)ticketTap:(id)arg1;
- (void)moreTap:(id)arg1;
- (void)setCouponDataWithIndex:(long long)arg1 couponData:(id)arg2;
- (void)setCouponsArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

