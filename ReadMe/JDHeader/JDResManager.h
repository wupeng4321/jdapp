//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDResCache;

@interface JDResManager : NSObject
{
    JDResCache *cache;
}

+ (id)getImageBykey:(id)arg1;
+ (id)manager;
- (void).cxx_destruct;
- (id)getFilePathBykey:(id)arg1;
- (id)init;

@end

