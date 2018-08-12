//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WJLoginTLVProtocol-Protocol.h"

@class NSString;

@interface WJLoginTLVHeader : NSObject <WJLoginTLVProtocol>
{
    unsigned char _status;
    short _len;
    short _mainCmd;
    short _subCmd;
    short _appID;
    short _version;
    int _partion;
    int _seq;
    int _clientIP;
    long long _uid;
}

@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(nonatomic) short version; // @synthesize version=_version;
@property(nonatomic) short appID; // @synthesize appID=_appID;
@property(nonatomic) short subCmd; // @synthesize subCmd=_subCmd;
@property(nonatomic) short mainCmd; // @synthesize mainCmd=_mainCmd;
@property(nonatomic) int clientIP; // @synthesize clientIP=_clientIP;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) int partion; // @synthesize partion=_partion;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) short len; // @synthesize len=_len;
- (unsigned long long)getHeaderLength;
- (int)decodeFromBuffer:(id)arg1 atLoc:(unsigned long long)arg2;
- (int)encodeWithBuffer:(id)arg1;
- (void)fillHeaderWithTLVInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

