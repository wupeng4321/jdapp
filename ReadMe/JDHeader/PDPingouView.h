//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PDViewProtocol-Protocol.h"

@class JDIconLabel, JDImageView, JDLabel, JDPriceLabel, NSString, UILabel;

@interface PDPingouView : UIView <PDViewProtocol>
{
    JDIconLabel *_pingouTitleLabel;
    UILabel *_pingouDetailLabel;
    UILabel *_yuShouStage1Price;
    UILabel *_yuShouStage1Num;
    UILabel *_yuShouStage2Price;
    UILabel *_yuShouStage2Num;
    UILabel *_yuShouStage3Price;
    UILabel *_yuShouStage3Num;
    JDImageView *_circle1;
    JDImageView *_circle2;
    JDImageView *_circle3;
    UIView *_line1;
    UIView *_line2;
    UILabel *_bookLabel;
    JDPriceLabel *_bookPrice;
    JDLabel *_balanceLabel;
    JDPriceLabel *_balancePrice;
    UIView *_redLine;
    JDImageView *_iconView;
    JDImageView *_yuDingCountIcon;
    UILabel *_yuDingCountLabel;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *yuDingCountLabel; // @synthesize yuDingCountLabel=_yuDingCountLabel;
@property(retain, nonatomic) JDImageView *yuDingCountIcon; // @synthesize yuDingCountIcon=_yuDingCountIcon;
@property(retain, nonatomic) JDImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *redLine; // @synthesize redLine=_redLine;
@property(retain, nonatomic) JDPriceLabel *balancePrice; // @synthesize balancePrice=_balancePrice;
@property(retain, nonatomic) JDLabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) JDPriceLabel *bookPrice; // @synthesize bookPrice=_bookPrice;
@property(retain, nonatomic) UILabel *bookLabel; // @synthesize bookLabel=_bookLabel;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIView *line1; // @synthesize line1=_line1;
@property(retain, nonatomic) JDImageView *circle3; // @synthesize circle3=_circle3;
@property(retain, nonatomic) JDImageView *circle2; // @synthesize circle2=_circle2;
@property(retain, nonatomic) JDImageView *circle1; // @synthesize circle1=_circle1;
@property(retain, nonatomic) UILabel *yuShouStage3Num; // @synthesize yuShouStage3Num=_yuShouStage3Num;
@property(retain, nonatomic) UILabel *yuShouStage3Price; // @synthesize yuShouStage3Price=_yuShouStage3Price;
@property(retain, nonatomic) UILabel *yuShouStage2Num; // @synthesize yuShouStage2Num=_yuShouStage2Num;
@property(retain, nonatomic) UILabel *yuShouStage2Price; // @synthesize yuShouStage2Price=_yuShouStage2Price;
@property(retain, nonatomic) UILabel *yuShouStage1Num; // @synthesize yuShouStage1Num=_yuShouStage1Num;
@property(retain, nonatomic) UILabel *yuShouStage1Price; // @synthesize yuShouStage1Price=_yuShouStage1Price;
@property(retain, nonatomic) UILabel *pingouDetailLabel; // @synthesize pingouDetailLabel=_pingouDetailLabel;
@property(retain, nonatomic) JDIconLabel *pingouTitleLabel; // @synthesize pingouTitleLabel=_pingouTitleLabel;
- (void).cxx_destruct;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

