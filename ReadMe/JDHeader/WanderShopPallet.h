//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PalletSingleViewDelegate-Protocol.h"

@class NSString, UIButton, UIScrollView;

@interface WanderShopPallet : UIView <PalletSingleViewDelegate>
{
    int _productMaxCount;
    UIView *line;
    int _subviewCount;
    UIButton *_confirmButton;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (void).cxx_destruct;
- (void)setPalletCount:(long long)arg1;
- (void)setAnimation:(id)arg1 isLarge:(_Bool)arg2;
- (void)didDeletePalletSingleView:(id)arg1;
- (void)removePalletItem:(id)arg1;
- (_Bool)isEqualProduct:(id)arg1 SencodProduct:(id)arg2;
- (void)addPalletView:(id)arg1 isShowAnimation:(_Bool)arg2;
- (void)ResetConfirmButton;
- (void)setBKColor:(id)arg1;
- (void)addPalletItem:(id)arg1;
- (void)setScrollViewContentX:(double)arg1;
- (double)getScrollViewContentX;
- (void)setAllItem:(id)arg1;
- (void)removeAllItem;
- (void)confirmButtonClick;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

