//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface FinderCommentHeadView : UIView
{
    UIView *_backView;
    UIView *_backRoundView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backRoundView; // @synthesize backRoundView=_backRoundView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)setHeadTitle:(id)arg1 CommentNum:(long long)arg2;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

