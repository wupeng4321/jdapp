//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CommentReplyModel, JDButton, JDIcon, JDIconGifLabel, JDIconLabel, JDImageView, NSString, ShareOrderUsefullView, UILabel;
@protocol CommentDetailFloorViewDelegate;

@interface CommentDetailFloorView : UIView <UIGestureRecognizerDelegate>
{
    UILabel *_replyDatail;
    JDImageView *_userHeaderView;
    UILabel *_userNameLabel;
    UILabel *_replyDate;
    JDIcon *_icon;
    JDIconLabel *_plusIcon;
    JDIconGifLabel *_plusGifIcon;
    JDButton *_reportButton;
    ShareOrderUsefullView *usefullView;
    id <CommentDetailFloorViewDelegate> _delegate;
    CommentReplyModel *_model;
}

@property(retain, nonatomic) CommentReplyModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <CommentDetailFloorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)gotoPlusCenter;
- (void)replyOther:(id)arg1;
- (void)setDetailAttributSting:(id)arg1;
- (void)openReport:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
