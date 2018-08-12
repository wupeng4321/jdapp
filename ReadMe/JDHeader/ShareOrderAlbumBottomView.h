//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol ShareOrderAlbumBottomViewDelegate;

@interface ShareOrderAlbumBottomView : UIView
{
    long long _maxTime;
    UIView *_backView;
    UIButton *_previewButton;
    id <ShareOrderAlbumBottomViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ShareOrderAlbumBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *previewButton; // @synthesize previewButton=_previewButton;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) long long maxTime; // @synthesize maxTime=_maxTime;
- (void).cxx_destruct;
- (void)previewTap;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

