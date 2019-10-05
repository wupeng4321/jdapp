//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WareCommentCell.h"

#import "WareCommentVideoToastViewDelegate-Protocol.h"

@class CommentInfoListModel, NSMutableArray, NSString, NewProductModel, UIGestureRecognizer, WareCommentVideoToastView, WareDetailCommentModel;

@interface WareNormalCommentCell : WareCommentCell <WareCommentVideoToastViewDelegate>
{
    double itemWidth;
    double itemSpace;
    CommentInfoListModel *_commentInfoListModel;
    WareDetailCommentModel *_wareDetailCommentModel;
    NSMutableArray *_commentVideoArray;
    NewProductModel *_productModel;
    NSString *_mediaId;
    NSMutableArray *_cellVideoArray;
    WareCommentVideoToastView *_videoTostView;
    UIGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UIGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) WareCommentVideoToastView *videoTostView; // @synthesize videoTostView=_videoTostView;
@property(retain, nonatomic) NSMutableArray *cellVideoArray; // @synthesize cellVideoArray=_cellVideoArray;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) NewProductModel *productModel; // @synthesize productModel=_productModel;
@property(retain, nonatomic) NSMutableArray *commentVideoArray; // @synthesize commentVideoArray=_commentVideoArray;
@property(retain, nonatomic) WareDetailCommentModel *wareDetailCommentModel; // @synthesize wareDetailCommentModel=_wareDetailCommentModel;
@property(retain, nonatomic) CommentInfoListModel *commentInfoListModel; // @synthesize commentInfoListModel=_commentInfoListModel;
- (void).cxx_destruct;
- (void)didTapComitVideoToastView:(_Bool)arg1;
- (void)didTapCancelVideoToastView;
- (void)imageTapped:(id)arg1;
- (void)playData:(id)arg1;
- (void)setWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
