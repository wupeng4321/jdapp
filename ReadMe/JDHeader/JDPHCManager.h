//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDPHCManager : NSObject
{
    _Bool isPHCEnabled;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedJDPHCManager;
@property(nonatomic) _Bool isPHCEnabled; // @synthesize isPHCEnabled;
- (void)setPHCEnabled:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
