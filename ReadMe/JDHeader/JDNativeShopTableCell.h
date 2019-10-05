//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDNativeShopAllProductTemp, JDNativeShopDoubleActivityTemp, JDNativeShopFlashActivityTemp, JDNativeShopFourActivityTemp, JDNativeShopFreeLayoutView, JDNativeShopFreeStyleEightTemp, JDNativeShopFreeStyleNineTemp, JDNativeShopFreeStyleSevenTemp, JDNativeShopFreeStyleSixTemp, JDNativeShopFreeStyleTextTemp, JDNativeShopFreeStyleThreeTemp, JDNativeShopHotAreaView, JDNativeShopLiveView, JDNativeShopProductRecTemp, JDNativeShopSingleActivityTemp, JDNativeShopTemplateFloor, JDNativeShopVideoView, JDNativeShopaAdTemp, UIView;

@interface JDNativeShopTableCell : UITableViewCell
{
    JDNativeShopSingleActivityTemp *singleActivityTemp_;
    JDNativeShopDoubleActivityTemp *doubleActivityTemp_;
    JDNativeShopFourActivityTemp *fourActivityTemp_;
    JDNativeShopProductRecTemp *productRecTemp_;
    JDNativeShopFreeStyleSixTemp *freeStyleSixTemp_;
    JDNativeShopFreeStyleEightTemp *freeStyleEightTemp_;
    JDNativeShopFreeStyleSevenTemp *freeStyleSevenTemp_;
    JDNativeShopFreeStyleNineTemp *freeStyleNineTemp_;
    JDNativeShopAllProductTemp *allProductTemp_;
    JDNativeShopaAdTemp *adTemp_;
    JDNativeShopFlashActivityTemp *shopFlashTemp_;
    JDNativeShopFreeStyleThreeTemp *freeStyleThreeTemp_;
    JDNativeShopFreeStyleTextTemp *freeStyleTextTemp_;
    JDNativeShopFreeLayoutView *freeLayoutView_;
    UIView *m_splitView;
    _Bool _isFirstFloor;
    _Bool _isLastFloor;
    _Bool _isOnlyHasOneTemplateFloor;
    JDNativeShopHotAreaView *_shopHotAreaView;
    JDNativeShopTemplateFloor *_templateFloor;
    JDNativeShopVideoView *_videoView;
    JDNativeShopLiveView *_liveView;
}

@property(nonatomic) _Bool isOnlyHasOneTemplateFloor; // @synthesize isOnlyHasOneTemplateFloor=_isOnlyHasOneTemplateFloor;
@property(nonatomic) _Bool isLastFloor; // @synthesize isLastFloor=_isLastFloor;
@property(nonatomic) _Bool isFirstFloor; // @synthesize isFirstFloor=_isFirstFloor;
@property(retain, nonatomic) JDNativeShopLiveView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) JDNativeShopVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) JDNativeShopTemplateFloor *templateFloor; // @synthesize templateFloor=_templateFloor;
@property(retain, nonatomic) JDNativeShopHotAreaView *shopHotAreaView; // @synthesize shopHotAreaView=_shopHotAreaView;
@property(retain, nonatomic) JDNativeShopFreeLayoutView *m_freeLayoutView; // @synthesize m_freeLayoutView=freeLayoutView_;
@property(retain, nonatomic) JDNativeShopFreeStyleThreeTemp *m_freeStyleThreeTemp; // @synthesize m_freeStyleThreeTemp=freeStyleThreeTemp_;
@property(retain, nonatomic) JDNativeShopFreeStyleTextTemp *m_freeStyleTextTemp; // @synthesize m_freeStyleTextTemp=freeStyleTextTemp_;
@property(retain, nonatomic) JDNativeShopFlashActivityTemp *m_shopFlashTemp; // @synthesize m_shopFlashTemp=shopFlashTemp_;
@property(retain, nonatomic) JDNativeShopaAdTemp *m_adTemp; // @synthesize m_adTemp=adTemp_;
@property(retain, nonatomic) JDNativeShopAllProductTemp *m_allProductTemp; // @synthesize m_allProductTemp=allProductTemp_;
@property(retain, nonatomic) JDNativeShopFreeStyleNineTemp *m_freeStyleNineTemp; // @synthesize m_freeStyleNineTemp=freeStyleNineTemp_;
@property(retain, nonatomic) JDNativeShopFreeStyleSevenTemp *m_freeStyleSevenTemp; // @synthesize m_freeStyleSevenTemp=freeStyleSevenTemp_;
@property(retain, nonatomic) JDNativeShopFreeStyleEightTemp *m_freeStyleEightTemp; // @synthesize m_freeStyleEightTemp=freeStyleEightTemp_;
@property(retain, nonatomic) JDNativeShopFreeStyleSixTemp *m_freeStyleSixTemp; // @synthesize m_freeStyleSixTemp=freeStyleSixTemp_;
@property(retain, nonatomic) JDNativeShopProductRecTemp *m_productRecTemp; // @synthesize m_productRecTemp=productRecTemp_;
@property(retain, nonatomic) JDNativeShopFourActivityTemp *m_fourActivityTemp; // @synthesize m_fourActivityTemp=fourActivityTemp_;
@property(retain, nonatomic) JDNativeShopDoubleActivityTemp *m_doubleActivityTemp; // @synthesize m_doubleActivityTemp=doubleActivityTemp_;
@property(retain, nonatomic) JDNativeShopSingleActivityTemp *m_singleActivityTemp; // @synthesize m_singleActivityTemp=singleActivityTemp_;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
