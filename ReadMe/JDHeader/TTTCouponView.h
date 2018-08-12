//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"
#import "TTTCouponItemViewDelegate-Protocol.h"
#import "TTTCouponMutableItemViewDelegate-Protocol.h"

@class JDImageView, NSMutableArray, NSString, TTTFloorModel;

@interface TTTCouponView : TTTBaseView <TTTCouponItemViewDelegate, TTTCouponMutableItemViewDelegate, TTTBaseViewProtocol>
{
    TTTFloorModel *_floorModel;
    JDImageView *_backImageView;
    NSMutableArray *_itemViewsArray;
}

+ (double)getCounponViewHeight:(id)arg1;
+ (double)p_getWay4Height:(id)arg1;
+ (double)p_getWay3Height:(id)arg1;
+ (double)p_getWay12Height:(id)arg1;
@property(retain, nonatomic) NSMutableArray *itemViewsArray; // @synthesize itemViewsArray=_itemViewsArray;
@property(retain, nonatomic) JDImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
- (void).cxx_destruct;
- (struct CGRect)couponViewFrame:(long long)arg1 style:(id)arg2 innerBorder:(_Bool)arg3;
- (struct CGRect)p_adjustDragCouponFrame:(id)arg1;
- (void)receiveTTTDegrade:(id)arg1;
- (void)receiveNewTTTCoupon:(id)arg1;
- (void)receiveTTTCoupon:(id)arg1;
- (void)p_item:(id)arg1 bindData:(id)arg2;
- (void)p_setBackground;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 couponType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

