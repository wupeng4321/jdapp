//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CommentWareInfoModel, JDImageView, NSString, UIButton, UILabel, UIView;
@protocol CommentcenterTableViewCellDelegate;

@interface CommentCenterTableViewCell : UITableViewCell <UIGestureRecognizerDelegate>
{
    UIView *backgroundView;
    JDImageView *productImageView;
    UILabel *productNameLabel;
    UIButton *publishButton;
    UILabel *beanLabel;
    UIView *giftView;
    UIView *headLineView;
    UIView *lastLineView;
    UIButton *additionButton;
    id <CommentcenterTableViewCellDelegate> delegate;
    CommentWareInfoModel *_orderWareModel;
    UIButton *_normalButton;
    UIButton *_activityButton;
    JDImageView *_iconImage;
}

@property(retain, nonatomic) JDImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIButton *activityButton; // @synthesize activityButton=_activityButton;
@property(retain, nonatomic) UIButton *normalButton; // @synthesize normalButton=_normalButton;
@property(retain, nonatomic) CommentWareInfoModel *orderWareModel; // @synthesize orderWareModel=_orderWareModel;
@property(nonatomic) __weak id <CommentcenterTableViewCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)gotoProductDetai:(id)arg1;
- (void)addHeadView;
- (void)setLastLine;
- (void)setHeadLine;
- (void)prepareForReuse;
- (void)additionComment;
- (void)changeState;
- (void)setBtnBackgroundImage:(id)arg1 WithNormalImage:(id)arg2 WithHighlightedImage:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
