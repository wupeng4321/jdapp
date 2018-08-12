//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol JDAAudioViewDelegate;

@interface JDAAudioView : UIView
{
    float _maxDuration;
    long long _status;
    id <JDAAudioViewDelegate> _delegate;
    UIButton *_cancelBtn;
    UIButton *_publishBtn;
    UILabel *_timeLabel;
    UILabel *_promptLabel;
    UIImageView *_waveImageView;
    UILabel *_tipLabel;
    UIButton *_recorderBtn;
    UIButton *_reRecordBtn;
    UIButton *_playBtn;
}

@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIButton *reRecordBtn; // @synthesize reRecordBtn=_reRecordBtn;
@property(retain, nonatomic) UIButton *recorderBtn; // @synthesize recorderBtn=_recorderBtn;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *waveImageView; // @synthesize waveImageView=_waveImageView;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *publishBtn; // @synthesize publishBtn=_publishBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) float maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) __weak id <JDAAudioViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)recordAction:(id)arg1;
- (void)playAction:(id)arg1;
- (void)reRecordAction:(id)arg1;
- (void)publishAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)displayWaveWithLevel:(double)arg1;
- (double)height;
- (void)setup;
- (id)init;
- (void)dealloc;

@end
