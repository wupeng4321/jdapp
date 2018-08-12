//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "PDViewProtocol-Protocol.h"

@class JDImageView, NSString, NewProductModel, UILabel;

@interface PDJxServiceFloorView : PDFloorBaseView <PDViewProtocol>
{
    JDImageView *_floorImageV;
    UILabel *_titleLabel;
    UILabel *_titleDescLabel;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *titleDescLabel; // @synthesize titleDescLabel=_titleDescLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *floorImageV; // @synthesize floorImageV=_floorImageV;
- (void).cxx_destruct;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (void)gotoJxPage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

