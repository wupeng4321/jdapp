//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractView.h"

@class JDImageView, UILabel;

@interface COCheckoutMainShopHeadView : COCheckoutMainAbstractView
{
    JDImageView *_shopIconView;
    UILabel *_shopTitleLabel;
}

@property(retain, nonatomic) UILabel *shopTitleLabel; // @synthesize shopTitleLabel=_shopTitleLabel;
@property(retain, nonatomic) JDImageView *shopIconView; // @synthesize shopIconView=_shopIconView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setViewModel:(id)arg1;

@end

