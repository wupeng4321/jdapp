//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDSHNavItemBaseView.h"

@class UIButton;

@interface JDSHNavShareView : JDSHNavItemBaseView
{
    _Bool _isGiftShare;
    UIButton *_shareButton;
    CDUnknownBlockType _handleBlock;
}

@property(nonatomic) _Bool isGiftShare; // @synthesize isGiftShare=_isGiftShare;
@property(copy, nonatomic) CDUnknownBlockType handleBlock; // @synthesize handleBlock=_handleBlock;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
- (void).cxx_destruct;
- (void)setNavButton:(id)arg1;
- (void)isGiftShare:(_Bool)arg1;
- (void)setBtnIcon:(id)arg1;
- (void)p_button:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 expandHitSize:(_Bool)arg2 withHandleBlock:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 withHandleBlock:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

