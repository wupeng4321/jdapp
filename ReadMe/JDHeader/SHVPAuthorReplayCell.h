//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPTableViewCell.h"

@class JDImageView, UIImageView, UILabel, UIView;

@interface SHVPAuthorReplayCell : SHVPTableViewCell
{
    UIView *_grayLine;
    JDImageView *_mainImg;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    UIImageView *_statusImage;
}

@property(retain, nonatomic) UIImageView *statusImage; // @synthesize statusImage=_statusImage;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *mainImg; // @synthesize mainImg=_mainImg;
@property(retain, nonatomic) UIView *grayLine; // @synthesize grayLine=_grayLine;
- (void).cxx_destruct;
- (void)assignValue:(id)arg1;
- (void)setupViews;

@end

