//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton;

@interface OrderRefundBottomSubmitButton : UIView
{
    JDButton *_ensureButton;
    CDUnknownBlockType _myBlock;
}

@property(copy, nonatomic) CDUnknownBlockType myBlock; // @synthesize myBlock=_myBlock;
@property(retain, nonatomic) JDButton *ensureButton; // @synthesize ensureButton=_ensureButton;
- (void).cxx_destruct;
- (void)addInitConstraints;
- (void)enableButton:(_Bool)arg1;
- (void)buttonTapAction:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

