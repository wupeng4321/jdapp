//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSString;

@interface JDPAPayWayChannelModel : JDPayModel
{
    _Bool _canUse;
    NSString *_payChannelId;
    NSString *_logo;
    NSString *_channelName;
    NSString *_desc;
    NSString *_channelType;
    NSString *_cardInfo;
}

@property(copy, nonatomic) NSString *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(copy, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(nonatomic) _Bool canUse; // @synthesize canUse=_canUse;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *payChannelId; // @synthesize payChannelId=_payChannelId;
- (void).cxx_destruct;

@end

