//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class NSArray, NSString, SSSJumpModel;

@interface SingleKillSpikeGoodsProductModel : SecKillBaseModel
{
    NSString *_productId;
    NSString *_sourceValue;
    NSString *_name;
    NSString *_imageUrl;
    NSString *_price;
    NSString *_status;
    NSArray *_buyReasons;
    SSSJumpModel *_jump;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) SSSJumpModel *jump; // @synthesize jump=_jump;
@property(retain, nonatomic) NSArray *buyReasons; // @synthesize buyReasons=_buyReasons;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;

@end

