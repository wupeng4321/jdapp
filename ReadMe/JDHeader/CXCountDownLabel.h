//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class CADisplayLink;

@interface CXCountDownLabel : UILabel
{
    _Bool _ascending;
    long long _startNumber;
    long long _endNumber;
    CADisplayLink *_countDownTimer;
    unsigned long long _countInterval;
    long long _currentNumber;
    CDUnknownBlockType _countDownHandeler;
}

@property(copy, nonatomic) CDUnknownBlockType countDownHandeler; // @synthesize countDownHandeler=_countDownHandeler;
@property(nonatomic) long long currentNumber; // @synthesize currentNumber=_currentNumber;
@property(nonatomic) unsigned long long countInterval; // @synthesize countInterval=_countInterval;
@property(readonly, nonatomic) CADisplayLink *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) long long endNumber; // @synthesize endNumber=_endNumber;
@property(nonatomic) long long startNumber; // @synthesize startNumber=_startNumber;
- (void).cxx_destruct;
- (void)countDown;
- (void)resume;
- (void)pause;
- (void)start;
- (void)setStartNumber:(long long)arg1 endNumber:(long long)arg2 countDownHandeler:(CDUnknownBlockType)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

