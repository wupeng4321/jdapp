//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDVideoRecorderController, NSDictionary;

@protocol JDVideoRecorderControllerDelegate <NSObject>

@optional
- (void)videoRecorderController:(JDVideoRecorderController *)arg1 enventChanged:(long long)arg2 info:(NSDictionary *)arg3;
- (void)videoRecorderController:(JDVideoRecorderController *)arg1 modeChanged:(long long)arg2;
- (void)videoRecorderController:(JDVideoRecorderController *)arg1 didFinishPickingWithInfo:(NSDictionary *)arg2;
@end

