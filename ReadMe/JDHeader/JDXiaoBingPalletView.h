//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIScrollView;
@protocol JDXiaoBingPalletViewDelegate;

@interface JDXiaoBingPalletView : UIView
{
    id <JDXiaoBingPalletViewDelegate> _viewdelegate;
    UIScrollView *_scrollView;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <JDXiaoBingPalletViewDelegate> viewdelegate; // @synthesize viewdelegate=_viewdelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)configView;
- (void)confirm;
- (void)setPallectConfirmButton:(_Bool)arg1;
- (void)initplaceholderView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
