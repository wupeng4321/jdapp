//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IAMainSessionModelDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface IAThumbsModel : NSObject <IAMainSessionModelDelegate>
{
    _Bool _isAddSeperatorHeight;
    NSArray *_templateList;
    long long _thumbState;
    NSString *_act;
    NSDictionary *_customDict;
}

+ (id)modelWithArray:(id)arg1;
+ (id)routerHandle_IAThumbsModel_construct:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isAddSeperatorHeight; // @synthesize isAddSeperatorHeight=_isAddSeperatorHeight;
@property(retain, nonatomic) NSDictionary *customDict; // @synthesize customDict=_customDict;
@property(copy, nonatomic) NSString *act; // @synthesize act=_act;
@property(nonatomic) long long thumbState; // @synthesize thumbState=_thumbState;
@property(retain, nonatomic) NSArray *templateList; // @synthesize templateList=_templateList;
- (void).cxx_destruct;
- (id)cellClassName;
- (double)cellHeight;
- (double)modelInterval;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
