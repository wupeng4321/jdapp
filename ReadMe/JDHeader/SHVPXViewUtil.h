//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDActivityIndicatorView, JDSHXViewUtil;

@interface SHVPXViewUtil : UIView
{
    CDUnknownBlockType _closeButtonPressedBlock;
    CDUnknownBlockType _h5Callback;
    JDSHXViewUtil *_xViewUtil;
    unsigned long long _Orientation;
    JDActivityIndicatorView *_loadingView;
}

@property(retain, nonatomic) JDActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long Orientation; // @synthesize Orientation=_Orientation;
@property(retain, nonatomic) JDSHXViewUtil *xViewUtil; // @synthesize xViewUtil=_xViewUtil;
@property(copy, nonatomic) CDUnknownBlockType h5Callback; // @synthesize h5Callback=_h5Callback;
@property(copy, nonatomic) CDUnknownBlockType closeButtonPressedBlock; // @synthesize closeButtonPressedBlock=_closeButtonPressedBlock;
- (void).cxx_destruct;
- (void)closeXView;
- (void)showXView:(id)arg1 Orientation:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

