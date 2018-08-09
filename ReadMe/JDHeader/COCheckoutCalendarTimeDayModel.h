//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface COCheckoutCalendarTimeDayModel : NSObject
{
    _Bool _selected;
    NSString *_date;
    NSString *_dateStr;
    NSString *_week;
    NSArray *_hours;
    NSArray *_timeRangTypeList;
    NSArray *_promiseTagTypeList;
    NSArray *_timeRangHours;
    NSString *_promiseTagType;
    long long _errorCode;
    NSString *_errorMsg;
    NSArray *_tempHours;
    NSString *_tempPromiseTagType;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *tempPromiseTagType; // @synthesize tempPromiseTagType=_tempPromiseTagType;
@property(copy, nonatomic) NSArray *tempHours; // @synthesize tempHours=_tempHours;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *promiseTagType; // @synthesize promiseTagType=_promiseTagType;
@property(retain, nonatomic) NSArray *timeRangHours; // @synthesize timeRangHours=_timeRangHours;
@property(retain, nonatomic) NSArray *promiseTagTypeList; // @synthesize promiseTagTypeList=_promiseTagTypeList;
@property(retain, nonatomic) NSArray *timeRangTypeList; // @synthesize timeRangTypeList=_timeRangTypeList;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSArray *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) NSString *week; // @synthesize week=_week;
@property(retain, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)updateTimeRangHours;
- (id)newValueFromOldValue:(id)arg1 property:(id)arg2;

@end

