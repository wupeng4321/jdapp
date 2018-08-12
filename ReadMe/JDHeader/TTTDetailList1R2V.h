//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTAds1R2_Model, TTTDetailList1R2VUnit, UIView;

@interface TTTDetailList1R2V : TTTBaseView <TTTBaseViewProtocol>
{
    TTTAds1R2_Model *_rowModel;
    JDImageView *_backgroundImageView;
    TTTDetailList1R2VUnit *_leftView;
    TTTDetailList1R2VUnit *_rightView;
    UIView *_seperatorView;
}

@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) TTTDetailList1R2VUnit *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) TTTDetailList1R2VUnit *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) JDImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) TTTAds1R2_Model *rowModel; // @synthesize rowModel=_rowModel;
- (void).cxx_destruct;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

