//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "PDViewProtocol-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface PDYuyueLiuCheng_B_View : PDFloorBaseView <PDViewProtocol>
{
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    UILabel *_thirdLabel;
    UIView *_firstLine;
    UIView *_secondLine;
    UIImageView *_buyTimeImgV;
    UILabel *_buyTimeLabel;
    UIImageView *_buyTimeArrImgV;
}

@property(retain, nonatomic) UIImageView *buyTimeArrImgV; // @synthesize buyTimeArrImgV=_buyTimeArrImgV;
@property(retain, nonatomic) UILabel *buyTimeLabel; // @synthesize buyTimeLabel=_buyTimeLabel;
@property(retain, nonatomic) UIImageView *buyTimeImgV; // @synthesize buyTimeImgV=_buyTimeImgV;
@property(retain, nonatomic) UIView *secondLine; // @synthesize secondLine=_secondLine;
@property(retain, nonatomic) UIView *firstLine; // @synthesize firstLine=_firstLine;
@property(retain, nonatomic) UILabel *thirdLabel; // @synthesize thirdLabel=_thirdLabel;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
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

