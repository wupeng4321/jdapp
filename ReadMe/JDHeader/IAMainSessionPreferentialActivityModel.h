//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IAMainSessionModelDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface IAMainSessionPreferentialActivityModel : NSObject <IAMainSessionModelDelegate>
{
    _Bool _isAddSeperatorHeight;
    NSArray *_modelArray;
    NSString *_templateId;
    NSDictionary *_customDict;
    unsigned long long _startIndexPerPage;
}

+ (id)modelWithArray:(id)arg1;
+ (id)routerHandle_IAMainSessionPreferentialActivityModel_construct:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isAddSeperatorHeight; // @synthesize isAddSeperatorHeight=_isAddSeperatorHeight;
@property(nonatomic) unsigned long long startIndexPerPage; // @synthesize startIndexPerPage=_startIndexPerPage;
@property(retain, nonatomic) NSDictionary *customDict; // @synthesize customDict=_customDict;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSArray *modelArray; // @synthesize modelArray=_modelArray;
- (void).cxx_destruct;
- (double)modelInterval;
- (id)cellClassName;
- (double)cellHeight;
- (_Bool)isShowBottom;
- (long long)itemsCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

