//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface JDMoonCalendarManager : NSObject
{
    _Bool _isFestival;
    _Bool _isMoonClickEnter;
    _Bool _isWeekClickEnter;
    _Bool _isWeekChangeToMoon;
    _Bool _isMoonChangeToWeek;
    NSDate *_currentShowDate;
    long long _monthType;
    long long _weekType;
    NSDate *_clickdMoonDate;
    NSDate *_clickdWeekDate;
    NSDate *_lastClickMoonDate;
    NSDate *_lastClickWeekDate;
    NSDate *_lastMonthDate;
    NSDate *_lastWeekDate;
}

+ (id)sharedInstance;
@property(retain) NSDate *lastWeekDate; // @synthesize lastWeekDate=_lastWeekDate;
@property(retain) NSDate *lastMonthDate; // @synthesize lastMonthDate=_lastMonthDate;
@property(retain) NSDate *lastClickWeekDate; // @synthesize lastClickWeekDate=_lastClickWeekDate;
@property(retain) NSDate *lastClickMoonDate; // @synthesize lastClickMoonDate=_lastClickMoonDate;
@property(nonatomic) _Bool isMoonChangeToWeek; // @synthesize isMoonChangeToWeek=_isMoonChangeToWeek;
@property(nonatomic) _Bool isWeekChangeToMoon; // @synthesize isWeekChangeToMoon=_isWeekChangeToMoon;
@property(retain) NSDate *clickdWeekDate; // @synthesize clickdWeekDate=_clickdWeekDate;
@property(retain) NSDate *clickdMoonDate; // @synthesize clickdMoonDate=_clickdMoonDate;
@property(nonatomic) _Bool isWeekClickEnter; // @synthesize isWeekClickEnter=_isWeekClickEnter;
@property(nonatomic) _Bool isMoonClickEnter; // @synthesize isMoonClickEnter=_isMoonClickEnter;
@property long long weekType; // @synthesize weekType=_weekType;
@property long long monthType; // @synthesize monthType=_monthType;
@property(nonatomic) _Bool isFestival; // @synthesize isFestival=_isFestival;
@property(retain) NSDate *currentShowDate; // @synthesize currentShowDate=_currentShowDate;
- (void).cxx_destruct;
- (void)dateManagerReset;

@end
