//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSHashTable, UIButton, UIImageView, UILabel;
@protocol MessageTitleViewDelegate;

@interface MessageTitleView : UIView
{
    id <MessageTitleViewDelegate> _delegate;
    NSAttributedString *_title;
    UILabel *_titleLabel;
    UIButton *_clearBtn;
    UIImageView *_tipsView;
    NSHashTable *_clipSuperViews;
}

@property(retain, nonatomic) NSHashTable *clipSuperViews; // @synthesize clipSuperViews=_clipSuperViews;
@property(retain, nonatomic) UIImageView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <MessageTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hiddenClearBtn:(_Bool)arg1;
- (void)dismissClearTips;
- (void)showClearTipsInBar:(id)arg1;
- (void)tapClearButton;
- (void)update;
- (id)initWithFrame:(struct CGRect)arg1;

@end

