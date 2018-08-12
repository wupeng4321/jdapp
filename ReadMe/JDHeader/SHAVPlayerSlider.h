//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SHAVPlayerProgressView, UIImageView;

@interface SHAVPlayerSlider : UIView
{
    UIImageView *thumb;
    SHAVPlayerProgressView *_progressView;
    _Bool _isDraging;
    _Bool _enabled;
    double _progress;
    CDUnknownBlockType _valueChanged;
    CDUnknownBlockType _touchEvent;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType touchEvent; // @synthesize touchEvent=_touchEvent;
@property(copy, nonatomic) CDUnknownBlockType valueChanged; // @synthesize valueChanged=_valueChanged;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)paned:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

