//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FinderHotTableViewCell.h"

@class FinderHotListCellBottomView, FinderHotListPicImage, UILabel, UIView;

@interface FinderHotThreePicArticleCell : FinderHotTableViewCell
{
    UIView *_mBackgroundView;
    UILabel *_mTitleLab;
    FinderHotListPicImage *_mFirstPicImage;
    FinderHotListPicImage *_mSecondPicImage;
    FinderHotListPicImage *_mThirdPicImage;
    FinderHotListCellBottomView *_mAuthorView;
}

@property(retain, nonatomic) FinderHotListCellBottomView *mAuthorView; // @synthesize mAuthorView=_mAuthorView;
@property(retain, nonatomic) FinderHotListPicImage *mThirdPicImage; // @synthesize mThirdPicImage=_mThirdPicImage;
@property(retain, nonatomic) FinderHotListPicImage *mSecondPicImage; // @synthesize mSecondPicImage=_mSecondPicImage;
@property(retain, nonatomic) FinderHotListPicImage *mFirstPicImage; // @synthesize mFirstPicImage=_mFirstPicImage;
@property(retain, nonatomic) UILabel *mTitleLab; // @synthesize mTitleLab=_mTitleLab;
@property(retain, nonatomic) UIView *mBackgroundView; // @synthesize mBackgroundView=_mBackgroundView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refresh:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)setupViews;

@end

