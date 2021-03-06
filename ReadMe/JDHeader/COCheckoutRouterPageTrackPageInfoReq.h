//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface COCheckoutRouterPageTrackPageInfoReq : NSObject
{
    unsigned long long _pageLevel;
    NSString *_pageId;
    NSString *_pageParam;
    NSString *_eventId;
    NSString *_eventParam;
    NSDictionary *_ext;
    NSString *_level;
}

+ (id)replacedKeyFromPropertyName;
+ (id)allowedPropertyNames;
@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *eventParam; // @synthesize eventParam=_eventParam;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *pageParam; // @synthesize pageParam=_pageParam;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(nonatomic) unsigned long long pageLevel; // @synthesize pageLevel=_pageLevel;
- (void).cxx_destruct;

@end

