//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDVideoRecorderTopBar, UIButton;

@protocol JDVideoTopBarDelegate <NSObject>

@optional
- (void)videoTopBar:(JDVideoRecorderTopBar *)arg1 changedFlashMode:(long long)arg2;
- (void)videoTopBar:(JDVideoRecorderTopBar *)arg1 turnCameraWithTag:(long long)arg2;
- (void)videoTopBar:(JDVideoRecorderTopBar *)arg1 clickedCancelBtn:(UIButton *)arg2;
@end
