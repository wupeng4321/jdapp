//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MyJdStretchImageCacheManager : NSObject
{
    NSMutableDictionary *_imagesByKey;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *imagesByKey; // @synthesize imagesByKey=_imagesByKey;
- (void).cxx_destruct;
- (id)cachedImageWithKey:(id)arg1;
- (void)cacheImage:(id)arg1 withKey:(id)arg2;
- (_Bool)hasKey:(id)arg1;
- (id)init;

@end
