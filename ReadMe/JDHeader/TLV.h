//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface TLV : NSObject <NSCopying>
{
    NSString *_name;
    id _value;
}

+ (id)TLVString:(id)arg1;
+ (id)TLVData:(id)arg1;
+ (id)TLVInt64:(id)arg1;
+ (id)TLVInt32:(id)arg1;
+ (id)TLVInt16:(id)arg1;
+ (id)TLVByte:(id)arg1;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)hasPropertyWithObject:(id)arg1 type:(const char **)arg2;
- (void)reviseNumberWithType:(const char *)arg1 object:(id)arg2;
- (_Bool)storeValueWithObject:(id)arg1;
- (_Bool)storeTLVWithObject:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
