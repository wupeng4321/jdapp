//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SHVPMainPageProductView;

@interface SHVPBarPointView : UIView
{
    SHVPMainPageProductView *_productView;
    UIView *_pointView;
}

@property(retain, nonatomic) UIView *pointView; // @synthesize pointView=_pointView;
@property(retain, nonatomic) SHVPMainPageProductView *productView; // @synthesize productView=_productView;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)beginHidePointProViewAnimation;
- (void)beginShowPointProViewAnimationWithAutoHiden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;

@end

