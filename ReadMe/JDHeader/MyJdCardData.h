//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MyJdCardCommonInfo, MyJdCardExtendInfoModel, MyJdCardMTAInfo;

@interface MyJdCardData : NSObject
{
    MyJdCardCommonInfo *_commonInfo;
    MyJdCardExtendInfoModel *_extendInfo;
    MyJdCardMTAInfo *_maiDian;
}

@property(retain, nonatomic) MyJdCardMTAInfo *maiDian; // @synthesize maiDian=_maiDian;
@property(retain, nonatomic) MyJdCardExtendInfoModel *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) MyJdCardCommonInfo *commonInfo; // @synthesize commonInfo=_commonInfo;
- (void).cxx_destruct;

@end

