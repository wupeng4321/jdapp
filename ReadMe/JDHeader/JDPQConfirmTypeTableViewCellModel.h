//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDPQConfirmTypeTableViewCellModel : NSObject
{
    unsigned long long _cellStyle;
    NSString *_payChannelId;
    NSString *_desc;
    NSString *_remark;
    NSString *_telephoneMask;
    NSString *_canUse;
    NSString *_channelType;
    NSString *_channelName;
    NSString *_logo;
    NSString *_cardInfo;
}

@property(copy, nonatomic) NSString *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(copy, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(copy, nonatomic) NSString *canUse; // @synthesize canUse=_canUse;
@property(copy, nonatomic) NSString *telephoneMask; // @synthesize telephoneMask=_telephoneMask;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *payChannelId; // @synthesize payChannelId=_payChannelId;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (void).cxx_destruct;

@end
