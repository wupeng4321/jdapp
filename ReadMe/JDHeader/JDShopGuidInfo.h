//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface JDShopGuidInfo : JDModel
{
    NSString *_skuImg;
    NSString *_cname;
    NSString *_cid;
    NSString *_advert;
    NSString *_shopId;
}

@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *advert; // @synthesize advert=_advert;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *cname; // @synthesize cname=_cname;
@property(retain, nonatomic) NSString *skuImg; // @synthesize skuImg=_skuImg;
- (_Bool)praseDataWithDic:(id)arg1;
- (void)dealloc;

@end
