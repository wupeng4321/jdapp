//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class NSString, SSSJumpModel;

@interface SingleNewAccountModel : SecKillBaseModel
{
    _Bool _isXview;
    NSString *_accountImg;
    NSString *_accountJump;
    NSString *_sourceValue;
    SSSJumpModel *_jump;
    NSString *_xviewUrl;
}

@property(copy, nonatomic) NSString *xviewUrl; // @synthesize xviewUrl=_xviewUrl;
@property(nonatomic) _Bool isXview; // @synthesize isXview=_isXview;
@property(retain, nonatomic) SSSJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(retain, nonatomic) NSString *accountJump; // @synthesize accountJump=_accountJump;
@property(retain, nonatomic) NSString *accountImg; // @synthesize accountImg=_accountImg;
- (void).cxx_destruct;

@end
