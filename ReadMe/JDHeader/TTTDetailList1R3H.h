//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTAdsModel, TTTInventoryImageView, TTTInventoryReadNumView, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface TTTDetailList1R3H : TTTBaseView <TTTBaseViewProtocol>
{
    TTTAdsModel *_adsModel;
    JDImageView *_bgImageView;
    JDImageView *_logoView;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    TTTInventoryImageView *_imageView1;
    TTTInventoryImageView *_imageView2;
    TTTInventoryImageView *_imageView3;
    JDImageView *_authorPicView;
    UILabel *_authorNameLabel;
    UILabel *_goodsNumLabel;
    UIImageView *_eyeView;
    UILabel *_readNumLabel;
    TTTInventoryReadNumView *_readNumView;
    UIView *_line;
    UITapGestureRecognizer *_tap;
}

@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) TTTInventoryReadNumView *readNumView; // @synthesize readNumView=_readNumView;
@property(retain, nonatomic) UILabel *readNumLabel; // @synthesize readNumLabel=_readNumLabel;
@property(retain, nonatomic) UIImageView *eyeView; // @synthesize eyeView=_eyeView;
@property(retain, nonatomic) UILabel *goodsNumLabel; // @synthesize goodsNumLabel=_goodsNumLabel;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *authorPicView; // @synthesize authorPicView=_authorPicView;
@property(retain, nonatomic) TTTInventoryImageView *imageView3; // @synthesize imageView3=_imageView3;
@property(retain, nonatomic) TTTInventoryImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(retain, nonatomic) TTTInventoryImageView *imageView1; // @synthesize imageView1=_imageView1;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) JDImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) JDImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) TTTAdsModel *adsModel; // @synthesize adsModel=_adsModel;
- (void).cxx_destruct;
- (void)p_configBottomLine;
- (void)p_hasReadNumViewShow:(_Bool)arg1;
- (void)p_hasReadNumLabelShow:(_Bool)arg1;
- (void)p_hasReadNumShow:(_Bool)arg1 type:(_Bool)arg2;
- (void)p_hasPublisherShow:(_Bool)arg1 productNumShow:(_Bool)arg2;
- (void)p_configAdsList:(_Bool)arg1;
- (void)p_configTitle:(_Bool)arg1 mainTextCenter:(_Bool)arg2 subTextShow:(_Bool)arg3 subTextCenter:(_Bool)arg4 subTextColor:(id)arg5;
- (void)p_hasLogoShow:(_Bool)arg1 isHotLogo:(_Bool)arg2;
- (void)p_configBgView;
- (void)bindDataWithViewModel:(id)arg1;
- (void)setUp;
- (void)viewClick;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

