//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CCCouponGiftCollectionView;

@interface CCCouponGiftCollectionViewCell : UICollectionViewCell
{
    CCCouponGiftCollectionView *_couponView;
}

@property(retain, nonatomic) CCCouponGiftCollectionView *couponView; // @synthesize couponView=_couponView;
- (void).cxx_destruct;
- (void)updateCouponInfoWithTitle:(id)arg1 receiveCoupon:(CDUnknownBlockType)arg2;
- (void)setupContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
