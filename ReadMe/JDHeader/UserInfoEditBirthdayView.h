//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MyJdHomeModel, NSString, UIBarButtonItem, UIDatePicker;
@protocol EditUserBirthdayDelegate;

@interface UserInfoEditBirthdayView : UIView <UIGestureRecognizerDelegate>
{
    UIBarButtonItem *_tipButton;
    id <EditUserBirthdayDelegate> _delegate;
    long long _editBirthdaySourceType;
    MyJdHomeModel *_titleModel;
    MyJdHomeModel *_selectedModel;
    NSString *_currentDateTimeString;
    UIDatePicker *_datePicker;
    UIBarButtonItem *_cancelBtn;
    UIBarButtonItem *_okBtn;
}

@property(retain, nonatomic) UIBarButtonItem *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UIBarButtonItem *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) NSString *currentDateTimeString; // @synthesize currentDateTimeString=_currentDateTimeString;
@property(retain, nonatomic) MyJdHomeModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(retain, nonatomic) MyJdHomeModel *titleModel; // @synthesize titleModel=_titleModel;
@property(nonatomic) long long editBirthdaySourceType; // @synthesize editBirthdaySourceType=_editBirthdaySourceType;
@property(nonatomic) __weak id <EditUserBirthdayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configDatePickerView;
- (void)setButtonColorAndFont:(id)arg1;
- (void)configToolBarView;
- (void)validateAndDoDelegateWithSelector:(SEL)arg1 objcet:(id)arg2;
- (void)datePickerValueChanged:(id)arg1;
- (id)dateFormatter;
- (void)cancelClick;
- (void)okClick;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
