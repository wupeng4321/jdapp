//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FinderHotTableViewCell.h"

@class FinderHotListCellDotLabel, NewFinderImageView, UILabel, UIView;

@interface FinderHotSmallArticleCell : FinderHotTableViewCell
{
    UIView *_mBackgroundView;
    UILabel *_mTitleLab;
    NewFinderImageView *_mPicImg;
    UILabel *_mNumLab;
    NewFinderImageView *_mAuthorImg;
    UILabel *_mAuthorLab;
    FinderHotListCellDotLabel *_mPageViewLab;
}

@property(retain, nonatomic) FinderHotListCellDotLabel *mPageViewLab; // @synthesize mPageViewLab=_mPageViewLab;
@property(retain, nonatomic) UILabel *mAuthorLab; // @synthesize mAuthorLab=_mAuthorLab;
@property(retain, nonatomic) NewFinderImageView *mAuthorImg; // @synthesize mAuthorImg=_mAuthorImg;
@property(retain, nonatomic) UILabel *mNumLab; // @synthesize mNumLab=_mNumLab;
@property(retain, nonatomic) NewFinderImageView *mPicImg; // @synthesize mPicImg=_mPicImg;
@property(retain, nonatomic) UILabel *mTitleLab; // @synthesize mTitleLab=_mTitleLab;
@property(retain, nonatomic) UIView *mBackgroundView; // @synthesize mBackgroundView=_mBackgroundView;
- (void).cxx_destruct;
- (void)refresh:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end
