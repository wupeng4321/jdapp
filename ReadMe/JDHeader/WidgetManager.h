//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WidgetManager : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedWidgetManager;
- (_Bool)widgetInstallAndBrowsed;
- (id)parseURLQueryString:(id)arg1;
- (id)getSecondTopViewController;
- (id)getTopViewController;
- (_Bool)isViewControllerTopStacked:(id)arg1 inNavController:(id)arg2;
- (void)safePush:(id)arg1 animated:(_Bool)arg2;
- (id)currentNavController;
- (void)showAllOrders:(id)arg1;
- (void)showMessageCenter:(id)arg1;
- (void)showCouponsCenter:(id)arg1;
- (void)showProductDetailWithWareId:(id)arg1;
- (void)enterProductDetailPage:(id)arg1;
- (void)enterSecKillHomePage:(id)arg1;
- (void)enterCheckInMPage:(id)arg1;
- (void)handleLaunchingWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

