//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSCalendar, NSDate, NSMutableArray, NSString, UIPickerView;

@interface JDReactNativePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *timePicker;
    UIView *maskView;
    UIView *bgView;
    long long minYear;
    NSArray *_dataArr;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSCalendar *_calendar;
    NSMutableArray *_yearsArray;
    NSMutableArray *_mouthsArray;
    CDUnknownBlockType _successCalllBack;
    CDUnknownBlockType _errorCalllBack;
}

@property(copy, nonatomic) CDUnknownBlockType errorCalllBack; // @synthesize errorCalllBack=_errorCalllBack;
@property(copy, nonatomic) CDUnknownBlockType successCalllBack; // @synthesize successCalllBack=_successCalllBack;
@property(retain, nonatomic) NSMutableArray *mouthsArray; // @synthesize mouthsArray=_mouthsArray;
@property(retain, nonatomic) NSMutableArray *yearsArray; // @synthesize yearsArray=_yearsArray;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
- (void).cxx_destruct;
- (id)getDaysInMonth:(id)arg1;
- (id)getMonthInYear;
- (id)getMonths;
- (id)getYears;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)hideComponent;
- (void)showComponent;
- (void)reloadComponent;
- (id)initWithYear:(id)arg1 withMouth:(id)arg2;
- (void)tapAction;
- (void)finishAction;
- (void)closeAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

