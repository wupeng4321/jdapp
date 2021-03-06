//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, SingleKillListModel, UIImageView, UILabel;

@interface SSSCustonStyleItemView : UIView
{
    JDImageView *_iconImageView;
    UILabel *_soldOutLabel;
    UILabel *_showContentLabel;
    SingleKillListModel *_itemModel;
    UIImageView *_secSpellTagView;
}

@property(retain, nonatomic) UIImageView *secSpellTagView; // @synthesize secSpellTagView=_secSpellTagView;
@property(retain, nonatomic) SingleKillListModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) UILabel *showContentLabel; // @synthesize showContentLabel=_showContentLabel;
@property(retain, nonatomic) UILabel *soldOutLabel; // @synthesize soldOutLabel=_soldOutLabel;
@property(retain, nonatomic) JDImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)getShowContentAttWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateItemWithModel:(id)arg1;

@end

