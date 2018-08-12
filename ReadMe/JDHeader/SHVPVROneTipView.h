//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UITapGestureRecognizer;

@interface SHVPVROneTipView : UIView
{
    _Bool _hasBeenHidden;
    UIImageView *_oneTipImage;
    UILabel *_oneTipLabel;
    UITapGestureRecognizer *_tap;
}

@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UILabel *oneTipLabel; // @synthesize oneTipLabel=_oneTipLabel;
@property(retain, nonatomic) UIImageView *oneTipImage; // @synthesize oneTipImage=_oneTipImage;
@property(nonatomic) _Bool hasBeenHidden; // @synthesize hasBeenHidden=_hasBeenHidden;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)hideSelfWithAnimate;
- (void)showVROneTipViewInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

