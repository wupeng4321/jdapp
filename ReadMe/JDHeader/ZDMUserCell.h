//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, UIButton, UILabel, UIView;

@interface ZDMUserCell : UICollectionViewCell
{
    JDImageView *_userAvatarImageView;
    UILabel *_userNameLabel;
    UIView *_vipMarkView;
    UILabel *_userIntroductionLabel;
    UIButton *_followButton;
    CDUnknownBlockType _onPressFollowButton;
}

@property(copy, nonatomic) CDUnknownBlockType onPressFollowButton; // @synthesize onPressFollowButton=_onPressFollowButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *userIntroductionLabel; // @synthesize userIntroductionLabel=_userIntroductionLabel;
@property(retain, nonatomic) UIView *vipMarkView; // @synthesize vipMarkView=_vipMarkView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) JDImageView *userAvatarImageView; // @synthesize userAvatarImageView=_userAvatarImageView;
- (void).cxx_destruct;
- (void)followButtonPressed:(id)arg1;
- (void)render:(id)arg1;
- (void)awakeFromNib;

@end

