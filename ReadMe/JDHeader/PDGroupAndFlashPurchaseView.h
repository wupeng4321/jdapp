//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "PDViewProtocol-Protocol.h"

@class JDIconLabel, JDImageView, NSString, UILabel;

@interface PDGroupAndFlashPurchaseView : JDView <PDViewProtocol>
{
    UILabel *_flashPurchaseTipLabel;
    JDIconLabel *_iconLabel;
    UILabel *_groupGoodsTipLabel;
    JDImageView *_groupGoodsImgView;
}

@property(retain, nonatomic) JDImageView *groupGoodsImgView; // @synthesize groupGoodsImgView=_groupGoodsImgView;
@property(retain, nonatomic) UILabel *groupGoodsTipLabel; // @synthesize groupGoodsTipLabel=_groupGoodsTipLabel;
@property(retain, nonatomic) JDIconLabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UILabel *flashPurchaseTipLabel; // @synthesize flashPurchaseTipLabel=_flashPurchaseTipLabel;
- (void).cxx_destruct;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
