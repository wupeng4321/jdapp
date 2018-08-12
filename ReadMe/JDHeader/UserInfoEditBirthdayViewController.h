//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MyJdHomeModel, NSString, UIBarButtonItem, UIDatePicker, UIView;

@interface UserInfoEditBirthdayViewController : UIViewController <UIGestureRecognizerDelegate>
{
    UIBarButtonItem *_tipButton;
    MyJdHomeModel *_titleModel;
    MyJdHomeModel *_selectedModel;
    NSString *_currentDateTimeString;
    UIDatePicker *_datePicker;
    UIView *_alphaView;
}

@property(retain, nonatomic) UIView *alphaView; // @synthesize alphaView=_alphaView;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) NSString *currentDateTimeString; // @synthesize currentDateTimeString=_currentDateTimeString;
@property(retain, nonatomic) MyJdHomeModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(retain, nonatomic) MyJdHomeModel *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;
- (void)configDatePickerView;
- (void)setButtonColorAndFont:(id)arg1;
- (void)configToolBarView;
- (void)validateAndDoDelegateWithSelector:(SEL)arg1 objcet:(id)arg2;
- (void)datePickerValueChanged:(id)arg1;
- (id)dateFormatter;
- (void)cancelClick;
- (void)okClick;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

