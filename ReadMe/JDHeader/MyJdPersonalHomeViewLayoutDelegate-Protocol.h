//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MyJdPersonalHomeViewLayout, NSIndexPath;

@protocol MyJdPersonalHomeViewLayoutDelegate <NSObject>
- (double)layout:(MyJdPersonalHomeViewLayout *)arg1 heightForItemAtIndexPath:(NSIndexPath *)arg2 itemWidth:(double)arg3;

@optional
- (double)layout:(MyJdPersonalHomeViewLayout *)arg1 heightForSectionHeaderSupplementaryViewAtIndexPath:(NSIndexPath *)arg2;
@end
