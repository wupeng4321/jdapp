//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURLResponse;

@interface WJLoginHttpResponse : NSObject
{
    id _content;
    NSURLResponse *_response;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) id content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithFail:(id)arg1 error:(id)arg2;
- (id)initWithSuccess:(id)arg1 content:(id)arg2;

@end

