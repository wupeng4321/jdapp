//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SHVPNewLotteryViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, SHVPNewLotteryView, UIView;

@interface SHVPNewLotteryController : NSObject <SHVPNewLotteryViewDelegate>
{
    UIView *_theSuperView;
    CDUnknownBlockType _isShowingCall;
    CDUnknownBlockType _didClickIconCall;
    SHVPNewLotteryView *_firstView;
    SHVPNewLotteryView *_secondView;
    NSTimer *_countTTimer;
    NSMutableArray *_lotteryItems;
    unsigned long long _orientation;
    struct CGPoint _firstOrigin;
    struct CGPoint _secondOrigin;
    struct CGPoint _horizonalOrigin;
}

@property(nonatomic) struct CGPoint horizonalOrigin; // @synthesize horizonalOrigin=_horizonalOrigin;
@property(nonatomic) struct CGPoint secondOrigin; // @synthesize secondOrigin=_secondOrigin;
@property(nonatomic) struct CGPoint firstOrigin; // @synthesize firstOrigin=_firstOrigin;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSMutableArray *lotteryItems; // @synthesize lotteryItems=_lotteryItems;
@property(retain, nonatomic) NSTimer *countTTimer; // @synthesize countTTimer=_countTTimer;
@property(retain, nonatomic) SHVPNewLotteryView *secondView; // @synthesize secondView=_secondView;
@property(retain, nonatomic) SHVPNewLotteryView *firstView; // @synthesize firstView=_firstView;
@property(copy, nonatomic) CDUnknownBlockType didClickIconCall; // @synthesize didClickIconCall=_didClickIconCall;
@property(copy, nonatomic) CDUnknownBlockType isShowingCall; // @synthesize isShowingCall=_isShowingCall;
@property(nonatomic) __weak UIView *theSuperView; // @synthesize theSuperView=_theSuperView;
- (void).cxx_destruct;
- (void)countingWithLotteryView:(id)arg1;
- (void)startWithLotteryView:(id)arg1;
- (void)finishedWithLotteryView:(id)arg1;
- (void)equip:(id)arg1 item:(id)arg2;
- (_Bool)firsetViewShouldAnimation;
- (void)updateViewShowIfNeed;
- (_Bool)hasLotteryInfo;
- (id)deQueue;
- (void)enQueue:(id)arg1;
@property(readonly, nonatomic) _Bool isShowing;
- (void)refresh:(unsigned long long)arg1;
- (id)init;
- (void)destoryLotteryController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
