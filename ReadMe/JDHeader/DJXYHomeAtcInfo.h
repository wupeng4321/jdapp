//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DJXYHomeAtcInfo : NSObject
{
    NSString *_authorName;
    NSString *_authorPic;
    long long _skuNum;
    long long _videoFlag;
}

@property(nonatomic) long long videoFlag; // @synthesize videoFlag=_videoFlag;
@property(nonatomic) long long skuNum; // @synthesize skuNum=_skuNum;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
- (void).cxx_destruct;

@end

