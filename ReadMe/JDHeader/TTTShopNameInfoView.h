//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTShopInfoView, TTTShopModel, TTTShopNameView, UIButton;

@interface TTTShopNameInfoView : TTTBaseView <TTTBaseViewProtocol>
{
    JDImageView *_logoImageView;
    TTTShopNameView *_nameView;
    TTTShopInfoView *_infoView;
    UIButton *_shopButton;
    TTTShopModel *_shopModel;
}

@property(nonatomic) __weak TTTShopModel *shopModel; // @synthesize shopModel=_shopModel;
@property(retain, nonatomic) UIButton *shopButton; // @synthesize shopButton=_shopButton;
@property(retain, nonatomic) TTTShopInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) TTTShopNameView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) JDImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (struct CGRect)shopButtonFrameForRight;
- (struct CGRect)shopButtonFrameForBigView;
- (struct CGRect)shopButtonFrame;
- (struct CGRect)infoViewFrame;
- (struct CGRect)shopNameFrame;
- (struct CGRect)logoFrame;
- (void)updateToCommonButtonWithHex:(id)arg1;
- (void)updateToCommonButton;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

