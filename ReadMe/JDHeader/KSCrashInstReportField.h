//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSCString, NSMutableData, NSString;

@interface KSCrashInstReportField : NSObject
{
    unsigned long long _index;
    NSString *_key;
    id _value;
    NSMutableData *_fieldBacking;
    KSCString *_keyBacking;
    KSCString *_valueBacking;
}

+ (id)fieldWithIndex:(unsigned long long)arg1;
@property(retain, nonatomic) KSCString *valueBacking; // @synthesize valueBacking=_valueBacking;
@property(retain, nonatomic) KSCString *keyBacking; // @synthesize keyBacking=_keyBacking;
@property(retain, nonatomic) NSMutableData *fieldBacking; // @synthesize fieldBacking=_fieldBacking;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_91a0c811 *field;
- (id)initWithIndex:(unsigned long long)arg1;

@end

