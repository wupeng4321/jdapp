//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class StowSimilarityTabScrollView, UIView;

@protocol StowSimilarityTabScrollViewDelegate <NSObject>
- (void)tabIndexChanged:(long long)arg1 withType:(long long)arg2;
- (UIView *)scrollView:(StowSimilarityTabScrollView *)arg1 andIndex:(long long)arg2;

@optional
- (void)showReturnToTop:(_Bool)arg1;
@end

