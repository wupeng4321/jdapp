//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BJCCActivityItemModel : NSObject
{
    NSString *_iosImg;
    NSString *_shopId;
    NSArray *_jumpUrlList;
    NSString *_activityName;
    long long _jumpType;
}

@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(retain, nonatomic) NSArray *jumpUrlList; // @synthesize jumpUrlList=_jumpUrlList;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *iosImg; // @synthesize iosImg=_iosImg;
- (void).cxx_destruct;

@end

