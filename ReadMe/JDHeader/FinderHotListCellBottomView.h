//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderHotListCellDotLabel, NewFinderImageView, UILabel;

@interface FinderHotListCellBottomView : UIView
{
    NewFinderImageView *_mAuthorImg;
    UILabel *_mAuthorLab;
    FinderHotListCellDotLabel *_mBrowseLab;
    FinderHotListCellDotLabel *_mTagLab;
    UILabel *_mNumLab;
}

@property(retain, nonatomic) UILabel *mNumLab; // @synthesize mNumLab=_mNumLab;
@property(retain, nonatomic) FinderHotListCellDotLabel *mTagLab; // @synthesize mTagLab=_mTagLab;
@property(retain, nonatomic) FinderHotListCellDotLabel *mBrowseLab; // @synthesize mBrowseLab=_mBrowseLab;
@property(retain, nonatomic) UILabel *mAuthorLab; // @synthesize mAuthorLab=_mAuthorLab;
@property(retain, nonatomic) NewFinderImageView *mAuthorImg; // @synthesize mAuthorImg=_mAuthorImg;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)bindData:(id)arg1;
- (void)setUpViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

