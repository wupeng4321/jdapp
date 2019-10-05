//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WanderShopProgressView;
@protocol WanderShopBottomButtonsDelagete;

@interface WanderShopBottomButtonsView : UIView
{
    UIImageView *_redImageView;
    UIImageView *_activityRedDot;
    UIView *contentView;
    id <WanderShopBottomButtonsDelagete> _delegate;
    WanderShopProgressView *_pView;
}

@property(retain, nonatomic) WanderShopProgressView *pView; // @synthesize pView=_pView;
@property(nonatomic) __weak id <WanderShopBottomButtonsDelagete> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishLogin;
- (void)composeStory;
- (void)refreshButtonStateOfIndex:(long long)arg1;
- (void)buttonSelect:(id)arg1;
- (void)hideRedView;
- (void)reloadRedView;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
