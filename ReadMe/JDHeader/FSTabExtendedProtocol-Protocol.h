//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSSearchService, NSString, UIViewController;

@protocol FSTabExtendedProtocol <NSObject>
- (NSString *)showRedPointTimekey;
- (NSString *)notShowRedPointkey;
- (void)extendedClickInterfaceWithService:(FSSearchService *)arg1;
- (void)extendedExpoInterfaceWithService:(FSSearchService *)arg1;
- (NSString *)extendedTipImageName;
- (_Bool)removeExtendedChildViewControllerFromParentController;
- (void)resetExtendedSubViewFrame:(struct CGRect)arg1;
- (void)addExtendedChildViewControllerInParentController:(UIViewController *)arg1 frame:(struct CGRect)arg2 service:(FSSearchService *)arg3;
@end
