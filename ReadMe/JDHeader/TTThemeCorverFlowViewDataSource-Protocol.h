//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTThemeCorverFlowView, UIView;

@protocol TTThemeCorverFlowViewDataSource <NSObject>
- (UIView *)themeCorverFlow:(TTThemeCorverFlowView *)arg1 viewForItemAtIndex:(unsigned long long)arg2 reusingView:(UIView *)arg3;
- (unsigned long long)numberOfItemsInCoverFlow:(TTThemeCorverFlowView *)arg1;
@end
