//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTElementBaseView.h"

@class UIImageView, UILabel;

@interface TTTElementProCouponUnit : TTTElementBaseView
{
    UIImageView *_couponView;
    UILabel *_couponLabel;
}

@property(retain, nonatomic) UILabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) UIImageView *couponView; // @synthesize couponView=_couponView;
- (void).cxx_destruct;
- (id)resizeWithImageName:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 data:(id)arg2 text:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

