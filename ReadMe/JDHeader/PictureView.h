//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class JDImageView, NSString, NSTimer, UIActivityIndicatorView;
@protocol PictureViewDelegate;

@interface PictureView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _isZoomed;
    id <PictureViewDelegate> _pictureDelegate;
    JDImageView *_imageView;
    UIActivityIndicatorView *_activity;
    NSTimer *_tapTimer;
}

@property(retain, nonatomic) NSTimer *tapTimer; // @synthesize tapTimer=_tapTimer;
@property(nonatomic) _Bool isZoomed; // @synthesize isZoomed=_isZoomed;
@property(readonly, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <PictureViewDelegate> pictureDelegate; // @synthesize pictureDelegate=_pictureDelegate;
- (void).cxx_destruct;
- (void)killActivityIndicator;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)handleTap;
- (void)stopTapTimer;
- (void)startTapTimer;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)resetZoom:(_Bool)arg1;
- (void)resetZoom;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

