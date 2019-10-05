//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderDetailFloorBaseView.h"

@class NSTimer, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface OrderDetailFloorView_PinGou : OrderDetailFloorBaseView
{
    UIImageView *_loc1_Image;
    UILabel *_loc2_Label;
    UILabel *_timeLabel;
    long long _timeCount;
    UILabel *_loc3_label;
    UIView *_locUp_View;
    UIImageView *_locUp_Arrow;
    UIView *_locDown_View;
    NSTimer *_timer;
    UITapGestureRecognizer *_tap;
}

@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *locDown_View; // @synthesize locDown_View=_locDown_View;
@property(retain, nonatomic) UIImageView *locUp_Arrow; // @synthesize locUp_Arrow=_locUp_Arrow;
@property(retain, nonatomic) UIView *locUp_View; // @synthesize locUp_View=_locUp_View;
@property(retain, nonatomic) UILabel *loc3_label; // @synthesize loc3_label=_loc3_label;
@property(nonatomic) long long timeCount; // @synthesize timeCount=_timeCount;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *loc2_Label; // @synthesize loc2_Label=_loc2_Label;
@property(retain, nonatomic) UIImageView *loc1_Image; // @synthesize loc1_Image=_loc1_Image;
- (void).cxx_destruct;
- (void)inviteFriends;
- (void)jumpToWebView;
- (void)timeIsOver;
- (void)setTimeLabelWithTimeCount:(long long)arg1;
- (id)addDefaultImgWithImg:(id)arg1 offsetX:(double)arg2;
- (void)timeFire:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (double)getViewHeight;
- (id)getImageViewWithStatus:(id)arg1 isFirst:(_Bool)arg2;
- (void)setViewWithModel:(id)arg1;
- (void)dealloc;

@end
