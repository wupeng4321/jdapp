//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPTableViewCell.h"

@class SHVPImageView, SHVPProgressView, SHVPSecKillModel, UIImageView, UILabel, UIView;

@interface SHVPSecKillCell : SHVPTableViewCell
{
    long long _explainStartTime;
    CDUnknownBlockType _clickScareBuy;
    CDUnknownBlockType _clickAskExplain;
    CDUnknownBlockType _clickReview;
    CDUnknownBlockType _clickEnterVC;
    SHVPImageView *_skuImageView;
    UILabel *_titleLabel;
    UILabel *_miaoShaPriceLabel;
    UILabel *_jdPriceLabel;
    UILabel *_liveOnlyLabel;
    UILabel *_purchasedLabel;
    UILabel *_buyLabel;
    SHVPProgressView *_progressView;
    UIView *_separatorView;
    UIImageView *_topImageView;
    UIImageView *_numberImageView;
    UILabel *_numberLabel;
    UILabel *_explainLabel;
    UILabel *_reviewLabel;
    SHVPSecKillModel *_secKillModel;
}

@property(retain, nonatomic) SHVPSecKillModel *secKillModel; // @synthesize secKillModel=_secKillModel;
@property(retain, nonatomic) UILabel *reviewLabel; // @synthesize reviewLabel=_reviewLabel;
@property(retain, nonatomic) UILabel *explainLabel; // @synthesize explainLabel=_explainLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIImageView *numberImageView; // @synthesize numberImageView=_numberImageView;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) SHVPProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *buyLabel; // @synthesize buyLabel=_buyLabel;
@property(retain, nonatomic) UILabel *purchasedLabel; // @synthesize purchasedLabel=_purchasedLabel;
@property(retain, nonatomic) UILabel *liveOnlyLabel; // @synthesize liveOnlyLabel=_liveOnlyLabel;
@property(retain, nonatomic) UILabel *jdPriceLabel; // @synthesize jdPriceLabel=_jdPriceLabel;
@property(retain, nonatomic) UILabel *miaoShaPriceLabel; // @synthesize miaoShaPriceLabel=_miaoShaPriceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SHVPImageView *skuImageView; // @synthesize skuImageView=_skuImageView;
@property(copy, nonatomic) CDUnknownBlockType clickEnterVC; // @synthesize clickEnterVC=_clickEnterVC;
@property(copy, nonatomic) CDUnknownBlockType clickReview; // @synthesize clickReview=_clickReview;
@property(copy, nonatomic) CDUnknownBlockType clickAskExplain; // @synthesize clickAskExplain=_clickAskExplain;
@property(copy, nonatomic) CDUnknownBlockType clickScareBuy; // @synthesize clickScareBuy=_clickScareBuy;
- (void).cxx_destruct;
- (void)clickReviewLabel:(id)arg1;
- (void)clickExplainLabel:(id)arg1;
- (void)clickBuyLabelListener:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

