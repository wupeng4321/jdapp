//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TTTVideoMaskView : UIView
{
    UIImageView *_playImageView;
    UILabel *_durationLabel;
}

@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
- (void).cxx_destruct;
- (id)convertTime:(int)arg1;
- (void)setVideoDuration:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

