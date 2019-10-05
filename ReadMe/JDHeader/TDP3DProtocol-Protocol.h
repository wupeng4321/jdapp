//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TDP3DProtocol <NSObject>
- (int)getSceneType;
- (long long)loadSceneWithPath:(NSString *)arg1;
- (void)onSensorChanged:(int)arg1 timestamp:(long long)arg2 values:(float *)arg3;
- (void)setOrientationValue:(float)arg1;
- (void)onRotation:(float)arg1 y:(float)arg2 z:(float)arg3;
- (int)loadOpenBox:(const char *)arg1 password:(const char *)arg2;
- (int)loadShakeBox:(const char *)arg1 password:(const char *)arg2;
- (void)SetShowBox:(_Bool)arg1;
@end
