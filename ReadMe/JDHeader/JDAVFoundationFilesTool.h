//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDAVFoundationFilesTool : NSObject
{
    _Bool _showWaiting;
    _Bool _wifiMessageShowed;
}

+ (id)stringEncodeData:(id)arg1;
+ (id)stringMd5Encode:(id)arg1;
@property(nonatomic) _Bool wifiMessageShowed; // @synthesize wifiMessageShowed=_wifiMessageShowed;
- (void)loadDBFiles:(id)arg1 progress:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;
- (void)loadFiles:(id)arg1 progress:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fileModelManagerSku:(id)arg1 url:(id)arg2 modelName:(id)arg3 localPathFile:(id)arg4 progress:(CDUnknownBlockType)arg5 callback:(CDUnknownBlockType)arg6;
- (_Bool)createModelsPath:(id)arg1;
- (void)downloadModel:(id)arg1 url:(id)arg2 modelName:(id)arg3 localPath:(id)arg4 progress:(CDUnknownBlockType)arg5 callback:(CDUnknownBlockType)arg6;
- (id)documents;
- (_Bool)modelValidWithResponse:(id)arg1 withModel:(id)arg2;
- (_Bool)validModel:(id)arg1:(id)arg2;
- (void)hideWaiting;
- (void)showWaitingIfNeeded;
- (void)showWifiMessage;
- (void)showWifiMessageIfNeeded;
- (_Bool)connectWithCellular;
- (void)showToatWithMSg:(id)arg1 time:(double)arg2;

@end

