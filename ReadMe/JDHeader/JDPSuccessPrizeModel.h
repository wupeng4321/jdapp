//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSString;

@interface JDPSuccessPrizeModel : JDPayModel
{
    _Bool _isUrl;
    NSString *_prizeType;
    NSString *_prizeAmount;
    NSString *_prizeName;
    NSString *_prizeDesc;
    NSString *_jumpDesc;
    NSString *_prizeUrl;
}

@property(copy, nonatomic) NSString *prizeUrl; // @synthesize prizeUrl=_prizeUrl;
@property(nonatomic) _Bool isUrl; // @synthesize isUrl=_isUrl;
@property(copy, nonatomic) NSString *jumpDesc; // @synthesize jumpDesc=_jumpDesc;
@property(copy, nonatomic) NSString *prizeDesc; // @synthesize prizeDesc=_prizeDesc;
@property(copy, nonatomic) NSString *prizeName; // @synthesize prizeName=_prizeName;
@property(copy, nonatomic) NSString *prizeAmount; // @synthesize prizeAmount=_prizeAmount;
@property(copy, nonatomic) NSString *prizeType; // @synthesize prizeType=_prizeType;
- (void).cxx_destruct;

@end

