//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DPGDetailJumpModel, NSString;

@interface DPGDetailArticlePositionSku : NSObject
{
    _Bool _direct;
    double _xPercent;
    double _yPercent;
    NSString *_skuTitle;
    NSString *_skuId;
    NSString *_skuPrice;
    DPGDetailJumpModel *_jump;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) DPGDetailJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *skuPrice; // @synthesize skuPrice=_skuPrice;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *skuTitle; // @synthesize skuTitle=_skuTitle;
@property(nonatomic) _Bool direct; // @synthesize direct=_direct;
@property(nonatomic) double yPercent; // @synthesize yPercent=_yPercent;
@property(nonatomic) double xPercent; // @synthesize xPercent=_xPercent;
- (void).cxx_destruct;

@end

