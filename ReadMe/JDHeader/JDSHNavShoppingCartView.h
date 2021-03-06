//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDSHNavItemBaseView.h"

@class UIButton;
@protocol NSObject;

@interface JDSHNavShoppingCartView : JDSHNavItemBaseView
{
    UIButton *_shoppingCartButton;
    id <NSObject> _observer;
    CDUnknownBlockType _handleBlock;
}

@property(copy, nonatomic) CDUnknownBlockType handleBlock; // @synthesize handleBlock=_handleBlock;
@property(retain, nonatomic) id <NSObject> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) UIButton *shoppingCartButton; // @synthesize shoppingCartButton=_shoppingCartButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCartIcon:(id)arg1;
- (void)synCartCount;
- (void)setNavButton:(id)arg1;
- (void)p_button:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withBadgeValue:(id)arg2 expandHitSize:(_Bool)arg3 withHandleBlock:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1 withBadgeValue:(id)arg2 withHandleBlock:(CDUnknownBlockType)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

