//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayURLRequest.h"

@class NSDictionary, NSString;

@interface JDPayBizURLRequest : JDPayURLRequest
{
    NSDictionary *_paramDict;
    NSString *_encryptKey;
    NSString *_module;
}

@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(copy, nonatomic) NSDictionary *paramDict; // @synthesize paramDict=_paramDict;
- (void).cxx_destruct;

@end

