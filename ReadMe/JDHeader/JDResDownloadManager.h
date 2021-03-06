//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSData, NSMutableArray, NSOperationQueue, NSString, NSURLRequest, NSURLSession, NSURLSessionConfiguration, NSURLSessionDownloadTask;

@interface JDResDownloadManager : NSObject <NSURLSessionDelegate>
{
    NSURLSessionDownloadTask *_task;
    NSData *_data;
    NSURLSession *_session;
    NSURLRequest *_request;
    NSString *_fileUrl;
    NSString *_outFileUrl;
    NSMutableArray *_downloadTasks;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSOperationQueue *_operationQueue;
}

+ (id)manager;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSMutableArray *downloadTasks; // @synthesize downloadTasks=_downloadTasks;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *outFileUrl; // @synthesize outFileUrl=_outFileUrl;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadTaskWithResumeData:(id)arg1 progress:(CDUnknownBlockType)arg2 destination:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

