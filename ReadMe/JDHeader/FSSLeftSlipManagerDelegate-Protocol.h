//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSSLeftSlipManager, UIView;

@protocol FSSLeftSlipManagerDelegate <NSObject>
- (double)widthForSlipViewsOfLeftSlipManager:(FSSLeftSlipManager *)arg1;
- (UIView *)leftSlipManager:(FSSLeftSlipManager *)arg1 leftSlipViewAtIndex:(long long)arg2;
- (long long)numbersOfLeftSlipViewsOfLeftSlipManager:(FSSLeftSlipManager *)arg1;
- (UIView *)snapshotViewOfLeftSlipManager:(FSSLeftSlipManager *)arg1;
@end

