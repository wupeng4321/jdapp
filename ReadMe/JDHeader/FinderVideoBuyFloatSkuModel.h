//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderJumpModel, NSString;

@interface FinderVideoBuyFloatSkuModel : NSObject
{
    NSString *_title;
    NSString *_img;
    NSString *_skuId;
    NSString *_price;
    NSString *_desc;
    NSString *_displayPrice;
    NSString *_startTime;
    NSString *_endTime;
    FinderJumpModel *_jump;
}

@property(retain, nonatomic) FinderJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *displayPrice; // @synthesize displayPrice=_displayPrice;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
