//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface ShowTipView : UIView
{
    UIImageView *_tipType;
    UILabel *_tipText;
}

+ (id)shared;
@property(retain, nonatomic) UILabel *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) UIImageView *tipType; // @synthesize tipType=_tipType;
- (void).cxx_destruct;
- (id)sharedView;
- (void)hide;
- (void)showWithTip:(id)arg1 autoDisappear:(_Bool)arg2;
- (void)showWithTip:(id)arg1;
- (void)showInView:(id)arg1 type:(_Bool)arg2 tip:(id)arg3;
- (id)createTipLabel;
- (void)initView;
- (id)init;

@end
