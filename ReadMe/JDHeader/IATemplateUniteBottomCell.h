//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionBaseCell.h"

@class IATemplateUniteBottomModel, UIButton;

@interface IATemplateUniteBottomCell : IAMainSessionBaseCell
{
    UIButton *_otherBtn;
    IATemplateUniteBottomModel *_iaTemplateUniteBottomModel;
}

@property(retain, nonatomic) IATemplateUniteBottomModel *iaTemplateUniteBottomModel; // @synthesize iaTemplateUniteBottomModel=_iaTemplateUniteBottomModel;
@property(retain, nonatomic) UIButton *otherBtn; // @synthesize otherBtn=_otherBtn;
- (void).cxx_destruct;
- (void)configDelegate:(id)arg1;
- (void)btnClick:(id)arg1;
- (void)configModel:(id)arg1 publicModel:(id)arg2;
- (void)customLayout;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

