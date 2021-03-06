//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class NewFinderColumnModel, NewFinderImageView, UIImageView, UILabel, UIView;

@interface NewFinderColumnCell : JDFinderTableViewCell
{
    UIView *_dotView;
    struct CGSize _tagLabelSize;
    struct CGSize _interLabelSize;
    struct CGSize _titleLabelSize;
    struct CGSize _contentLabelSize;
    CDUnknownBlockType _jumpMoreColumnBlock;
    UIView *_tagView;
    UILabel *_tagLabel;
    UILabel *_interLabel;
    UIImageView *_interImageView;
    UIView *_maskView;
    UILabel *_titleLabel;
    NewFinderImageView *_picImageView;
    UIImageView *_contentImageView;
    UILabel *_contentLabel;
    NewFinderColumnModel *_model;
}

@property(retain, nonatomic) NewFinderColumnModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) NewFinderImageView *picImageView; // @synthesize picImageView=_picImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *interImageView; // @synthesize interImageView=_interImageView;
@property(retain, nonatomic) UILabel *interLabel; // @synthesize interLabel=_interLabel;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(copy, nonatomic) CDUnknownBlockType jumpMoreColumnBlock; // @synthesize jumpMoreColumnBlock=_jumpMoreColumnBlock;
- (void).cxx_destruct;
- (void)refresh:(id)arg1;
- (void)jumpMoreColumnClick;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

