//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WanderBaseModel.h"

@class NSString;

@interface WanderShopPrizeModel : WanderBaseModel
{
    NSString *_wname;
    NSString *_num;
    NSString *_imgURL;
    NSString *_type;
    NSString *_wareId;
}

@property(readonly, copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(readonly, copy, nonatomic) NSString *num; // @synthesize num=_num;
@property(readonly, copy, nonatomic) NSString *wname; // @synthesize wname=_wname;
- (void).cxx_destruct;

@end

