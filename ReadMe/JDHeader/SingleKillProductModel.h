//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SingleKillProductModel : NSObject
{
    _Bool _miaoSha;
    NSString *_skuId;
    NSString *_skuName;
    NSString *_skuImg;
    NSString *_tagText;
    NSNumber *_tagColor;
    NSString *_jdPrice;
}

@property(nonatomic) _Bool miaoSha; // @synthesize miaoSha=_miaoSha;
@property(retain, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
@property(retain, nonatomic) NSNumber *tagColor; // @synthesize tagColor=_tagColor;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(retain, nonatomic) NSString *skuImg; // @synthesize skuImg=_skuImg;
@property(retain, nonatomic) NSString *skuName; // @synthesize skuName=_skuName;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;

@end

