//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class NSString, SSSNewBrandSecKillModel;

@interface SSSNewBrandKillBrandWarpperModel : SecKillBaseModel
{
    SSSNewBrandSecKillModel *_brandInfo;
    NSString *_available;
    NSString *_sourceValue;
}

@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(copy, nonatomic) NSString *available; // @synthesize available=_available;
@property(retain, nonatomic) SSSNewBrandSecKillModel *brandInfo; // @synthesize brandInfo=_brandInfo;
- (void).cxx_destruct;

@end

