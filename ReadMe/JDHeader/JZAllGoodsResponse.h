//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JZShareModel, NSArray, NSString;

@interface JZAllGoodsResponse : NSObject
{
    NSArray *_skuList;
    NSString *_goodsStr;
    JZShareModel *_shareInfo;
    NSString *_bottomImg;
    NSString *_code;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *bottomImg; // @synthesize bottomImg=_bottomImg;
@property(retain, nonatomic) JZShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString *goodsStr; // @synthesize goodsStr=_goodsStr;
@property(retain, nonatomic) NSArray *skuList; // @synthesize skuList=_skuList;
- (void).cxx_destruct;

@end
