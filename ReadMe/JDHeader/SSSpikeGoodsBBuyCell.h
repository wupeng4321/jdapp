//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, SSSpikeGoodsBBuyLabel, SSSpikeGoodsInfoModel, UIImageView, UIView;

@interface SSSpikeGoodsBBuyCell : UITableViewCell
{
    SSSpikeGoodsInfoModel *_infoModel;
    UIImageView *_bBuyView;
    SSSpikeGoodsBBuyLabel *_label1;
    SSSpikeGoodsBBuyLabel *_label2;
    SSSpikeGoodsBBuyLabel *_label3;
    SSSpikeGoodsBBuyLabel *_label4;
    NSArray *_operateList;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) NSArray *operateList; // @synthesize operateList=_operateList;
@property(retain, nonatomic) SSSpikeGoodsBBuyLabel *label4; // @synthesize label4=_label4;
@property(retain, nonatomic) SSSpikeGoodsBBuyLabel *label3; // @synthesize label3=_label3;
@property(retain, nonatomic) SSSpikeGoodsBBuyLabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) SSSpikeGoodsBBuyLabel *label1; // @synthesize label1=_label1;
@property(retain, nonatomic) UIImageView *bBuyView; // @synthesize bBuyView=_bBuyView;
@property(retain, nonatomic) SSSpikeGoodsInfoModel *infoModel; // @synthesize infoModel=_infoModel;
- (void).cxx_destruct;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
