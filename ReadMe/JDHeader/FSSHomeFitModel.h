//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface FSSHomeFitModel : JDModel
{
    NSString *_storeName;
    NSString *_score;
    NSString *_openingHours;
    NSString *_address;
    NSString *_distance;
    NSString *_storeImg;
    NSArray *_mainCateTags;
    NSString *_goUrl;
}

@property(copy, nonatomic) NSString *goUrl; // @synthesize goUrl=_goUrl;
@property(retain, nonatomic) NSArray *mainCateTags; // @synthesize mainCateTags=_mainCateTags;
@property(copy, nonatomic) NSString *storeImg; // @synthesize storeImg=_storeImg;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *openingHours; // @synthesize openingHours=_openingHours;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
- (void).cxx_destruct;

@end
