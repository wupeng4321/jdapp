//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionModel.h"

@class NSMutableArray;

@interface IAOrderModel : IAMainSessionModel
{
    NSMutableArray *_templateList;
}

+ (id)modelWithArray:(id)arg1;
+ (id)routerHandle_IAOrderModel_construct:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableArray *templateList; // @synthesize templateList=_templateList;
- (void).cxx_destruct;
- (id)cellClassName;
- (double)cellHeight;
- (id)initWithArr:(id)arg1;

@end

