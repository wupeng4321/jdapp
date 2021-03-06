//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

@class JDImageView, PDBPContainerDataModel, PDBPYushouCountDownTimerView, UILabel;

@interface PDBPYushouFloorView : PDFloorBaseView
{
    JDImageView *_mainImageView;
    PDBPYushouCountDownTimerView *_countDownTimerView;
    UILabel *_bookPriceLabel;
    UILabel *_bookCountLabel;
    PDBPContainerDataModel *_model;
}

@property(retain, nonatomic) PDBPContainerDataModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *bookCountLabel; // @synthesize bookCountLabel=_bookCountLabel;
@property(retain, nonatomic) UILabel *bookPriceLabel; // @synthesize bookPriceLabel=_bookPriceLabel;
@property(retain, nonatomic) PDBPYushouCountDownTimerView *countDownTimerView; // @synthesize countDownTimerView=_countDownTimerView;
@property(retain, nonatomic) JDImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
- (void).cxx_destruct;
- (void)layoutUseTwoLine;
- (void)layoutUseOneLine;
- (_Bool)canDisplayOneLine;
- (void)configBookCountLabel;
- (void)configPriceLabel:(_Bool)arg1;
- (void)defaultLayout;
- (void)renderUIWithData:(id)arg1;
- (void)stopTimer;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

