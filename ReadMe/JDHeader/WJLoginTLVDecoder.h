//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WJLoginByteBuffer;

@interface WJLoginTLVDecoder : NSObject
{
    WJLoginByteBuffer *_buffer;
    unsigned long long _atLoc;
}

@property(nonatomic) unsigned long long atLoc; // @synthesize atLoc=_atLoc;
@property(retain, nonatomic) WJLoginByteBuffer *buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
- (id)getResponseInfo:(id *)arg1;
- (id)initWithData:(id)arg1;

@end

