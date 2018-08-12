//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

#import "PDFloorViewProtocol-Protocol.h"

@class NSString, NewProductModel, PDInstallmentInfoPopupView, PDInstallmentInfoView;

@interface PDInstallmentInfoViewModel : PDFloorBaseViewModel <PDFloorViewProtocol>
{
    NewProductModel *_model;
    PDInstallmentInfoView *_installmentInfoView;
    PDInstallmentInfoPopupView *_installmentInfoPopupView;
}

+ (void)load;
@property(retain, nonatomic) PDInstallmentInfoPopupView *installmentInfoPopupView; // @synthesize installmentInfoPopupView=_installmentInfoPopupView;
@property(retain, nonatomic) PDInstallmentInfoView *installmentInfoView; // @synthesize installmentInfoView=_installmentInfoView;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)floorTapped:(id)arg1;
- (void)renderUIWithProductModel:(id)arg1;
- (void)refreshViewForFloorTemplate;
- (void)resetState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

