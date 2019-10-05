//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WareCommentVideoToastViewDelegate-Protocol.h"

@class CommentInfoListModel, CommentSuperModel, JDButton, JDIcon, JDIconGifLabel, JDIconLabel, JDImageView, JDLabel, NSIndexPath, NSMutableArray, NSString, NewProductModel, UIButton, UILabel, WareCommentRateView, WareCommentVideoToastView;
@protocol PDCommentCollectionViewCellDelegate;

@interface PDCommentCollectionViewCell : UICollectionViewCell <WareCommentVideoToastViewDelegate>
{
    id <PDCommentCollectionViewCellDelegate> _delegate;
    NSMutableArray *_commentsArray;
    NewProductModel *_productModel;
    JDImageView *_mainImageView;
    JDImageView *_mainImageVideoView;
    JDImageView *_userHeaderImgView;
    UILabel *_userInfoLabel;
    JDIcon *_icon;
    JDIconLabel *_plusIcon;
    JDIconGifLabel *_plusGifIcon;
    WareCommentRateView *_rateView;
    UILabel *_detailLabel;
    CommentSuperModel *_superModel;
    JDLabel *_tipLabel;
    NSIndexPath *_indexPath;
    JDButton *_backButton;
    CommentInfoListModel *_commentModel;
    NSString *_testId;
    NSString *_commentId;
    WareCommentVideoToastView *_videoTostView;
    UIButton *_placeholderButton;
}

@property(retain, nonatomic) UIButton *placeholderButton; // @synthesize placeholderButton=_placeholderButton;
@property(retain, nonatomic) WareCommentVideoToastView *videoTostView; // @synthesize videoTostView=_videoTostView;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *testId; // @synthesize testId=_testId;
@property(retain, nonatomic) CommentInfoListModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) JDButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) JDLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) CommentSuperModel *superModel; // @synthesize superModel=_superModel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) WareCommentRateView *rateView; // @synthesize rateView=_rateView;
@property(retain, nonatomic) JDIconGifLabel *plusGifIcon; // @synthesize plusGifIcon=_plusGifIcon;
@property(retain, nonatomic) JDIconLabel *plusIcon; // @synthesize plusIcon=_plusIcon;
@property(retain, nonatomic) JDIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *userInfoLabel; // @synthesize userInfoLabel=_userInfoLabel;
@property(retain, nonatomic) JDImageView *userHeaderImgView; // @synthesize userHeaderImgView=_userHeaderImgView;
@property(retain, nonatomic) JDImageView *mainImageVideoView; // @synthesize mainImageVideoView=_mainImageVideoView;
@property(retain, nonatomic) JDImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(retain, nonatomic) NewProductModel *productModel; // @synthesize productModel=_productModel;
@property(retain, nonatomic) NSMutableArray *commentsArray; // @synthesize commentsArray=_commentsArray;
@property(nonatomic) __weak id <PDCommentCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backButtonDidTapped:(id)arg1;
- (void)videoViewTapped;
- (void)imageTapped;
- (void)didTapComitVideoToastView:(_Bool)arg1;
- (void)didTapCancelVideoToastView;
- (void)commentCardTypeImageTapped:(id)arg1;
- (void)jumpPlusAddress:(id)arg1;
- (void)updateCommentVideoViewWithModel:(id)arg1 withIndexPath:(id)arg2;
- (void)updateCommentInfoViewWithModel:(id)arg1 withIndexPath:(id)arg2;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
