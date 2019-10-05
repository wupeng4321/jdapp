//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, MyWalletModel, NSString, UILabel;
@protocol MyCardsSegmentLabelDelegate;

@interface MyCardsSegmentLabel : UIView
{
    _Bool _isSelected;
    _Bool _hasTip;
    NSString *_title;
    MyWalletModel *_model;
    id <MyCardsSegmentLabelDelegate> _delegate;
    UILabel *_titleLabel;
    JDImageView *_tipImageView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) JDImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MyCardsSegmentLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MyWalletModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool hasTip; // @synthesize hasTip=_hasTip;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)labelTapped;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
