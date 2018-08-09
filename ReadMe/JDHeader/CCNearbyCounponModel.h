//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSDictionary, NSString, UIColor;

@interface CCNearbyCounponModel : JDModel
{
    int _type;
    int _grabStatus;
    int _distance;
    int _couponType;
    UIColor *_bgColor;
    NSString *_couponId;
    NSString *_title;
    NSString *_logo;
    long long _storeId;
    NSString *_storeName;
    NSString *_distanceDesc;
    NSString *_minOrderAmount;
    NSString *_quota;
    NSDictionary *_home;
    NSDictionary *_jpass;
    NSString *_goUrl;
}

@property(retain, nonatomic) NSString *goUrl; // @synthesize goUrl=_goUrl;
@property(retain, nonatomic) NSDictionary *jpass; // @synthesize jpass=_jpass;
@property(retain, nonatomic) NSDictionary *home; // @synthesize home=_home;
@property(nonatomic) int couponType; // @synthesize couponType=_couponType;
@property(retain, nonatomic) NSString *quota; // @synthesize quota=_quota;
@property(retain, nonatomic) NSString *minOrderAmount; // @synthesize minOrderAmount=_minOrderAmount;
@property(retain, nonatomic) NSString *distanceDesc; // @synthesize distanceDesc=_distanceDesc;
@property(nonatomic) int distance; // @synthesize distance=_distance;
@property(nonatomic) int grabStatus; // @synthesize grabStatus=_grabStatus;
@property(retain, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

