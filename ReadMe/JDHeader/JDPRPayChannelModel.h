//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDPRPayChannelModel : NSObject
{
    _Bool _canUse;
    _Bool _selected;
    NSString *_channelId;
    NSString *_channelType;
    NSString *_channelName;
    NSString *_channelDesc;
    NSString *_logo;
    NSString *_channelSign;
    long long _type;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *channelSign; // @synthesize channelSign=_channelSign;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(nonatomic) _Bool canUse; // @synthesize canUse=_canUse;
@property(copy, nonatomic) NSString *channelDesc; // @synthesize channelDesc=_channelDesc;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(copy, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDic:(id)arg1;

@end

