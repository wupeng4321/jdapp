//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

@interface JDOrderTraceBannerView : UIView <UIGestureRecognizerDelegate>
{
    double bannerHeight;
    NSString *jumpUrl;
    NSString *paramValue;
}

- (void).cxx_destruct;
- (void)bannerViewTapped:(id)arg1;
- (double)getBannerViewHeight;
- (double)getJingdouHeight:(id)arg1;
- (void)layoutSubviews;
- (id)initWithOrigin:(struct CGPoint)arg1 bannerInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

