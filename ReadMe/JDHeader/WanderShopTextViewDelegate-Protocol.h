//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, UITableViewCell;

@protocol WanderShopTextViewDelegate <NSObject>
- (void)inputArray:(NSMutableArray *)arg1 inputPosition:(long long)arg2;
- (void)getFocus:(UITableViewCell *)arg1;
- (void)deleteTap:(UITableViewCell *)arg1 Text:(NSString *)arg2;
- (void)enterTap:(UITableViewCell *)arg1 Text:(NSString *)arg2;
- (void)updataCellHeight:(long long)arg1 Cell:(UITableViewCell *)arg2 Text:(NSString *)arg3;
@end
