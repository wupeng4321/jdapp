//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol JDMockerProtoDelegate;

@interface JDMockerURLSessionConfiguration : NSObject
{
    _Bool _isSwizzle;
    id <JDMockerProtoDelegate> _protocolDelegate;
    NSString *_serverAddress;
}

+ (id)defaultConfiguration;
@property(copy, nonatomic) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(retain, nonatomic) id <JDMockerProtoDelegate> protocolDelegate; // @synthesize protocolDelegate=_protocolDelegate;
@property(nonatomic) _Bool isSwizzle; // @synthesize isSwizzle=_isSwizzle;
- (void).cxx_destruct;
- (id)protocolClasses;
- (void)swizzleSelector:(SEL)arg1 fromClass:(Class)arg2 toClass:(Class)arg3;
- (void)unload;
- (void)load;
- (id)init;

@end

