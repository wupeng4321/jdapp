//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface ShareOrderAlbumCacheManager : NSObject
{
    unsigned long long _imageCacheLimit;
    NSCache *_imageMemCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *imageMemCache; // @synthesize imageMemCache=_imageMemCache;
@property(nonatomic) unsigned long long imageCacheLimit; // @synthesize imageCacheLimit=_imageCacheLimit;
- (void).cxx_destruct;
- (void)removeAllCaches;
- (void)_memoryWarning;
- (void)removeImageCacheForKey:(id)arg1;
- (id)imageCacheForKey:(id)arg1;
- (void)cacheImage:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;

@end
