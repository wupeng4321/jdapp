//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDStoryModule : NSObject
{
}

+ (void)goCircleDetail:(id)arg1;
+ (void)goActiveDetail:(id)arg1;
+ (void)goToActiveList;
+ (void)goStoryDetail:(id)arg1;
+ (void)goMainStory;
+ (void)goActivityPK:(id)arg1;
+ (id)currentNavigationController;
+ (void)callbackError:(CDUnknownBlockType)arg1 Msg:(id)arg2 userinfo:(id)arg3;
+ (id)deal:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDStoryModule_get:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDStoryModule_show:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDStoryModule_goStorySubController:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDStoryModule_pushToStory:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

