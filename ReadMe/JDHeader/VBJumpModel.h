//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JumpToNativeModelProtocol-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString, ShareModel;

@interface VBJumpModel : NSObject <JumpToNativeModelProtocol, NSCoding, NSCopying>
{
    NSString *_des;
    NSDictionary *_params;
    NSString *_srv;
    NSString *_eventId;
}

@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *srv; // @synthesize srv=_srv;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool noAnimate;
@property(retain, nonatomic) ShareModel *shareModel;
@property(readonly) Class superclass;

@end

