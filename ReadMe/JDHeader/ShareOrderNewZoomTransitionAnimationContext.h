//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, _ShareOrderSOZoomTransitionAnimationSnapshot, _ShareOrderSOZoomTransitionDropGestureDelegate;
@protocol SOZoomInTransitionAnimationContextDelegate, SOZoomOutTransitionAnimationContextDelegate;

@interface ShareOrderNewZoomTransitionAnimationContext : NSObject <UIGestureRecognizerDelegate>
{
    struct CGPoint _zoomOutDropStartPoint;
    _Bool _isDraging;
    _Bool _transitioning;
    id <SOZoomInTransitionAnimationContextDelegate> _zoomInDelegate;
    id <SOZoomOutTransitionAnimationContextDelegate> _zoomOutDelegate;
    long long _animationType;
    UIPanGestureRecognizer *_dragGesture;
    _ShareOrderSOZoomTransitionDropGestureDelegate *_so_dropGestureDelegate;
    CDUnknownBlockType _gestureHandler;
    _ShareOrderSOZoomTransitionAnimationSnapshot *_zoomInAnimationSnapshot;
    _ShareOrderSOZoomTransitionAnimationSnapshot *_zoomOutAnimationSnapshot;
    CDUnknownBlockType _zoomInAnimateCompletion;
    CDUnknownBlockType _prepareZoomOut;
    CDUnknownBlockType _willZoomOut;
    CDUnknownBlockType _zoomOutCompletion;
    CDUnknownBlockType _cancelZoomOut;
}

@property(copy, nonatomic) CDUnknownBlockType cancelZoomOut; // @synthesize cancelZoomOut=_cancelZoomOut;
@property(copy, nonatomic) CDUnknownBlockType zoomOutCompletion; // @synthesize zoomOutCompletion=_zoomOutCompletion;
@property(copy, nonatomic) CDUnknownBlockType willZoomOut; // @synthesize willZoomOut=_willZoomOut;
@property(copy, nonatomic) CDUnknownBlockType prepareZoomOut; // @synthesize prepareZoomOut=_prepareZoomOut;
@property(copy, nonatomic) CDUnknownBlockType zoomInAnimateCompletion; // @synthesize zoomInAnimateCompletion=_zoomInAnimateCompletion;
@property(retain, nonatomic) _ShareOrderSOZoomTransitionAnimationSnapshot *zoomOutAnimationSnapshot; // @synthesize zoomOutAnimationSnapshot=_zoomOutAnimationSnapshot;
@property(retain, nonatomic) _ShareOrderSOZoomTransitionAnimationSnapshot *zoomInAnimationSnapshot; // @synthesize zoomInAnimationSnapshot=_zoomInAnimationSnapshot;
@property(copy, nonatomic) CDUnknownBlockType gestureHandler; // @synthesize gestureHandler=_gestureHandler;
@property(retain, nonatomic) _ShareOrderSOZoomTransitionDropGestureDelegate *so_dropGestureDelegate; // @synthesize so_dropGestureDelegate=_so_dropGestureDelegate;
@property(retain, nonatomic) UIPanGestureRecognizer *dragGesture; // @synthesize dragGesture=_dragGesture;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) __weak id <SOZoomOutTransitionAnimationContextDelegate> zoomOutDelegate; // @synthesize zoomOutDelegate=_zoomOutDelegate;
@property(nonatomic) __weak id <SOZoomInTransitionAnimationContextDelegate> zoomInDelegate; // @synthesize zoomInDelegate=_zoomInDelegate;
@property(nonatomic) _Bool transitioning; // @synthesize transitioning=_transitioning;
- (void).cxx_destruct;
- (id)_getAnimationWindowSnapshotAfterScreenUpdates:(_Bool)arg1;
- (id)animationWindow;
- (struct CGRect)_getAspestFitImageRect:(id)arg1 rect:(struct CGRect)arg2;
- (_Bool)_zoomOutDelegateEnableDragGesture;
- (id)_getAnimationSettingForDelegate:(id)arg1;
- (id)_getZoomInContainerCaptureView;
- (struct UIEdgeInsets)_getZoomInCatainerSafeBounds;
- (_Bool)_shouldReCaptureZoomInContainer;
- (id)_loadZoomOutStartView;
- (id)_loadZoomOutSnapLocationView;
- (struct CGRect)_loadZoomOutLocationViewRect;
- (void)_endDropDelegate;
- (void)_prepareForZoomOutRecapture;
- (struct CGRect)_getAnimationWindowCenterRect;
- (struct CGRect)_loadZoomOutFinalScaleRect;
- (void)_removeDragGesture;
- (void)_finishZoomOutAnimation;
- (void)_startZoomOutAnimation:(CDUnknownBlockType)arg1 zoomOutEndRect:(struct CGRect)arg2;
- (void)_prepareForZoomOutWithStartLocationView:(id)arg1 animtionImage:(id)arg2;
- (void)_prepareForZoomOutWithStartView:(id)arg1;
- (void)_finishZoomOutGestureAnimation:(id)arg1;
- (void)cancelZoomOutGestureAnimation:(id)arg1;
- (void)_startZoomOutGestureAnimation:(id)arg1;
- (void)_prepareForZoomOutGestureAnimation:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)startZoomOutAnimationWithLocationView:(id)arg1 animationImage:(id)arg2 zoomOutEndRect:(struct CGRect)arg3 animated:(_Bool)arg4;
- (void)_endZoomAnimation:(id)arg1;
- (void)_beginZoomAnimation:(id)arg1;
- (struct CGRect)_loadzoomInLocationViewRect;
- (id)_loadzoomInEndLocationView;
- (struct CGRect)_loadZoomInFinalScaleRectWithStartView:(id)arg1;
- (void)startZoomInAnimationWithStartLocationView:(id)arg1 animationImage:(id)arg2 zoomInEndRect:(struct CGRect)arg3 willZoomIn:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5 animated:(_Bool)arg6;
- (void)startZoomInAnimationWithStartView:(id)arg1 zoomInEndRect:(struct CGRect)arg2 willZoomIn:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 animated:(_Bool)arg5;
- (void)startZoomInAnimationWithStartView:(id)arg1 willZoomIn:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
- (void)setupDropGesture:(id)arg1 shouldBegin:(CDUnknownBlockType)arg2 gestureHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

