//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandKillExposureManager : NSObject
{
    NSString *_exposureParam;
}

@property(copy, nonatomic) NSString *exposureParam; // @synthesize exposureParam=_exposureParam;
- (void).cxx_destruct;
- (void)reportExposureMTA;
- (void)resetExposureParam;
- (void)updateExposureParam:(id)arg1;
- (void)defaultExposureTableView:(id)arg1 dataSource:(id)arg2;
- (id)init;

@end

