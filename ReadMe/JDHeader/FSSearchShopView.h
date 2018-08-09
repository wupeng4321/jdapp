//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FSAdShopView, FSSearchImageShopView, FSSearchOldShopView;
@protocol FinalSearchShopViewDelegate;

@interface FSSearchShopView : UIView
{
    id <FinalSearchShopViewDelegate> _delegate;
    FSSearchOldShopView *_noImageShopView;
    FSSearchImageShopView *_haveImageShopView;
    FSAdShopView *_adShopView;
}

@property(retain, nonatomic) FSAdShopView *adShopView; // @synthesize adShopView=_adShopView;
@property(retain, nonatomic) FSSearchImageShopView *haveImageShopView; // @synthesize haveImageShopView=_haveImageShopView;
@property(retain, nonatomic) FSSearchOldShopView *noImageShopView; // @synthesize noImageShopView=_noImageShopView;
@property(nonatomic) id <FinalSearchShopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hiddenSubViews;
- (void)loadShopViewWithMobileShopModel:(id)arg1;
- (void)loadShopViewWithAdShopModel:(id)arg1;
- (void)loadShopViewWithModel:(id)arg1;

@end

