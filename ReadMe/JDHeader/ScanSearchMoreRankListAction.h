//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HomePageChannelAction.h"

@class NSString;

@interface ScanSearchMoreRankListAction : HomePageChannelAction
{
    NSString *_rankId;
    NSString *_cate3Id;
    NSString *_skuId;
}

@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *cate3Id; // @synthesize cate3Id=_cate3Id;
@property(copy, nonatomic) NSString *rankId; // @synthesize rankId=_rankId;
- (void).cxx_destruct;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithRankId:(id)arg1 cate3Id:(id)arg2 skuId:(id)arg3;

@end

