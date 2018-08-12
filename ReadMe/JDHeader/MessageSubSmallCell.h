//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageCenterCell.h"

#import "JDBaseToastMenuViewDataSource-Protocol.h"
#import "JDBaseToastMenuViewDelegate-Protocol.h"

@class CAShapeLayer, JDSHNavMenuView, NSString, UIButton, UIImageView, UILabel;

@interface MessageSubSmallCell : MessageCenterCell <JDBaseToastMenuViewDataSource, JDBaseToastMenuViewDelegate>
{
    UIButton *_topBtn;
    UIButton *_botBtn;
    UIImageView *_shopLogoImgV;
    UILabel *_shopNameLbl;
    UILabel *_timeLbl;
    UIImageView *_goodImgV;
    UILabel *_titleLbl;
    UILabel *_contentLbl;
    JDSHNavMenuView *_moreButtonTemp;
    CAShapeLayer *_sepLine;
}

+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) CAShapeLayer *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) JDSHNavMenuView *moreButtonTemp; // @synthesize moreButtonTemp=_moreButtonTemp;
@property(retain, nonatomic) UILabel *contentLbl; // @synthesize contentLbl=_contentLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIImageView *goodImgV; // @synthesize goodImgV=_goodImgV;
@property(retain, nonatomic) UILabel *timeLbl; // @synthesize timeLbl=_timeLbl;
@property(retain, nonatomic) UILabel *shopNameLbl; // @synthesize shopNameLbl=_shopNameLbl;
@property(retain, nonatomic) UIImageView *shopLogoImgV; // @synthesize shopLogoImgV=_shopLogoImgV;
@property(retain, nonatomic) UIButton *botBtn; // @synthesize botBtn=_botBtn;
@property(retain, nonatomic) UIButton *topBtn; // @synthesize topBtn=_topBtn;
- (void).cxx_destruct;
- (void)toastView:(id)arg1 didSelectMenuRow:(long long)arg2;
- (id)toastView:(id)arg1 titleForMenuRow:(long long)arg2;
- (id)toastView:(id)arg1 imageForMenuRow:(long long)arg2;
- (long long)numberOfRowsInMenuToastView:(id)arg1;
- (void)jumpShieldShopList:(id)arg1;
- (void)shieldShop:(id)arg1;
- (void)clickBottom:(id)arg1;
- (void)clickTop:(id)arg1;
- (void)setWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)customSmallCellConetent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

