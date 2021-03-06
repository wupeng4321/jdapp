//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCCouponCenterBaseViewModel.h"

@class BJChoiceCouponModel, NSArray, NSString;

@interface CCChoiceCouponViewModel : CCCouponCenterBaseViewModel
{
}

- (id)colorAndPromoteParams;
- (id)notifyBGImageRemind:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *receivedTitle;
@property(readonly, nonatomic) _Bool isPlusCoupon;
@property(readonly, nonatomic) NSArray *iconImages;
- (id)backgroundColorWithFlag:(_Bool)arg1;
- (void)resetFirstReceiveState;
- (_Bool)isFirstReceiveState;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) BJChoiceCouponModel *model; // @dynamic model;

@end

