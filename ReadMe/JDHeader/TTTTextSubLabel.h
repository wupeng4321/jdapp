//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, TTTAdsModel, TTTTextConfig, UILabel;

@interface TTTTextSubLabel : UIView
{
    JDImageView *_bgImageView;
    UILabel *_label;
    CDUnknownBlockType _tapBlock;
    TTTAdsModel *_adsModel;
    TTTTextConfig *_config;
}

@property(retain, nonatomic) TTTTextConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) TTTAdsModel *adsModel; // @synthesize adsModel=_adsModel;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) JDImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)p_updateLabel;
- (void)p_updateBackground;
- (void)bindData:(id)arg1 configText:(id)arg2 tapBlock:(CDUnknownBlockType)arg3;
- (void)clickText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

