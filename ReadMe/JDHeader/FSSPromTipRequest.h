//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSSearchBaseRequest.h"

@class NSString;

@interface FSSPromTipRequest : FSSearchBaseRequest
{
    NSString *_keyword;
    NSString *_searchPagePVID;
    NSString *_channelName;
    NSString *_couponbatch;
    NSString *_activityId;
}

@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(copy, nonatomic) NSString *couponbatch; // @synthesize couponbatch=_couponbatch;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(copy, nonatomic) NSString *searchPagePVID; // @synthesize searchPagePVID=_searchPagePVID;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)setupRequest:(id)arg1;

@end

