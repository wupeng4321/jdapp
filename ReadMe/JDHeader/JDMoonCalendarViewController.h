//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCalendarBaseViewController.h"

@class JDCalendarAlarmBirthdayModel, JDCalendarAlarmFestivalModel, JDCalendarRemindModel, JDCalendarTodayFestivalModel, JDMoonCalendarContentView, JDMoonCalendarGuidanceView, NSArray, NSDate, UIView;

@interface JDMoonCalendarViewController : JDCalendarBaseViewController
{
    _Bool _isNeedRefreshBirthday;
    NSDate *_startDate;
    JDMoonCalendarContentView *_contentView;
    JDCalendarAlarmFestivalModel *_alarmFestivalModel;
    JDCalendarTodayFestivalModel *_todayFestivalModel;
    JDCalendarAlarmBirthdayModel *_alarmBirthdayModel;
    NSArray *_todayRemindModelArr;
    JDCalendarRemindModel *_remindModel;
    CDUnknownBlockType _currentShowMonthBlock;
    JDMoonCalendarGuidanceView *_guidanceView;
    UIView *_lineCoverView;
    UIView *_weekView;
}

@property(retain, nonatomic) UIView *weekView; // @synthesize weekView=_weekView;
@property(retain, nonatomic) UIView *lineCoverView; // @synthesize lineCoverView=_lineCoverView;
@property(retain, nonatomic) JDMoonCalendarGuidanceView *guidanceView; // @synthesize guidanceView=_guidanceView;
@property(nonatomic) _Bool isNeedRefreshBirthday; // @synthesize isNeedRefreshBirthday=_isNeedRefreshBirthday;
@property(copy, nonatomic) CDUnknownBlockType currentShowMonthBlock; // @synthesize currentShowMonthBlock=_currentShowMonthBlock;
@property(retain, nonatomic) JDCalendarRemindModel *remindModel; // @synthesize remindModel=_remindModel;
@property(retain, nonatomic) NSArray *todayRemindModelArr; // @synthesize todayRemindModelArr=_todayRemindModelArr;
@property(retain, nonatomic) JDCalendarAlarmBirthdayModel *alarmBirthdayModel; // @synthesize alarmBirthdayModel=_alarmBirthdayModel;
@property(retain, nonatomic) JDCalendarTodayFestivalModel *todayFestivalModel; // @synthesize todayFestivalModel=_todayFestivalModel;
@property(retain, nonatomic) JDCalendarAlarmFestivalModel *alarmFestivalModel; // @synthesize alarmFestivalModel=_alarmFestivalModel;
@property(retain, nonatomic) JDMoonCalendarContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)updateMoonCalendarContentViewWithDate:(id)arg1 festival:(_Bool)arg2;
- (void)markNeedReFreshBirthDay:(id)arg1;
- (void)showGuidanceViewOrNot;
- (_Bool)hasUserLogined;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCurrentShowMonthBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (_Bool)p_isFestivalWithDate:(id)arg1;
- (void)updateMoonCalendarContentViewWithDate:(id)arg1;
- (void)updateAllMoonCalendarDataWithDate:(id)arg1;
- (void)fetchTodayRemindDataInDay:(id)arg1;
- (void)fetchAlarmBirthdayData;
- (void)fetchTodayFestivalDataWithParams:(id)arg1;
- (void)fetchAlarmFestivalDataWithParams:(id)arg1;

@end

