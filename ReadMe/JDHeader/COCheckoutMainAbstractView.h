//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "COCheckoutFloorExpoProtocol-Protocol.h"

@class COCheckoutMainAbstractVM, NSObject, NSString, UIScrollView;
@protocol COCheckoutMainApiProtocol;

@interface COCheckoutMainAbstractView : UICollectionViewCell <COCheckoutFloorExpoProtocol>
{
    COCheckoutMainAbstractVM *_viewModel;
    CDUnknownBlockType _updatedContainer;
    NSObject<COCheckoutMainApiProtocol> *_apiEventTarget;
    UIScrollView *_superScrollView;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) __weak UIScrollView *superScrollView; // @synthesize superScrollView=_superScrollView;
@property(nonatomic) __weak NSObject<COCheckoutMainApiProtocol> *apiEventTarget; // @synthesize apiEventTarget=_apiEventTarget;
@property(copy, nonatomic) CDUnknownBlockType updatedContainer; // @synthesize updatedContainer=_updatedContainer;
@property(retain, nonatomic) COCheckoutMainAbstractVM *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (_Bool)isDisplayedInScreen;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
@property(readonly, copy, nonatomic) CDUnknownBlockType requestApi;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

