//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDShopModel, NSObject, UIImageView, UILabel;
@protocol JDShopHomeFollowViewDelegate, OS_dispatch_source;

@interface JDShopHomeFollowView : UIView
{
    UIImageView *topBgView;
    UIImageView *bottomBgView;
    UIImageView *heartView;
    UILabel *followTipLabel;
    UILabel *followNumTipLabel;
    long long followNum;
    _Bool textAnimationStart;
    _Bool _isDetail;
    _Bool _isFollow;
    id <JDShopHomeFollowViewDelegate> _delegate;
    NSObject<OS_dispatch_source> *_animationTime;
    JDShopModel *_shopModel;
}

@property(retain, nonatomic) JDShopModel *shopModel; // @synthesize shopModel=_shopModel;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *animationTime; // @synthesize animationTime=_animationTime;
@property(nonatomic) id <JDShopHomeFollowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
- (void)dealloc;
- (void)updateFollowNum:(long long)arg1;
- (void)setHiddenIconText:(_Bool)arg1;
- (void)setBgViewImage;
- (void)titleAnimation;
- (void)forbidTapFunction;
- (void)resumeOrStopAnimationtimer:(_Bool)arg1;
- (void)setIsFollow:(_Bool)arg1 animation:(_Bool)arg2;
- (void)longGesture:(id)arg1;
- (void)tapGesture;
- (id)initWithFrame:(struct CGPoint)arg1 shopInfo:(id)arg2 detail:(_Bool)arg3;

@end

