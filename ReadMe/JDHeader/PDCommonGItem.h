//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDCommonGItem : NSObject
{
    NSString *_imgText;
    NSString *_imgUrl;
    NSString *_jumpUrl;
    long long _jumpType;
    NSString *_imgTextC;
    NSString *_imgTextBgC;
}

@property(copy, nonatomic) NSString *imgTextBgC; // @synthesize imgTextBgC=_imgTextBgC;
@property(copy, nonatomic) NSString *imgTextC; // @synthesize imgTextC=_imgTextC;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *imgText; // @synthesize imgText=_imgText;
- (void).cxx_destruct;

@end
