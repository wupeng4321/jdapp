//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, UIImageView, UILabel, UIView;

@interface ZDMProductRecommendationListADetailsHeaderCell : UICollectionViewCell
{
    JDImageView *_listImageView;
    UIImageView *_imgMaskView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    JDImageView *_titleIcon;
    UIView *_subTitleView;
}

@property(retain, nonatomic) UIView *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain, nonatomic) JDImageView *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgMaskView; // @synthesize imgMaskView=_imgMaskView;
@property(retain, nonatomic) JDImageView *listImageView; // @synthesize listImageView=_listImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addSubTitleRadiusPath;
- (void)renderArtcle:(id)arg1;
- (void)render:(id)arg1;

@end

