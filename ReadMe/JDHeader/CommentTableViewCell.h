//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class JDImageView, NSString, ShareOrderCommentWareInfoModel, UIButton, UILabel, UIView;
@protocol CommentTableViewCellDelegate;

@interface CommentTableViewCell : UITableViewCell <UIGestureRecognizerDelegate>
{
    UIView *backgroundView;
    JDImageView *productImageView;
    UILabel *productNameLabel;
    UIButton *publishButton;
    UIView *headLineView;
    UIView *lastLineView;
    UIButton *additionButton;
    id <CommentTableViewCellDelegate> _delegate;
    ShareOrderCommentWareInfoModel *_orderWareModel;
}

@property(retain, nonatomic) ShareOrderCommentWareInfoModel *orderWareModel; // @synthesize orderWareModel=_orderWareModel;
@property(nonatomic) __weak id <CommentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gotoProductDetai:(id)arg1;
- (void)setupButtonUI;
- (void)setLastLine;
- (void)setHeadLine;
- (void)prepareForReuse;
- (void)additionComment;
- (void)changeState;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

