//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class COCheckOutSelectHourIndexPath, JZDChooseDateView, NSArray, NSIndexPath, NSString;

@protocol JZDChooseDateViewDataSource <NSObject>
- (NSString *)dateView:(JZDChooseDateView *)arg1 yunfeiForIndexPath:(NSIndexPath *)arg2 forColumn:(long long)arg3 inTab:(long long)arg4;
- (NSString *)dateView:(JZDChooseDateView *)arg1 titleForIndexPath:(NSIndexPath *)arg2 forColumn:(long long)arg3 inTab:(long long)arg4;
- (long long)numberOfSectionsInJZDChooseDateView:(JZDChooseDateView *)arg1 forColumn:(long long)arg2 inTab:(long long)arg3;
- (long long)numberOfRowsInJZDChooseDateView:(JZDChooseDateView *)arg1 forColumn:(long long)arg2 section:(long long)arg3 inTab:(long long)arg4;
- (long long)dateTypeOfJZDChooseDateView:(JZDChooseDateView *)arg1 inTab:(long long)arg2;

@optional
- (NSString *)getSelectTitle;
- (_Bool)isSurpasssCell:(double)arg1;
- (COCheckOutSelectHourIndexPath *)selectRowInHourForRow:(long long)arg1 inTab:(long long)arg2;
- (long long)selectRowInDayForRow:(long long)arg1 inTab:(long long)arg2;
- (NSString *)dateView:(JZDChooseDateView *)arg1 timeRangForIndexPath:(NSIndexPath *)arg2 forColumn:(long long)arg3;
- (NSString *)dateView:(JZDChooseDateView *)arg1 yunfeiColorForIndexPath:(NSIndexPath *)arg2 forColumn:(long long)arg3;
- (NSArray *)titlesOfHourTabInJZDChooseDateView:(JZDChooseDateView *)arg1;
- (NSArray *)titlesOfTabInJZDChooseDateView:(JZDChooseDateView *)arg1;
@end

