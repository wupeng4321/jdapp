//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FinderAttentionBrandWallMetaModel, FinderAttetionFollowControl, JDFinderNetWork, NewFinderImageView, UILabel, UIView;

@interface FinderAttentionBrandWallMetaCell : UITableViewCell
{
    _Bool _needSeparator;
    unsigned long long _index;
    FinderAttentionBrandWallMetaModel *_model;
    NewFinderImageView *_titleImageView;
    FinderAttetionFollowControl *_followControl;
    JDFinderNetWork *_attentionAuthorNetWork;
    UILabel *_titleDisplayLable;
    UILabel *_followNumberLabel;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *followNumberLabel; // @synthesize followNumberLabel=_followNumberLabel;
@property(retain, nonatomic) UILabel *titleDisplayLable; // @synthesize titleDisplayLable=_titleDisplayLable;
@property(retain, nonatomic) JDFinderNetWork *attentionAuthorNetWork; // @synthesize attentionAuthorNetWork=_attentionAuthorNetWork;
@property(retain, nonatomic) FinderAttetionFollowControl *followControl; // @synthesize followControl=_followControl;
@property(retain, nonatomic) NewFinderImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(nonatomic, getter=isNeedSeparator) _Bool needSeparator; // @synthesize needSeparator=_needSeparator;
@property(retain, nonatomic) FinderAttentionBrandWallMetaModel *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)didChangeFollowStateWithFlag:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

