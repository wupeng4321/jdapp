//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface TDPProductModelManager : NSObject
{
    NSString *_modelDirectory;
    NSFileManager *_fileManager;
}

+ (id)shareModelManager;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(copy, nonatomic) NSString *modelDirectory; // @synthesize modelDirectory=_modelDirectory;
- (void).cxx_destruct;
- (long long)modelStateWithSku:(id)arg1 url:(id)arg2;
- (id)modelName:(id)arg1;
- (void)tryClearCache;
- (id)init;

@end

