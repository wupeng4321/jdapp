//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DAPDelegate-Protocol.h"

@class NSString;

@interface JDPayShareDap : NSObject <DAPDelegate>
{
}

+ (id)deviceInfoDict;
+ (void)rsa_trackCustomEvent:(id)arg1;
+ (void)rsa_trackCustomEvent:(id)arg1 customProperties:(id)arg2;
+ (void)trackCustomEvent:(id)arg1;
+ (void)trackCustomEvent:(id)arg1 customProperties:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDAP;
- (id)modelForCustomEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

