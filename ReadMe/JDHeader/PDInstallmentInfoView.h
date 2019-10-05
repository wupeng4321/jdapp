//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "PDViewProtocol-Protocol.h"

@class NSString, NewProductModel, UIButton, UIImageView, UILabel;
@protocol PDFloorViewProtocol;

@interface PDInstallmentInfoView : PDFloorBaseView <PDViewProtocol>
{
    id <PDFloorViewProtocol> _delegate;
    NewProductModel *_model;
    UILabel *_downPayTitleLabel;
    UILabel *_downPayLabel;
    UILabel *_downPayDescLabel;
    UILabel *_monthlyPayTitleLabel;
    UILabel *_monthlyPayLabel;
    UILabel *_monthlyPayDescLabel;
    UILabel *_flowTitleLabel;
    UILabel *_flowDescLabel;
    UIButton *_infoIconBtn;
    UIImageView *_infoIcon;
}

@property(retain, nonatomic) UIImageView *infoIcon; // @synthesize infoIcon=_infoIcon;
@property(retain, nonatomic) UIButton *infoIconBtn; // @synthesize infoIconBtn=_infoIconBtn;
@property(retain, nonatomic) UILabel *flowDescLabel; // @synthesize flowDescLabel=_flowDescLabel;
@property(retain, nonatomic) UILabel *flowTitleLabel; // @synthesize flowTitleLabel=_flowTitleLabel;
@property(retain, nonatomic) UILabel *monthlyPayDescLabel; // @synthesize monthlyPayDescLabel=_monthlyPayDescLabel;
@property(retain, nonatomic) UILabel *monthlyPayLabel; // @synthesize monthlyPayLabel=_monthlyPayLabel;
@property(retain, nonatomic) UILabel *monthlyPayTitleLabel; // @synthesize monthlyPayTitleLabel=_monthlyPayTitleLabel;
@property(retain, nonatomic) UILabel *downPayDescLabel; // @synthesize downPayDescLabel=_downPayDescLabel;
@property(retain, nonatomic) UILabel *downPayLabel; // @synthesize downPayLabel=_downPayLabel;
@property(retain, nonatomic) UILabel *downPayTitleLabel; // @synthesize downPayTitleLabel=_downPayTitleLabel;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <PDFloorViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)iconDidTapped:(id)arg1;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
