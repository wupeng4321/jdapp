//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDVideoEditorController, NSString;

@protocol JDVideoEditorControllerDelegate <NSObject>

@optional
- (void)jd_videoEditorControllerDidCancel:(JDVideoEditorController *)arg1;
- (void)jd_videoEditorController:(JDVideoEditorController *)arg1 didSaveEditedVideoToPath:(NSString *)arg2 filterType:(NSString *)arg3 isTrimmed:(_Bool)arg4;
- (void)jd_videoEditorController:(JDVideoEditorController *)arg1 didChangeEditor:(long long)arg2;
- (void)jd_videoEditorController:(JDVideoEditorController *)arg1 didEnterEditor:(long long)arg2;
@end

