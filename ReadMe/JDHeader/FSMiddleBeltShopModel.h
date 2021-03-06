//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FSMiddleBeltShopModel : NSObject
{
    _Bool _haveBeenExplored;
    _Bool _haveBeenBindingToVM;
    long long _idxInItems;
    NSString *_imageUrl;
    NSString *_clickUrl;
    NSString *_exposalUrl;
    NSString *_flowOrder;
    NSString *_shopId;
    NSString *_shopName;
    NSString *_venderId;
    NSString *_venderType;
    NSString *_followCount;
    NSString *_logoUrl;
    NSString *_hasNewWare;
    NSString *_hasCoupon;
    NSString *_hasPromotion;
    NSString *_styleType;
    NSString *_extensionId;
    NSString *_logoIcon;
    NSArray *_childLinks;
}

+ (id)parseMiddleBeltShopInfo:(id)arg1 forPage:(long long)arg2;
@property(retain, nonatomic) NSArray *childLinks; // @synthesize childLinks=_childLinks;
@property(copy, nonatomic) NSString *logoIcon; // @synthesize logoIcon=_logoIcon;
@property(copy, nonatomic) NSString *extensionId; // @synthesize extensionId=_extensionId;
@property(copy, nonatomic) NSString *styleType; // @synthesize styleType=_styleType;
@property(copy, nonatomic) NSString *hasPromotion; // @synthesize hasPromotion=_hasPromotion;
@property(copy, nonatomic) NSString *hasCoupon; // @synthesize hasCoupon=_hasCoupon;
@property(copy, nonatomic) NSString *hasNewWare; // @synthesize hasNewWare=_hasNewWare;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *followCount; // @synthesize followCount=_followCount;
@property(copy, nonatomic) NSString *venderType; // @synthesize venderType=_venderType;
@property(copy, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(copy, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *flowOrder; // @synthesize flowOrder=_flowOrder;
@property(copy, nonatomic) NSString *exposalUrl; // @synthesize exposalUrl=_exposalUrl;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long idxInItems; // @synthesize idxInItems=_idxInItems;
@property(nonatomic) _Bool haveBeenBindingToVM; // @synthesize haveBeenBindingToVM=_haveBeenBindingToVM;
@property(nonatomic) _Bool haveBeenExplored; // @synthesize haveBeenExplored=_haveBeenExplored;
- (void).cxx_destruct;

@end

