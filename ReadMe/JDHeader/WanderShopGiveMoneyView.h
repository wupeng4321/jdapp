//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UITapGestureRecognizer, WanderShopStoryModel;

@interface WanderShopGiveMoneyView : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *imageButton_50;
    UIImageView *imageButton_20;
    UIImageView *imageButton_10;
    UITapGestureRecognizer *buttonTap_50;
    UITapGestureRecognizer *buttonTap_20;
    UITapGestureRecognizer *buttonTap_10;
    CDUnknownBlockType _giveMoneyPressed;
    WanderShopStoryModel *_storyModel;
    NSString *_MTAPageIDOfFatherPage;
    NSString *_LASTMTAPageIDOfFatherPage;
    struct CGPoint _currentClickPoint;
}

@property(copy, nonatomic) NSString *LASTMTAPageIDOfFatherPage; // @synthesize LASTMTAPageIDOfFatherPage=_LASTMTAPageIDOfFatherPage;
@property(copy, nonatomic) NSString *MTAPageIDOfFatherPage; // @synthesize MTAPageIDOfFatherPage=_MTAPageIDOfFatherPage;
@property(retain, nonatomic) WanderShopStoryModel *storyModel; // @synthesize storyModel=_storyModel;
@property(nonatomic) struct CGPoint currentClickPoint; // @synthesize currentClickPoint=_currentClickPoint;
@property(copy, nonatomic) CDUnknownBlockType giveMoneyPressed; // @synthesize giveMoneyPressed=_giveMoneyPressed;
- (void).cxx_destruct;
- (void)handleSingleFingerEvent:(id)arg1;
- (void)hideView;
- (void)showAnimation;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
