//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJLoginTLVBase.h"

@class NSString;

@interface WJLoginTLV0x10 : WJLoginTLVBase
{
    NSString *_pin;
}

@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;
- (unsigned long long)getTLVLength;
- (int)decodeFromBuffer:(id)arg1 atLoc:(unsigned long long)arg2;
- (int)encodeWithBuffer:(id)arg1;
- (void)fillTLVWithTLVInfo:(id)arg1;

@end

