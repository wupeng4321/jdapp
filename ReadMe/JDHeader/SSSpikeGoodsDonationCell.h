//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseCell.h"

@class SSSpikeGoodsInfoModel, UILabel;

@interface SSSpikeGoodsDonationCell : SecKillBaseCell
{
    SSSpikeGoodsInfoModel *_infoModel;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSSpikeGoodsInfoModel *infoModel; // @synthesize infoModel=_infoModel;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

