//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, TTTScrollCardView, UICollectionReusableView, UICollectionViewCell;

@protocol TTTScrollCarViewDataSource <NSObject>
- (UICollectionViewCell *)scrollCardView:(TTTScrollCardView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)scrollCardView:(TTTScrollCardView *)arg1 numberOfItemsInScetion:(long long)arg2;

@optional
- (UICollectionReusableView *)scrollCardView:(TTTScrollCardView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

