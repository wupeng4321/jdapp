//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionModel.h"

@class NSArray;

@interface IAMainSessionOrderGiftModel : IAMainSessionModel
{
    NSArray *_modelArray;
}

+ (id)modelWithArray:(id)arg1;
+ (id)routerHandle_IAMainSessionOrderGiftModel_construct:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *modelArray; // @synthesize modelArray=_modelArray;
- (void).cxx_destruct;
- (unsigned long long)itemCount;
- (id)cellClassName;
- (double)cellHeight;

@end
