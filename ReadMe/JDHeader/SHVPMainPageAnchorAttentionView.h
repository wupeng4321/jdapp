//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, SHVPAuthorLiveReportVIew, SHVPLiveAuthorListModel, UIButton, UIImageView, UILabel;

@interface SHVPMainPageAnchorAttentionView : UIView
{
    SHVPLiveAuthorListModel *_model;
    UIButton *_attentionBtn;
    CDUnknownBlockType _reportBlock;
    CDUnknownBlockType _headTapBlock;
    JDImageView *_headPic;
    UILabel *_nameLab;
    UILabel *_fansNumLab;
    UIImageView *_fansNumBgImg;
    UILabel *_liveStateLab;
    SHVPAuthorLiveReportVIew *_reportView;
}

@property(retain, nonatomic) SHVPAuthorLiveReportVIew *reportView; // @synthesize reportView=_reportView;
@property(retain, nonatomic) UILabel *liveStateLab; // @synthesize liveStateLab=_liveStateLab;
@property(retain, nonatomic) UIImageView *fansNumBgImg; // @synthesize fansNumBgImg=_fansNumBgImg;
@property(retain, nonatomic) UILabel *fansNumLab; // @synthesize fansNumLab=_fansNumLab;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) JDImageView *headPic; // @synthesize headPic=_headPic;
@property(copy, nonatomic) CDUnknownBlockType headTapBlock; // @synthesize headTapBlock=_headTapBlock;
@property(copy, nonatomic) CDUnknownBlockType reportBlock; // @synthesize reportBlock=_reportBlock;
@property(retain, nonatomic) UIButton *attentionBtn; // @synthesize attentionBtn=_attentionBtn;
@property(retain, nonatomic) SHVPLiveAuthorListModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)headTap;
- (void)showReportView;
- (void)configAttentionBtnUI;
- (void)assignData;
- (void)layoutSubviews;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

