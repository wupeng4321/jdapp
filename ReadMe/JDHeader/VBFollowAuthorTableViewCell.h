//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VBBaseTableViewCell.h"

@class NSArray, UIButton, UIImageView, UILabel, VBFollowAuthorModel, VBFollowPeopleBackgroundView;

@interface VBFollowAuthorTableViewCell : VBBaseTableViewCell
{
    UIImageView *_combinedShapeImgv;
    UILabel *_cardSloganLabel;
    UIButton *_changeOneListBtn;
    CDUnknownBlockType _clickCall;
    VBFollowPeopleBackgroundView *_avatarBackgroundView0;
    VBFollowPeopleBackgroundView *_avatarBackgroundView1;
    VBFollowPeopleBackgroundView *_avatarBackgroundView2;
    VBFollowAuthorModel *_model;
    NSArray *_currentShowingAuthorList;
}

@property(retain, nonatomic) NSArray *currentShowingAuthorList; // @synthesize currentShowingAuthorList=_currentShowingAuthorList;
@property(retain, nonatomic) VBFollowAuthorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) VBFollowPeopleBackgroundView *avatarBackgroundView2; // @synthesize avatarBackgroundView2=_avatarBackgroundView2;
@property(retain, nonatomic) VBFollowPeopleBackgroundView *avatarBackgroundView1; // @synthesize avatarBackgroundView1=_avatarBackgroundView1;
@property(retain, nonatomic) VBFollowPeopleBackgroundView *avatarBackgroundView0; // @synthesize avatarBackgroundView0=_avatarBackgroundView0;
@property(copy, nonatomic) CDUnknownBlockType clickCall; // @synthesize clickCall=_clickCall;
- (void).cxx_destruct;
- (void)assignValue:(id)arg1;
- (void)updateView;
- (void)setCurrentShowingPeople:(id)arg1;
- (void)changeOneListBtnTap;
- (void)authorInfoButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

