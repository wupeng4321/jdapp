//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAKeyframeAnimation, UIImageView;

@interface DeliveryStaffView : UIView
{
    UIImageView *_staffImageViewAnimation;
    UIImageView *_speedImageView;
    CAKeyframeAnimation *_gifAnimation;
}

@property(retain, nonatomic) CAKeyframeAnimation *gifAnimation; // @synthesize gifAnimation=_gifAnimation;
- (void).cxx_destruct;
- (void)stopAnimate;
- (void)startAnimate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

