//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FlashProductViewDelegate-Protocol.h"

@class JDButton, JDShopFlashActivityModel, JDShopFlashViewPager, NSObject, NSString, UIImageView, UILabel;
@protocol FlashProductViewDelegate, OS_dispatch_source;

@interface JDNativeShopFlashActivityTemp : UIView <FlashProductViewDelegate>
{
    NSString *shopId_;
    UIImageView *_flashIcon;
    UIImageView *_flashText;
    JDButton *_firstShopFlashDayBtn;
    JDButton *_secondShopFlashDayBtn;
    JDShopFlashViewPager *_firstShopFlashViewPager;
    JDShopFlashViewPager *_secondShopFlashViewPager;
    UILabel *_firstFlashTimeText;
    UILabel *_secondFlashTimeText;
    int count[2];
    NSObject<OS_dispatch_source> *_firstTimer;
    NSObject<OS_dispatch_source> *_secondTimer;
    _Bool _isInitalize;
    id <FlashProductViewDelegate> _btnTapDelegate;
    JDShopFlashActivityModel *_shopFlashActivityModel;
}

@property(retain, nonatomic) JDShopFlashActivityModel *shopFlashActivityModel; // @synthesize shopFlashActivityModel=_shopFlashActivityModel;
@property(nonatomic) _Bool isInitalize; // @synthesize isInitalize=_isInitalize;
@property(nonatomic) id <FlashProductViewDelegate> btnTapDelegate; // @synthesize btnTapDelegate=_btnTapDelegate;
@property(retain, nonatomic) UILabel *m_secondFlashTimeText; // @synthesize m_secondFlashTimeText=_secondFlashTimeText;
@property(retain, nonatomic) UILabel *m_firstFlashTimeText; // @synthesize m_firstFlashTimeText=_firstFlashTimeText;
@property(retain, nonatomic) NSString *m_shopId; // @synthesize m_shopId=shopId_;
- (void)FlashProductMorePromotionTab:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLayoutFrame:(struct CGRect)arg1;
- (void)secondFlashBtnClick:(id)arg1;
- (void)firstFlashBtnClick:(id)arg1;
- (void)setShopFlashData:(id)arg1;
- (void)secondBtnStartCountDown:(int)arg1;
- (void)firstBtnStartCountDown:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

