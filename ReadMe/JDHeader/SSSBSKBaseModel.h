//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class NSString, SSSBSKBuryModel, SSSBSKJumpModel;

@interface SSSBSKBaseModel : SecKillBaseModel
{
    NSString *_code;
    NSString *_errmsg;
    SSSBSKJumpModel *_jump;
    SSSBSKBuryModel *_bury;
}

@property(retain, nonatomic) SSSBSKBuryModel *bury; // @synthesize bury=_bury;
@property(retain, nonatomic) SSSBSKJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *errmsg; // @synthesize errmsg=_errmsg;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end
