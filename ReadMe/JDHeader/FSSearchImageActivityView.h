//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView;

@interface FSSearchImageActivityView : UIView
{
    JDImageView *_activityImageView;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) JDImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
- (void).cxx_destruct;
- (void)loadHighImageWithUrl:(id)arg1;
- (void)loadShortImageWithUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

