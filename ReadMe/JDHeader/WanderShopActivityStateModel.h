//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WanderBaseModel.h"

@class NSString;

@interface WanderShopActivityStateModel : WanderBaseModel
{
    NSString *_topicState;
    NSString *_dangerUser;
    NSString *_currentTime;
}

@property(readonly, copy, nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, copy, nonatomic) NSString *dangerUser; // @synthesize dangerUser=_dangerUser;
@property(copy, nonatomic) NSString *topicState; // @synthesize topicState=_topicState;
- (void).cxx_destruct;

@end

