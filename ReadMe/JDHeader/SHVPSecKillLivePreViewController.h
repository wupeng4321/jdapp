//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "SHVPSecKillLivePreViewDelegate-Protocol.h"

@class CustomActivityIndicatorView, NSNumber, NSString, SHVPLivePreRequest, SHVPMainPageReminderView, SHVPSecKillLivePreListView, SHVPSecKillLivePreModel, SHVPSecKillLivePreView;

@interface SHVPSecKillLivePreViewController : JDViewController <SHVPSecKillLivePreViewDelegate>
{
    SHVPSecKillLivePreModel *_preModel;
    SHVPSecKillLivePreView *_preView;
    NSNumber *_liveId;
    SHVPLivePreRequest *_request;
    CustomActivityIndicatorView *_activityView;
    SHVPSecKillLivePreListView *_listView;
    CDUnknownBlockType _jumpCallback;
    SHVPMainPageReminderView *_reminderView;
}

@property(retain, nonatomic) SHVPMainPageReminderView *reminderView; // @synthesize reminderView=_reminderView;
@property(copy, nonatomic) CDUnknownBlockType jumpCallback; // @synthesize jumpCallback=_jumpCallback;
@property(retain, nonatomic) SHVPSecKillLivePreListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) CustomActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) SHVPLivePreRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSNumber *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) SHVPSecKillLivePreView *preView; // @synthesize preView=_preView;
@property(retain, nonatomic) SHVPSecKillLivePreModel *preModel; // @synthesize preModel=_preModel;
- (void).cxx_destruct;
- (void)removeSelf;
- (void)handleErrorData:(id)arg1;
- (void)jump;
- (void)requestLiveDetail;
- (void)didReceiveMemoryWarning;
- (void)reloadViewWithData:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParam:(id)arg1;
- (void)willPushNewVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recordVituaPV;
- (void)selectListCell;
- (void)setPvParams;
- (void)remindMta;
- (void)mta:(id)arg1;
- (void)cancelRemind;
- (void)setRemind;
- (void)touchRemind;
- (void)touchClose;
- (void)touchShare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
