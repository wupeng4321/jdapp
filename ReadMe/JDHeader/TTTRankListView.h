//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTAdsModel, TTTRankListContentView, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface TTTRankListView : TTTBaseView <TTTBaseViewProtocol>
{
    TTTAdsModel *_adsModel;
    JDImageView *_bgImageView;
    UILabel *_rankLabel;
    UILabel *_titleLabel;
    TTTRankListContentView *_contentView;
    JDImageView *_authorPicView;
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
@property(retain, nonatomic) JDImageView *authorPicView; // @synthesize authorPicView=_authorPicView;
@property(retain, nonatomic) TTTRankListContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) JDImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) TTTAdsModel *adsModel; // @synthesize adsModel=_adsModel;
- (void).cxx_destruct;
- (double)resizeString:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3;
- (void)bindDataWithViewModel:(id)arg1;
- (void)viewClick;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

