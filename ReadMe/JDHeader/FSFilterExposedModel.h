//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSFilterPromotionExposedModel, NSArray;

@interface FSFilterExposedModel : NSObject
{
    FSFilterPromotionExposedModel *_promotionModel;
    NSArray *_filterItemAttrs;
    NSArray *_jdServerArray;
}

@property(retain, nonatomic) NSArray *jdServerArray; // @synthesize jdServerArray=_jdServerArray;
@property(retain, nonatomic) NSArray *filterItemAttrs; // @synthesize filterItemAttrs=_filterItemAttrs;
@property(retain, nonatomic) FSFilterPromotionExposedModel *promotionModel; // @synthesize promotionModel=_promotionModel;
- (void).cxx_destruct;
- (id)initWithExposedDic:(id)arg1;

@end

