//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableArray, NSString;

@interface BJGiftWealCouponModel : JDModel
{
    NSMutableArray *_welfareCouponItems;
    NSMutableArray *_giftPackageItems;
    NSString *_giftPackageTitle;
    NSString *_giftPackageId;
    NSString *_giftPackageSuccessMsg;
    NSString *_gift_enter_text;
    long long _totalCount;
    NSString *_bannerImage;
    NSString *_walfare_first_text;
    NSString *_walfare_second_text;
    NSString *_walfare_third_text;
}

@property(copy, nonatomic) NSString *walfare_third_text; // @synthesize walfare_third_text=_walfare_third_text;
@property(copy, nonatomic) NSString *walfare_second_text; // @synthesize walfare_second_text=_walfare_second_text;
@property(copy, nonatomic) NSString *walfare_first_text; // @synthesize walfare_first_text=_walfare_first_text;
@property(copy, nonatomic) NSString *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSString *gift_enter_text; // @synthesize gift_enter_text=_gift_enter_text;
@property(copy, nonatomic) NSString *giftPackageSuccessMsg; // @synthesize giftPackageSuccessMsg=_giftPackageSuccessMsg;
@property(copy, nonatomic) NSString *giftPackageId; // @synthesize giftPackageId=_giftPackageId;
@property(copy, nonatomic) NSString *giftPackageTitle; // @synthesize giftPackageTitle=_giftPackageTitle;
@property(retain, nonatomic) NSMutableArray *giftPackageItems; // @synthesize giftPackageItems=_giftPackageItems;
@property(retain, nonatomic) NSMutableArray *welfareCouponItems; // @synthesize welfareCouponItems=_welfareCouponItems;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

