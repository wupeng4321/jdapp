//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDAVFMessageDelegate-Protocol.h"

@class JDAVFMessageView, NSString, NSTimer, UIImageView, UILabel;
@protocol JDVFMessageDelegate;

@interface JDVFMaskingMessageView : UIView <JDAVFMessageDelegate>
{
    UIImageView *toastImageView;
    NSTimer *timer;
    float progressFloat;
    _Bool _finish;
    _Bool _downloading;
    int _gender;
    id <JDVFMessageDelegate> _delegate;
    JDAVFMessageView *_jDAVFMessageView;
    UILabel *_downloadSizeLabel;
}

@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool downloading; // @synthesize downloading=_downloading;
@property(retain, nonatomic) UILabel *downloadSizeLabel; // @synthesize downloadSizeLabel=_downloadSizeLabel;
@property(retain, nonatomic) JDAVFMessageView *jDAVFMessageView; // @synthesize jDAVFMessageView=_jDAVFMessageView;
@property(nonatomic) _Bool finish; // @synthesize finish=_finish;
@property(nonatomic) __weak id <JDVFMessageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadFailed;
- (void)cancelDownLoadButtonOnClicked;
- (void)cancelButtonOnClicked;
- (void)downloadRetryButtonOnClicked;
- (void)reportClickEventId:(id)arg1 eventParam:(id)arg2 eventName:(id)arg3;
- (void)closeTimer;
- (void)hidden;
- (void)timerFired;
- (void)downloadButtonOnClicked;
- (id)initWithFrame:(struct CGRect)arg1 andGender:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

