//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ZDMRefreshViewActionDelegate-Protocol.h"

@class DeliveryStaffView, NSString, UIImageView, UILabel, UIScrollView, ZDMAlbumUpdateToastView;
@protocol ZDMRefreshViewDelegate;

@interface ZDMRefreshTableHeaderView : UIView <ZDMRefreshViewActionDelegate>
{
    _Bool _isLoaded;
    _Bool _showTips;
    _Bool _isLoading;
    id <ZDMRefreshViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_contentView;
    DeliveryStaffView *_deliveryStaffView;
    UIImageView *_refreshTitleImageView;
    UILabel *_statusLabel;
    ZDMAlbumUpdateToastView *_albumUpdateToastView;
    UIImageView *_staffImageView;
    UIImageView *_boxImageView;
    long long _refreshTableHeaderViewType;
    long long _state;
    struct UIEdgeInsets _orignalInsets;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) struct UIEdgeInsets orignalInsets; // @synthesize orignalInsets=_orignalInsets;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool showTips; // @synthesize showTips=_showTips;
@property(nonatomic) long long refreshTableHeaderViewType; // @synthesize refreshTableHeaderViewType=_refreshTableHeaderViewType;
@property(retain, nonatomic) UIImageView *boxImageView; // @synthesize boxImageView=_boxImageView;
@property(retain, nonatomic) UIImageView *staffImageView; // @synthesize staffImageView=_staffImageView;
@property(retain, nonatomic) ZDMAlbumUpdateToastView *albumUpdateToastView; // @synthesize albumUpdateToastView=_albumUpdateToastView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *refreshTitleImageView; // @synthesize refreshTitleImageView=_refreshTitleImageView;
@property(retain, nonatomic) DeliveryStaffView *deliveryStaffView; // @synthesize deliveryStaffView=_deliveryStaffView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <ZDMRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pullRefreshTableHeaderViewDown:(CDUnknownBlockType)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (_Bool)isShowingTips;
- (void)updateLayer:(double)arg1;
- (void)showTipEnd;
- (void)setupDefaultUI;
- (id)initWithFrame:(struct CGRect)arg1 refreshTableHeaderViewType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

