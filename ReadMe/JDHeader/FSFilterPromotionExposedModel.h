//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FSFilterPromotionExposedModel : NSObject
{
    NSString *_promotionID;
    NSString *_promotionName;
    NSString *_promotionImgURL;
    NSString *_promotionSelectedImgURL;
    NSString *_promotionType;
}

@property(copy, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(copy, nonatomic) NSString *promotionSelectedImgURL; // @synthesize promotionSelectedImgURL=_promotionSelectedImgURL;
@property(copy, nonatomic) NSString *promotionImgURL; // @synthesize promotionImgURL=_promotionImgURL;
@property(copy, nonatomic) NSString *promotionName; // @synthesize promotionName=_promotionName;
@property(copy, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
- (void).cxx_destruct;

@end

