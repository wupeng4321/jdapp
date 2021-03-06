//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDAirFileManager : NSObject
{
}

+ (id)defaultManager;
+ (_Bool)removeFileWithPath:(id)arg1;
+ (id)fileNameInFolderWithPath:(id)arg1;
+ (long long)fileSizeAtPath:(id)arg1;
+ (long long)folderSizeAtPath:(id)arg1;
+ (_Bool)fileExistsAtPath:(id)arg1;
+ (_Bool)folderExistsAtPath:(id)arg1;
+ (_Bool)moveFileWithFromPath:(id)arg1 toPath:(id)arg2;
+ (void)deleteFilesWithPaths:(id)arg1;
+ (void)deleteFileWithPath:(id)arg1;
+ (id)manager;

@end

