//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer;

@interface WareSOZoomTransitionDropGestureDelegate : NSObject <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panGesture;
    CDUnknownBlockType _gestureShouldBegin;
}

@property(copy, nonatomic) CDUnknownBlockType gestureShouldBegin; // @synthesize gestureShouldBegin=_gestureShouldBegin;
@property(nonatomic) __weak UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initPanGesture:(id)arg1 shouldBegin:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
