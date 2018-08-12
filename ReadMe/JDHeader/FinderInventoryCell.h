//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class JDImageView, NewFinderImageView, UIImageView, UILabel;

@interface FinderInventoryCell : JDFinderTableViewCell
{
    UIImageView *_viewImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_authorLabel;
    UILabel *_goodsLabel;
    UILabel *_viewLabel;
    NewFinderImageView *_firstImageView;
    NewFinderImageView *_secondImageView;
    NewFinderImageView *_thirdImageView;
    JDImageView *_authorImageView;
    NewFinderImageView *_tagImageView;
}

@property(retain, nonatomic) NewFinderImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) JDImageView *authorImageView; // @synthesize authorImageView=_authorImageView;
@property(retain, nonatomic) NewFinderImageView *thirdImageView; // @synthesize thirdImageView=_thirdImageView;
@property(retain, nonatomic) NewFinderImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
@property(retain, nonatomic) NewFinderImageView *firstImageView; // @synthesize firstImageView=_firstImageView;
@property(retain, nonatomic) UILabel *viewLabel; // @synthesize viewLabel=_viewLabel;
@property(retain, nonatomic) UILabel *goodsLabel; // @synthesize goodsLabel=_goodsLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end
