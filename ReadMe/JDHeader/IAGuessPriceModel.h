//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionModel.h"

@class NSNumber;

@interface IAGuessPriceModel : IAMainSessionModel
{
    NSNumber *_guessingResult;
}

+ (id)modelWithDic:(id)arg1;
+ (id)routerHandle_IAGuessPriceModel_construct:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(nonatomic) NSNumber *guessingResult; // @synthesize guessingResult=_guessingResult;
- (id)cellClassName;
- (double)cellHeight;

@end

