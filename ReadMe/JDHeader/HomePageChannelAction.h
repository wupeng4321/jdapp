//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HomePageChannelActionManager, HomePageChannelJumpModel, NSString;

@interface HomePageChannelAction : NSObject
{
    int _pageLevel;
    HomePageChannelActionManager *_actionManager;
    NSString *_eventId;
    NSString *_eventParam;
    NSString *_pageId;
    NSString *_pageName;
    NSString *_pageParam;
    HomePageChannelJumpModel *_jumpModel;
}

@property(retain, nonatomic) HomePageChannelJumpModel *jumpModel; // @synthesize jumpModel=_jumpModel;
@property(nonatomic) int pageLevel; // @synthesize pageLevel=_pageLevel;
@property(copy, nonatomic) NSString *pageParam; // @synthesize pageParam=_pageParam;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) NSString *eventParam; // @synthesize eventParam=_eventParam;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(nonatomic) __weak HomePageChannelActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (void).cxx_destruct;
- (void)recordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithJumpModel:(id)arg1;

@end

