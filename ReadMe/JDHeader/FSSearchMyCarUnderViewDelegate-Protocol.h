//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSSearchMyCarModel, FSSearchMyCarUnderView, NSString;

@protocol FSSearchMyCarUnderViewDelegate <NSObject>
- (NSString *)myCarUnderViewEntryName;
- (void)myCarUnderViewSelectedCar:(FSSearchMyCarModel *)arg1;
- (void)myCarUnderViewManagerButtonClicked;
- (void)myCarUnderViewAddButtonClicked;
- (void)myCarUnderViewReloadButtonClicked;
- (void)myCarUnderView:(FSSearchMyCarUnderView *)arg1 didResizeToHeight:(double)arg2;
@end
