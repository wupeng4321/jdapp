//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDPZXWriter-Protocol.h"

@class NSString;

@interface JDPZXOneDimensionalCodeWriter : NSObject <JDPZXWriter>
{
}

- (_Bool *)encode:(id)arg1 length:(int *)arg2;
- (int)defaultMargin;
- (int)appendPattern:(_Bool *)arg1 pos:(int)arg2 pattern:(int *)arg3 patternLen:(int)arg4 startColor:(_Bool)arg5;
- (id)renderResult:(_Bool *)arg1 length:(int)arg2 width:(int)arg3 height:(int)arg4 sidesMargin:(int)arg5;
- (id)encode:(id)arg1 format:(int)arg2 width:(int)arg3 height:(int)arg4 hints:(id)arg5 error:(id *)arg6;
- (id)encode:(id)arg1 format:(int)arg2 width:(int)arg3 height:(int)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
