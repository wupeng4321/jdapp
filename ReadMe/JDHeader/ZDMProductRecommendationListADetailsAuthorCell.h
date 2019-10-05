//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, UIButton, UILabel;

@interface ZDMProductRecommendationListADetailsAuthorCell : UICollectionViewCell
{
    JDImageView *_authorAvatarImageView;
    UILabel *_authorNameLabel;
    JDImageView *_vipMarkView;
    UILabel *_authorAreaLabel;
    UILabel *_numberOfPostsLabel;
    UILabel *_numberOfFollowersLabel;
    UIButton *_followAuthorButton;
    CDUnknownBlockType _onPressFollowAuthorButton;
}

@property(copy, nonatomic) CDUnknownBlockType onPressFollowAuthorButton; // @synthesize onPressFollowAuthorButton=_onPressFollowAuthorButton;
@property(retain, nonatomic) UIButton *followAuthorButton; // @synthesize followAuthorButton=_followAuthorButton;
@property(retain, nonatomic) UILabel *numberOfFollowersLabel; // @synthesize numberOfFollowersLabel=_numberOfFollowersLabel;
@property(retain, nonatomic) UILabel *numberOfPostsLabel; // @synthesize numberOfPostsLabel=_numberOfPostsLabel;
@property(retain, nonatomic) UILabel *authorAreaLabel; // @synthesize authorAreaLabel=_authorAreaLabel;
@property(retain, nonatomic) JDImageView *vipMarkView; // @synthesize vipMarkView=_vipMarkView;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *authorAvatarImageView; // @synthesize authorAvatarImageView=_authorAvatarImageView;
- (void).cxx_destruct;
- (void)followAuthorButtonPressed:(id)arg1;
- (void)render:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
