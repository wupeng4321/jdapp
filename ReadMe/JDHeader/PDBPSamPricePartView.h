//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDIcon, JDLabel, PDBPContainerDataModel, UIButton;

@interface PDBPSamPricePartView : UIView
{
    _Bool _isDisplayInfoIcon;
    JDLabel *_samPriceLabel;
    JDIcon *_samPriceIcon;
    UIButton *_samInfoIcon;
    PDBPContainerDataModel *_model;
}

@property(retain, nonatomic) PDBPContainerDataModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *samInfoIcon; // @synthesize samInfoIcon=_samInfoIcon;
@property(retain, nonatomic) JDIcon *samPriceIcon; // @synthesize samPriceIcon=_samPriceIcon;
@property(retain, nonatomic) JDLabel *samPriceLabel; // @synthesize samPriceLabel=_samPriceLabel;
@property(nonatomic) _Bool isDisplayInfoIcon; // @synthesize isDisplayInfoIcon=_isDisplayInfoIcon;
- (void).cxx_destruct;
- (void)samInfoBtnDidTappedMTA;
- (void)samInfoBtnDidTapped:(id)arg1;
- (void)renderUIWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
