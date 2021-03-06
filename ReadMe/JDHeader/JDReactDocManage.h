//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDReactDocManage : NSObject
{
}

+ (id)shareDocumentManager;
- (id)getDocumentDirectory;
- (id)getFolderPathFromFilePath:(id)arg1;
- (id)getBundleNameFromZip:(id)arg1;
- (id)getDownPath:(id)arg1 fileName:(id)arg2;
- (id)getTempPath:(id)arg1;
- (_Bool)moveFile:(id)arg1 tofile:(id)arg2 file:(id)arg3;
- (_Bool)compareFolerAndMove:(id)arg1 tofolder:(id)arg2;
- (_Bool)copyFile:(id)arg1 tofile:(id)arg2;
- (id)getFile:(id)arg1 folder:(id)arg2;
- (_Bool)renameFile:(id)arg1 newName:(id)arg2;
- (_Bool)deleteFile:(id)arg1 folder:(id)arg2;
- (_Bool)deleteDocumentFile:(id)arg1;
- (_Bool)deleteFile:(id)arg1;
- (_Bool)createServerJsonFile:(id)arg1 filePath:(id)arg2;
- (_Bool)checkFolderAndCreate:(id)arg1;
- (_Bool)isFileExist:(id)arg1;

@end

