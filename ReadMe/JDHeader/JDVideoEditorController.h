//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDVideoTrimmerDelegate-Protocol.h"

@class GPUImageView, JDFilterView, JDNavBar, JDTabbar, JDVideoPlayerManager, JDVideoTrimmerView, NSArray, NSString, NSTimer, UILabel, UIProgressView, UIView;
@protocol JDVideoEditorControllerDelegate;

@interface JDVideoEditorController : JDViewController <JDVideoTrimmerDelegate, JDBaseToastViewDelegate>
{
    _Bool _isSaving;
    _Bool _initialized;
    _Bool _isTrimmed;
    _Bool _ignoreActive;
    id <JDVideoEditorControllerDelegate> _delegate;
    NSString *_localIdentifier;
    double _maxSeconds;
    double _minSeconds;
    NSArray *_filterArray;
    long long _editorType;
    JDNavBar *_navBarView;
    JDTabbar *_tabBarView;
    GPUImageView *_videoPlayerView;
    UIView *_videoProgressBGView;
    UIProgressView *_videoProgressView;
    JDVideoPlayerManager *_videoPlayerManager;
    NSTimer *_retrievingProgressTimer;
    double _leftPositionX;
    double _rightPositionX;
    long long _selectedIndex;
    long long _filterType;
    JDFilterView *_videoFilterView;
    UIView *_videoTrimmerBGView;
    JDVideoTrimmerView *_videoTrimmerView;
    UILabel *_tipsLabel0;
    UILabel *_tipsLabel1;
    UILabel *_tipsLabel2;
    UILabel *_tipsLabel3;
    NSTimer *_hiddenLabelTimer;
    double _startTime;
    double _stopTime;
    long long _direction;
    long long _firstTime;
}

@property(nonatomic) _Bool ignoreActive; // @synthesize ignoreActive=_ignoreActive;
@property(nonatomic) _Bool isTrimmed; // @synthesize isTrimmed=_isTrimmed;
@property(nonatomic) long long firstTime; // @synthesize firstTime=_firstTime;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSTimer *hiddenLabelTimer; // @synthesize hiddenLabelTimer=_hiddenLabelTimer;
@property(retain, nonatomic) UILabel *tipsLabel3; // @synthesize tipsLabel3=_tipsLabel3;
@property(retain, nonatomic) UILabel *tipsLabel2; // @synthesize tipsLabel2=_tipsLabel2;
@property(retain, nonatomic) UILabel *tipsLabel1; // @synthesize tipsLabel1=_tipsLabel1;
@property(retain, nonatomic) UILabel *tipsLabel0; // @synthesize tipsLabel0=_tipsLabel0;
@property(retain, nonatomic) JDVideoTrimmerView *videoTrimmerView; // @synthesize videoTrimmerView=_videoTrimmerView;
@property(retain, nonatomic) UIView *videoTrimmerBGView; // @synthesize videoTrimmerBGView=_videoTrimmerBGView;
@property(retain, nonatomic) JDFilterView *videoFilterView; // @synthesize videoFilterView=_videoFilterView;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) _Bool isSaving; // @synthesize isSaving=_isSaving;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) double rightPositionX; // @synthesize rightPositionX=_rightPositionX;
@property(nonatomic) double leftPositionX; // @synthesize leftPositionX=_leftPositionX;
@property(retain, nonatomic) NSTimer *retrievingProgressTimer; // @synthesize retrievingProgressTimer=_retrievingProgressTimer;
@property(retain, nonatomic) JDVideoPlayerManager *videoPlayerManager; // @synthesize videoPlayerManager=_videoPlayerManager;
@property(retain, nonatomic) UIProgressView *videoProgressView; // @synthesize videoProgressView=_videoProgressView;
@property(retain, nonatomic) UIView *videoProgressBGView; // @synthesize videoProgressBGView=_videoProgressBGView;
@property(retain, nonatomic) GPUImageView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) JDTabbar *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(retain, nonatomic) JDNavBar *navBarView; // @synthesize navBarView=_navBarView;
@property(nonatomic) long long editorType; // @synthesize editorType=_editorType;
@property(copy, nonatomic) NSArray *filterArray; // @synthesize filterArray=_filterArray;
@property(nonatomic) double minSeconds; // @synthesize minSeconds=_minSeconds;
@property(nonatomic) double maxSeconds; // @synthesize maxSeconds=_maxSeconds;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(nonatomic) __weak id <JDVideoEditorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)dismiss;
- (void)greaterMaxLength;
- (void)lessMinLength;
- (void)trimmerViewDidEndEditing:(id)arg1;
- (void)trimmerView:(id)arg1 didChangeLeftPosition:(double)arg2 rightPosition:(double)arg3;
- (void)trimmerViewBeganEditing:(id)arg1 isThumb:(_Bool)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)fixCallBug;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)invalidate;
- (void)refresh;
- (void)saveVideo:(id)arg1;
- (id)getEditorType:(long long)arg1;
- (void)hiddenLabel;
- (void)retrievingProgress;
- (void)invalidateRetrievingProgressTimer;
- (void)initRetrievingProgressTimer;
- (void)hiddenTipsLabel3;
- (void)dismissTipsLabel;
- (void)invalidateHiddenLabelTimer;
- (void)initHiddenLabelTimer;
- (void)filterVideoFromURL:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)trimVideo:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (void)_done;
- (void)_cancel;
- (void)_initTrimmerComponent;
- (void)_initFilterComponent;
- (void)_initComponent;
- (void)initCommon;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

