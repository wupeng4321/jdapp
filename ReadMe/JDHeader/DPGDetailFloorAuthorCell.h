//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DPGDetailTableViewCell.h"

@class DPGDetailFloorAuthorCellModel, NSString, NewFinderImageView, UIButton, UILabel, UIView;

@interface DPGDetailFloorAuthorCell : DPGDetailTableViewCell
{
    CDUnknownBlockType _clickFollowViewBlock;
    CDUnknownBlockType _jumpToHomePageBlock;
    NewFinderImageView *_mAuthorImg;
    UILabel *_mAuthorLab;
    UILabel *_mFollowNumStrLab;
    UIButton *_mFollowBtn;
    UIView *_mLineView;
    DPGDetailFloorAuthorCellModel *_model;
    NSString *_mAuthorArticleNum;
}

@property(copy, nonatomic) NSString *mAuthorArticleNum; // @synthesize mAuthorArticleNum=_mAuthorArticleNum;
@property(retain, nonatomic) DPGDetailFloorAuthorCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *mLineView; // @synthesize mLineView=_mLineView;
@property(retain, nonatomic) UIButton *mFollowBtn; // @synthesize mFollowBtn=_mFollowBtn;
@property(retain, nonatomic) UILabel *mFollowNumStrLab; // @synthesize mFollowNumStrLab=_mFollowNumStrLab;
@property(retain, nonatomic) UILabel *mAuthorLab; // @synthesize mAuthorLab=_mAuthorLab;
@property(retain, nonatomic) NewFinderImageView *mAuthorImg; // @synthesize mAuthorImg=_mAuthorImg;
@property(copy, nonatomic) CDUnknownBlockType jumpToHomePageBlock; // @synthesize jumpToHomePageBlock=_jumpToHomePageBlock;
@property(copy, nonatomic) CDUnknownBlockType clickFollowViewBlock; // @synthesize clickFollowViewBlock=_clickFollowViewBlock;
- (void).cxx_destruct;
- (void)clickFollowViewRecognizer:(id)arg1;
- (void)clickAuthorRecognizer:(id)arg1;
- (void)setFollowImage:(_Bool)arg1;
- (void)setFollowNum:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end
