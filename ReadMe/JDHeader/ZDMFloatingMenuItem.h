//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDSHFloatingMenuItem.h"

@class JDAction;

@interface ZDMFloatingMenuItem : JDSHFloatingMenuItem
{
    JDAction *_jdAction;
}

@property(retain, nonatomic) JDAction *jdAction; // @synthesize jdAction=_jdAction;
- (void).cxx_destruct;
- (void)handleAction;
- (id)initWithImageURL:(id)arg1 title:(id)arg2 jdAction:(id)arg3;
- (id)initWithImage:(id)arg1 title:(id)arg2 jdAction:(id)arg3;

@end

