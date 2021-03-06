//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class FinderAttentionRaiderModel, FinderAttentionTalentCellHeader, NewFinderImageView, UILabel, UIView;

@interface FinderAttentionRaiderCell : JDFinderTableViewCell
{
    struct CGSize _goodsLabelSize;
    struct CGSize _titleLabelSize;
    struct CGSize _recommendReasonLabelSize;
    struct CGSize _viewLabelSize;
    FinderAttentionTalentCellHeader *_talentHeader;
    NewFinderImageView *_articleImageView;
    UILabel *_goodsLabel;
    UILabel *_titleLabel;
    UILabel *_viewLabel;
    UILabel *_recommendReasonLabel;
    UIView *_lineView;
    UIView *_borderView;
    FinderAttentionRaiderModel *_model;
}

@property(retain, nonatomic) FinderAttentionRaiderModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) UILabel *viewLabel; // @synthesize viewLabel=_viewLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *goodsLabel; // @synthesize goodsLabel=_goodsLabel;
@property(retain, nonatomic) NewFinderImageView *articleImageView; // @synthesize articleImageView=_articleImageView;
@property(retain, nonatomic) FinderAttentionTalentCellHeader *talentHeader; // @synthesize talentHeader=_talentHeader;
- (void).cxx_destruct;
- (void)setIndex:(long long)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

