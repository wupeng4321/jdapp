//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FinderHotTableViewCell.h"

@class FinderHotListCellBottomView, NewFinderImageView, UILabel, UIView;

@interface FinderHotBigArticleCell : FinderHotTableViewCell
{
    UIView *_mBackgroundView;
    UILabel *_mTitleLab;
    NewFinderImageView *_mPicImg;
    FinderHotListCellBottomView *_mAuthorView;
}

@property(retain, nonatomic) FinderHotListCellBottomView *mAuthorView; // @synthesize mAuthorView=_mAuthorView;
@property(retain, nonatomic) NewFinderImageView *mPicImg; // @synthesize mPicImg=_mPicImg;
@property(retain, nonatomic) UILabel *mTitleLab; // @synthesize mTitleLab=_mTitleLab;
@property(retain, nonatomic) UIView *mBackgroundView; // @synthesize mBackgroundView=_mBackgroundView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refresh:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)setupViews;

@end

