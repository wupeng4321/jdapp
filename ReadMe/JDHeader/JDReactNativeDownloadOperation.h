//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class JDReactModuleModel, NSMutableData, NSString, NSURLConnection;

@interface JDReactNativeDownloadOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    long long mFileSize;
    NSURLConnection *conntection;
    int _type;
    CDUnknownBlockType _downBlock;
    CDUnknownBlockType _progressBlock;
    JDReactModuleModel *_model;
    NSMutableData *_responseData;
    struct __CFRunLoop *_operationRunLoop;
}

@property(nonatomic) struct __CFRunLoop *operationRunLoop; // @synthesize operationRunLoop=_operationRunLoop;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) JDReactModuleModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType downBlock; // @synthesize downBlock=_downBlock;
- (void).cxx_destruct;
- (_Bool)unzipAndDeleteFile:(id)arg1;
- (_Bool)downloadPluginFininshed:(id)arg1;
- (void)updateSetting:(id)arg1;
- (void)updateDownloadStatus;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)finish;
- (void)cancel;
- (_Bool)isAsynchronous;
- (void)start;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

