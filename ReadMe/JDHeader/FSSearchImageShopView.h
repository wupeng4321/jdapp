//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, JDIcon, JDImageView, UILabel;

@interface FSSearchImageShopView : UIView
{
    JDImageView *_iconImageView;
    JDIcon *_hasNewWareImageView;
    JDIcon *_hasCouponImageView;
    JDIcon *_hasSeckill;
    UILabel *_shopNameLabel;
    UILabel *_scoreAndFollowLabel;
    UILabel *_followAndDescLabel;
    JDButton *_rightButton;
    JDIcon *_jdShopImageView;
    JDIcon *_popShopImageView;
    JDButton *_detailBackgroundView;
    JDImageView *_shopImageView;
}

- (void).cxx_destruct;
- (void)loadDataWithModel:(id)arg1;
- (void)createHaveImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

