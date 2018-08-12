//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface UP0223AppEvent : NSObject <NSCoding>
{
    int _count;
    NSString *_eventId;
    NSString *_label;
    long long _time;
    NSDictionary *_parameters;
}

@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)messagePack:(struct msgpack_packer *)arg1;

@end

