//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class FinderArticelDetailIconFollowView, JDImageView, UILabel;

@interface JDUGCAnswerDetailCell : JDFinderTableViewCell
{
    CDUnknownBlockType _clickFollowView;
    JDImageView *_authorHeadImage;
    UILabel *_authorNameLabel;
    UILabel *_showTimeLabel;
    FinderArticelDetailIconFollowView *_followView;
}

@property(retain, nonatomic) FinderArticelDetailIconFollowView *followView; // @synthesize followView=_followView;
@property(retain, nonatomic) UILabel *showTimeLabel; // @synthesize showTimeLabel=_showTimeLabel;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *authorHeadImage; // @synthesize authorHeadImage=_authorHeadImage;
@property(copy, nonatomic) CDUnknownBlockType clickFollowView; // @synthesize clickFollowView=_clickFollowView;
- (void).cxx_destruct;
- (void)clickFollowViewRecognizer:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

