//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class NSString, NSTimer, SCShopCartBubblePromotionView, SCShopCartCaptionPromotionView;
@protocol SCShopCartChangeBestPromotionDelegate;

@interface SCShopCartBestPromotionView : JDView
{
    _Bool _loadStatus;
    _Bool _captionShowBool;
    _Bool _animationBool;
    id <SCShopCartChangeBestPromotionDelegate> _promotionDelegate;
    double _stayDuration;
    SCShopCartBubblePromotionView *_bubbleView;
    SCShopCartCaptionPromotionView *_captionView;
    double _offY;
    NSTimer *_timer;
    double _gapRightBound;
    NSString *_bestPromotionSavePrice;
    long long _promotionSwitchStatus;
}

+ (id)getBestPromotionView;
@property(nonatomic) long long promotionSwitchStatus; // @synthesize promotionSwitchStatus=_promotionSwitchStatus;
@property(copy, nonatomic) NSString *bestPromotionSavePrice; // @synthesize bestPromotionSavePrice=_bestPromotionSavePrice;
@property(nonatomic) double gapRightBound; // @synthesize gapRightBound=_gapRightBound;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool animationBool; // @synthesize animationBool=_animationBool;
@property(nonatomic) double offY; // @synthesize offY=_offY;
@property(nonatomic) _Bool captionShowBool; // @synthesize captionShowBool=_captionShowBool;
@property(retain, nonatomic) SCShopCartCaptionPromotionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) SCShopCartBubblePromotionView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) _Bool loadStatus; // @synthesize loadStatus=_loadStatus;
@property(nonatomic) double stayDuration; // @synthesize stayDuration=_stayDuration;
@property(nonatomic) __weak id <SCShopCartChangeBestPromotionDelegate> promotionDelegate; // @synthesize promotionDelegate=_promotionDelegate;
- (void).cxx_destruct;
- (void)timepp;
- (void)stopTimer;
- (void)startTimer;
- (double)gapRightCaption;
- (struct CGRect)bubbleViewFrame;
- (struct CGRect)captionViewShowFrame;
- (struct CGRect)captionViewHiddenFrame;
- (void)reloadPromotionView;
- (void)hiddenCaption;
- (void)showCaption;
- (void)setPromotionStatus:(_Bool)arg1;
- (void)recordAutoCaption;
- (void)recordAutoBubble;
- (void)recordTapBubble;
- (_Bool)getBestPromotionCaptionStatusPoint;
- (void)tapCaptionView;
- (void)tapBubbleView;
- (_Bool)isFirstLoadPromotion;
- (void)setPromotionViewStatus:(long long)arg1 optimalPromotion:(id)arg2 savePrice:(id)arg3 offY:(double)arg4;
- (void)loadingStatus:(_Bool)arg1;
- (void)hideViewAndShowBubbleNextTime;
- (void)setFrameWidth:(double)arg1 offY:(double)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

