//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UIImageView, UIView;

@interface TDPInstructionView : UIControl
{
    _Bool _isARKit;
    CDUnknownBlockType _action;
    UIView *_backgroundView;
    UIImageView *_instructionsImage;
    UIButton *_ikownButton;
}

@property(nonatomic) _Bool isARKit; // @synthesize isARKit=_isARKit;
@property(retain, nonatomic) UIButton *ikownButton; // @synthesize ikownButton=_ikownButton;
@property(retain, nonatomic) UIImageView *instructionsImage; // @synthesize instructionsImage=_instructionsImage;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)showInView:(id)arg1;
- (void)setupAutoLayout;
- (void)layoutSubviews;
- (void)setInstructionViewImageName:(id)arg1;
- (id)initWithImageName:(id)arg1 actionAfterClose:(CDUnknownBlockType)arg2;

@end

