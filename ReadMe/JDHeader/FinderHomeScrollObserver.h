//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FinderHomeScrollObserver : NSObject
{
    NSMutableArray *_container;
    double _beginOffsetY;
    _Bool _isExtend;
    CDUnknownBlockType _extendCallback;
}

+ (id)defaultObserver;
@property(copy, nonatomic) CDUnknownBlockType extendCallback; // @synthesize extendCallback=_extendCallback;
- (void).cxx_destruct;
- (_Bool)isExpress;
- (void)layoutScrollView;
@property(readonly, nonatomic) _Bool isExtend;
- (void)extend:(_Bool)arg1;
- (void)unRegisterItem:(id)arg1;
- (void)offsetChanged:(double)arg1;
- (void)pan:(id)arg1;
- (void)reset;
- (void)registerItem:(id)arg1;
- (id)init;

@end
