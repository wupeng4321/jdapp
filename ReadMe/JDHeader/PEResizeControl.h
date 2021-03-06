//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol PEResizeControlViewDelegate;

@interface PEResizeControl : UIView <UIGestureRecognizerDelegate>
{
    id <PEResizeControlViewDelegate> _delegate;
    struct CGPoint _translation;
    struct CGPoint _pointTouchBegin;
    struct CGPoint _startPoint;
    struct UIEdgeInsets _translationEdge;
    struct UIEdgeInsets _startEdge;
}

+ (struct CGSize)resizeControlSize;
@property(nonatomic) struct UIEdgeInsets startEdge; // @synthesize startEdge=_startEdge;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) struct CGPoint pointTouchBegin; // @synthesize pointTouchBegin=_pointTouchBegin;
@property(nonatomic) struct UIEdgeInsets translationEdge; // @synthesize translationEdge=_translationEdge;
@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) __weak id <PEResizeControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)addPinchControl;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

