//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface JMAClientCpaHead : NSObject
{
    NSString *_sdkVersion;
    NSString *_partion;
    NSString *_cryptId;
    NSString *_contentLength;
    NSDictionary *_headDic;
}

@property(readonly, nonatomic) NSDictionary *headDic; // @synthesize headDic=_headDic;
@property(copy, nonatomic) NSString *contentLength; // @synthesize contentLength=_contentLength;
@property(copy, nonatomic) NSString *cryptId; // @synthesize cryptId=_cryptId;
@property(copy, nonatomic) NSString *partion; // @synthesize partion=_partion;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void).cxx_destruct;
- (id)toJSON;
- (id)initWithPartion:(long long)arg1 cryptId:(long long)arg2 contentLength:(long long)arg3;

@end
