//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJLoginTLVBase.h"

@interface WJLoginTLV0x14 : WJLoginTLVBase
{
    unsigned char _cReportType;
}

@property(nonatomic) unsigned char cReportType; // @synthesize cReportType=_cReportType;
- (unsigned long long)getTLVLength;
- (int)encodeWithBuffer:(id)arg1;
- (void)fillTLVWithTLVInfo:(id)arg1;

@end

