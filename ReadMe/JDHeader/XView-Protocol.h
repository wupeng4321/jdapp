//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class NSString;

@protocol XView <JSExport>
- (void)configXView:(NSString *)arg1;
- (void)configCloseButtonWithString:(NSString *)arg1 float:(float)arg2 float:(float)arg3;
- (void)close;

@optional
- (void)configCloseButtonWithString:(NSString *)arg1 float:(float)arg2 float:(float)arg3 __JS_EXPORT_AS__configCloseButton:(id)arg4;
@end

