//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDTestFlightParamHandler : NSObject
{
    NSString *_salt;
}

+ (id)allPermutationsOfArray:(id)arg1;
+ (id)stringFromClasses:(id)arg1;
+ (void)logCodeWithSuccessful:(id)arg1 unsuccessful:(id)arg2;
+ (id)printHex:(id)arg1 WithKey:(id)arg2;
+ (id)printHex:(id)arg1;
+ (id)hashSaltUsingSHA1:(id)arg1;
+ (_Bool)generateCodeWithSaltUnsafe:(id)arg1 WithStrings:(id)arg2 silence:(_Bool)arg3 successfulP:(id *)arg4 unsuccessfulP:(id *)arg5;
+ (_Bool)generateCodeWithSalt:(id)arg1 WithStrings:(id)arg2;
+ (_Bool)generateCodeWithSaltUnsafe:(id)arg1 WithStrings:(id)arg2;
+ (id)reveal:(const char *)arg1 UsingStoredSalt:(id)arg2;
+ (id)newWithSaltUnsafe:(id)arg1;
+ (id)newUsingStoredSalt:(id)arg1;
+ (id)newWithSalt:(Class)arg1;
+ (void)storeKey:(id)arg1 forSalt:(Class)arg2;
@property(retain) NSString *salt; // @synthesize salt=_salt;
- (void).cxx_destruct;
- (char *)convertNSStringtoCString:(id)arg1;
- (id)CStringToNSString:(const char *)arg1;
- (id)reveal:(const char *)arg1;
- (id)hexByObfuscatingString:(id)arg1 silence:(_Bool)arg2;
- (id)hexByObfuscatingString:(id)arg1;

@end

