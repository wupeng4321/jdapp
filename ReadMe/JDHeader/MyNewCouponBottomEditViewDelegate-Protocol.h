//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITableView;

@protocol MyNewCouponBottomEditViewDelegate <NSObject>
- (void)deleteCheckedInTableView:(UITableView *)arg1;
- (void)cancelMulEditingInTableView:(UITableView *)arg1 finished:(void (^)(_Bool))arg2;
- (void)SelectAll:(_Bool)arg1 inTableView:(UITableView *)arg2;
@end
