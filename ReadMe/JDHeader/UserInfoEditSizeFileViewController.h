//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UserInfoEditFileBaseViewController.h"

#import "EditUserBirthdayDelegate-Protocol.h"

@class NSString, UserInfoEditBirthdayView;

@interface UserInfoEditSizeFileViewController : UserInfoEditFileBaseViewController <EditUserBirthdayDelegate>
{
    UserInfoEditBirthdayView *_editUserBirthdayView;
}

@property(retain, nonatomic) UserInfoEditBirthdayView *editUserBirthdayView; // @synthesize editUserBirthdayView=_editUserBirthdayView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)statisticEventId:(id)arg1 eventName:(const char *)arg2;
- (void)valueChangedForDatePickeWithCurrentDateTime:(id)arg1;
- (void)abandonSelectedDateTime;
- (void)updateUserBirthDaySucceedWithString:(id)arg1;
- (void)setUserInterAct:(_Bool)arg1;
- (void)ensureSelectedDateTime:(id)arg1;
- (void)updateUserBirthday;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

