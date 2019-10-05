//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPPaymentCombinChannelModel, NSArray, NSString;

@interface JDPCombinInfoViewParamModel : NSObject
{
    NSArray *_combinList;
    NSString *_commendChannel;
    JDPPaymentCombinChannelModel *_topChannel;
    NSString *_desc;
    NSString *_combinTips;
    NSString *_goBack;
}

@property(copy, nonatomic) NSString *goBack; // @synthesize goBack=_goBack;
@property(copy, nonatomic) NSString *combinTips; // @synthesize combinTips=_combinTips;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) JDPPaymentCombinChannelModel *topChannel; // @synthesize topChannel=_topChannel;
@property(retain, nonatomic) NSString *commendChannel; // @synthesize commendChannel=_commendChannel;
@property(copy, nonatomic) NSArray *combinList; // @synthesize combinList=_combinList;
- (void).cxx_destruct;
- (void)replaceCouponArray:(id)arg1 inChannelModel:(id)arg2;
- (void)changeCouponWithIdentifier:(id)arg1 inChannelModel:(id)arg2;
- (void)changePlanWithIdentifier:(id)arg1 inChannelModel:(id)arg2;
- (void)changeCommendCombinChannelWithIdentifier:(id)arg1;
- (id)payTypeArrayFromCombinList;
- (id)channelModelWithIdentifier:(id)arg1;
- (id)commendCombinChannelModel;

@end
