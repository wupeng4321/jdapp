//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface FinderArticelDetailIconFollowView : UIView
{
    UIImageView *_followedImageView;
    UIImageView *_unFollowedImageView;
    UILabel *_unFollowedTitle;
}

@property(retain, nonatomic) UILabel *unFollowedTitle; // @synthesize unFollowedTitle=_unFollowedTitle;
@property(retain, nonatomic) UIImageView *unFollowedImageView; // @synthesize unFollowedImageView=_unFollowedImageView;
@property(retain, nonatomic) UIImageView *followedImageView; // @synthesize followedImageView=_followedImageView;
- (void).cxx_destruct;
- (void)setIsFollowed:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

