//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WJLoginByteBufferNew, WJLoginTLVInfo;

@interface WJLoginTLVEncoderNew : NSObject
{
    WJLoginTLVInfo *_tlvInfo;
    WJLoginByteBufferNew *_buffer;
}

@property(retain, nonatomic) WJLoginByteBufferNew *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) WJLoginTLVInfo *tlvInfo; // @synthesize tlvInfo=_tlvInfo;
- (void).cxx_destruct;
- (unsigned long long)getLength;
- (id)getData;
- (id)initWithTLVInfo:(id)arg1;

@end

