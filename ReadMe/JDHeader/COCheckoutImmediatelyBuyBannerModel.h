//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class COCheckoutImmediatelyBuyCountDownTimeModel, COCheckoutImmediatelyBuyHistoryPriceModel, COCheckoutImmediatelyBuyProgressBarModel, NSString;

@interface COCheckoutImmediatelyBuyBannerModel : NSObject
{
    COCheckoutImmediatelyBuyHistoryPriceModel *_priceHistoryModel;
    COCheckoutImmediatelyBuyProgressBarModel *_progressBarModel;
    COCheckoutImmediatelyBuyCountDownTimeModel *_countDownTimeModel;
    NSString *_onlyOneItemImage;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *onlyOneItemImage; // @synthesize onlyOneItemImage=_onlyOneItemImage;
@property(retain, nonatomic) COCheckoutImmediatelyBuyCountDownTimeModel *countDownTimeModel; // @synthesize countDownTimeModel=_countDownTimeModel;
@property(retain, nonatomic) COCheckoutImmediatelyBuyProgressBarModel *progressBarModel; // @synthesize progressBarModel=_progressBarModel;
@property(retain, nonatomic) COCheckoutImmediatelyBuyHistoryPriceModel *priceHistoryModel; // @synthesize priceHistoryModel=_priceHistoryModel;
- (void).cxx_destruct;

@end

