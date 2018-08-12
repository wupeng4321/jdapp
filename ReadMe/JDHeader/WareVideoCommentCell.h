//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WareCommentCell.h"

@class CommentVideoInfoListModel, JDImageView, NSMutableArray, NewProductModel, UILabel, WareDetailCommentModel;

@interface WareVideoCommentCell : WareCommentCell
{
    WareDetailCommentModel *_wareDetailCommentModel;
    NSMutableArray *_commentVideoArray;
    NewProductModel *_productModel;
    UILabel *_timeLabel;
    JDImageView *_timeBackImgView;
    JDImageView *_videoImgView;
    JDImageView *_playImgView;
    CommentVideoInfoListModel *_commentInfoListModel;
    NSMutableArray *_cellVideoArray;
}

@property(retain, nonatomic) NSMutableArray *cellVideoArray; // @synthesize cellVideoArray=_cellVideoArray;
@property(retain, nonatomic) CommentVideoInfoListModel *commentInfoListModel; // @synthesize commentInfoListModel=_commentInfoListModel;
@property(retain, nonatomic) JDImageView *playImgView; // @synthesize playImgView=_playImgView;
@property(retain, nonatomic) JDImageView *videoImgView; // @synthesize videoImgView=_videoImgView;
@property(retain, nonatomic) JDImageView *timeBackImgView; // @synthesize timeBackImgView=_timeBackImgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NewProductModel *productModel; // @synthesize productModel=_productModel;
@property(retain, nonatomic) NSMutableArray *commentVideoArray; // @synthesize commentVideoArray=_commentVideoArray;
@property(retain, nonatomic) WareDetailCommentModel *wareDetailCommentModel; // @synthesize wareDetailCommentModel=_wareDetailCommentModel;
- (void).cxx_destruct;
- (void)imageTapped:(id)arg1;
- (void)setWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

