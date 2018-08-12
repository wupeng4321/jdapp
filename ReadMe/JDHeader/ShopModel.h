//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface ShopModel : JDModel
{
    _Bool _isViewed;
    int shopId_;
    int venderId_;
    int venderType_;
    NSString *fatherId_;
    NSString *imageUrl_;
    NSString *shopUrl_;
    NSString *skuId_;
    NSString *jdPrice_;
    NSString *name_;
    NSString *venderName_;
}

@property(nonatomic) _Bool isViewed; // @synthesize isViewed=_isViewed;
@property(nonatomic) int venderType; // @synthesize venderType=venderType_;
@property(retain, nonatomic) NSString *venderName; // @synthesize venderName=venderName_;
@property(nonatomic) int venderId; // @synthesize venderId=venderId_;
@property(retain, nonatomic) NSString *stockState; // @synthesize stockState=name_;
@property(retain, nonatomic) NSString *jdPrice; // @synthesize jdPrice=jdPrice_;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=skuId_;
@property(retain, nonatomic) NSString *shopUrl; // @synthesize shopUrl=shopUrl_;
@property(nonatomic) int shopId; // @synthesize shopId=shopId_;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=imageUrl_;
@property(retain, nonatomic) NSString *fatherId; // @synthesize fatherId=fatherId_;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

