//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FinderReadRecorder : NSObject
{
    NSMutableArray *_dataArray;
}

+ (void)saveRecord:(id)arg1;
+ (_Bool)hasRecord:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)updateRecordIfNeeded:(id)arg1;
- (void)writeAllRecords;
- (void)readAllRecords;
- (id)init;
- (void)dealloc;

@end

