//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (MoonCalendar)
+ (long long)firstWeekDayOfMonth:(id)arg1;
- (double)getTimeIntervalDiscardHour;
- (id)beginDateWithIndex:(unsigned long long)arg1;
- (id)behindMonthBeginDateWithIndex:(unsigned long long)arg1;
- (id)nextMonthBeginDate;
- (id)beforeMonthBeginDateWithIndex:(unsigned long long)arg1;
- (id)lastMonthBeginDate;
- (id)getChineseCalendar;
- (id)getWeekdayString;
- (id)behindWeekBeginDateWithIndex:(long long)arg1;
- (id)beforeWeekBeginDateWithIndex:(long long)arg1;
@end
