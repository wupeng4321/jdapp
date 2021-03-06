//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FinderHotTableViewCell.h"

@class FinderHotListFloorStatusView, NewFinderImageView, UILabel, UIView;

@interface FinderHotSmallVideoCell : FinderHotTableViewCell
{
    UIView *_mBackgroundView;
    UILabel *_mTitleLab;
    NewFinderImageView *_mPicImg;
    NewFinderImageView *_mAuthorImg;
    UILabel *_mAuthorLab;
    FinderHotListFloorStatusView *_mPlayStatusView;
}

@property(retain, nonatomic) FinderHotListFloorStatusView *mPlayStatusView; // @synthesize mPlayStatusView=_mPlayStatusView;
@property(retain, nonatomic) UILabel *mAuthorLab; // @synthesize mAuthorLab=_mAuthorLab;
@property(retain, nonatomic) NewFinderImageView *mAuthorImg; // @synthesize mAuthorImg=_mAuthorImg;
@property(retain, nonatomic) NewFinderImageView *mPicImg; // @synthesize mPicImg=_mPicImg;
@property(retain, nonatomic) UILabel *mTitleLab; // @synthesize mTitleLab=_mTitleLab;
@property(retain, nonatomic) UIView *mBackgroundView; // @synthesize mBackgroundView=_mBackgroundView;
- (void).cxx_destruct;
- (void)cellDidEndDisPlay;
- (void)cellWillDisPlay;
- (void)layoutSubviews;
- (void)refresh:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)setupViews;

@end

