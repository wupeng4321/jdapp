//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CategoryPromotionInfoModel : NSObject
{
    long long _catelogyId;
    long long _promotion_id;
    NSString *_mPageAddress;
    NSString *_destination;
    NSString *_target;
    NSString *_imageUrl;
    NSString *_promotionLogUrl;
    NSString *_jumpFlag;
    NSString *_abt;
    NSString *_extension_id;
}

@property(copy, nonatomic) NSString *extension_id; // @synthesize extension_id=_extension_id;
@property(copy, nonatomic) NSString *abt; // @synthesize abt=_abt;
@property(copy, nonatomic) NSString *jumpFlag; // @synthesize jumpFlag=_jumpFlag;
@property(copy, nonatomic) NSString *promotionLogUrl; // @synthesize promotionLogUrl=_promotionLogUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSString *mPageAddress; // @synthesize mPageAddress=_mPageAddress;
@property(nonatomic) long long promotion_id; // @synthesize promotion_id=_promotion_id;
@property(nonatomic) long long catelogyId; // @synthesize catelogyId=_catelogyId;
- (void).cxx_destruct;

@end

