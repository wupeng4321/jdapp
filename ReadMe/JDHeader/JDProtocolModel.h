//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface JDProtocolModel : NSObject
{
    NSURL *_url;
    NSString *_scheme;
    NSString *_functionID;
    NSDictionary *_params;
    NSString *_stringParam;
    NSString *_sourceApplication;
}

+ (id)model;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(copy, nonatomic) NSString *stringParam; // @synthesize stringParam=_stringParam;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *functionID; // @synthesize functionID=_functionID;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end

