//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTAdsModel, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface TTTDetailList1R1 : TTTBaseView <TTTBaseViewProtocol>
{
    TTTAdsModel *_adsModel;
    UIView *_whiteBgView;
    UILabel *_mainTitleLabel;
    JDImageView *_imageView;
    UILabel *_authorNameLabel;
    UILabel *_goodsNumLabel;
    UIImageView *_eyeView;
    UILabel *_readNumLabel;
    UIView *_line;
    UITapGestureRecognizer *_tap;
}

@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *readNumLabel; // @synthesize readNumLabel=_readNumLabel;
@property(retain, nonatomic) UIImageView *eyeView; // @synthesize eyeView=_eyeView;
@property(retain, nonatomic) UILabel *goodsNumLabel; // @synthesize goodsNumLabel=_goodsNumLabel;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIView *whiteBgView; // @synthesize whiteBgView=_whiteBgView;
@property(retain, nonatomic) TTTAdsModel *adsModel; // @synthesize adsModel=_adsModel;
- (void).cxx_destruct;
- (void)p_configBottomLine;
- (void)p_hasReadNumShow:(_Bool)arg1;
- (void)p_hasPublisherShow:(_Bool)arg1 productNumShow:(_Bool)arg2;
- (void)p_configTitle;
- (void)p_configImage;
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

