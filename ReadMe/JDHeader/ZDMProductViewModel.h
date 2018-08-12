//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, ZDMProduct;

@interface ZDMProductViewModel : NSObject
{
    ZDMProduct *_product;
}

@property(readonly, nonatomic) ZDMProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *promotionTagTexts;
@property(readonly, nonatomic) NSString *delPriceText;
@property(readonly, nonatomic) NSString *priceText;
@property(readonly, nonatomic) NSString *nonnullPriceText;
@property(readonly, nonatomic) NSString *originalPriceText;
@property(readonly, nonatomic) NSURL *videoImageURL;
@property(readonly, nonatomic) NSURL *activityImageURL;
@property(readonly, nonatomic) NSURL *countryFlagImgURL;
@property(readonly, nonatomic) NSURL *imageURL;
- (id)initWithProduct:(id)arg1;

@end

