//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionBaseCell.h"

@class IAMainSessionAwardModel, UIImageView, UILabel;

@interface IAMainSessionAwardCell : IAMainSessionBaseCell
{
    IAMainSessionAwardModel *_awardModel;
    UIImageView *_backImageView;
    UILabel *_awardTipLabel;
}

+ (double)msgContentHeight:(id)arg1;
@property(retain, nonatomic) UILabel *awardTipLabel; // @synthesize awardTipLabel=_awardTipLabel;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) IAMainSessionAwardModel *awardModel; // @synthesize awardModel=_awardModel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configDelegate:(id)arg1;
- (void)configModel:(id)arg1 publicModel:(id)arg2;
- (void)backImageViewClick;
- (void)setupAwardTipLabel;
- (void)setupBackImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
