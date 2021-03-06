//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface COCheckoutCartItemResourceModel : NSObject
{
    _Bool _isLoc;
    _Bool _isFresh;
    _Bool _isMainSku;
    _Bool _isBigItem;
    _Bool _isXuzhong;
    _Bool _isSamGoods;
    _Bool _overseaPurchase;
    _Bool _isSamMemberPrice;
    long long _type;
    long long _price;
    long long _volume;
    long long _weight;
    long long _num_int;
    long long _taxAmount;
    long long _venderType;
    long long _templateId;
    long long _serviceItemId;
    long long _thirdCategoryId;
    long long _internationalType;
    NSString *_num;
    NSString *_name;
    NSString *_point;
    NSString *_itemId;
    NSString *_promoId;
    NSString *_jdPrice;
    NSString *_rePrice;
    NSString *_imageUrl;
    NSString *_vPromoId;
    NSString *_venderId;
    NSString *_sizeName;
    NSString *_sizeValue;
    NSString *_hierarchy;
    NSString *_colorName;
    NSString *_colorValue;
    NSString *_stockStatus;
    NSString *_weightAndNum;
    NSString *_returnGoodsMsg;
    NSString *_returnGoodsIcon;
    NSArray *_iconList;
    NSArray *_dimAttributes;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *dimAttributes; // @synthesize dimAttributes=_dimAttributes;
@property(retain, nonatomic) NSArray *iconList; // @synthesize iconList=_iconList;
@property(copy, nonatomic) NSString *returnGoodsIcon; // @synthesize returnGoodsIcon=_returnGoodsIcon;
@property(copy, nonatomic) NSString *returnGoodsMsg; // @synthesize returnGoodsMsg=_returnGoodsMsg;
@property(copy, nonatomic) NSString *weightAndNum; // @synthesize weightAndNum=_weightAndNum;
@property(copy, nonatomic) NSString *stockStatus; // @synthesize stockStatus=_stockStatus;
@property(copy, nonatomic) NSString *colorValue; // @synthesize colorValue=_colorValue;
@property(copy, nonatomic) NSString *colorName; // @synthesize colorName=_colorName;
@property(copy, nonatomic) NSString *hierarchy; // @synthesize hierarchy=_hierarchy;
@property(copy, nonatomic) NSString *sizeValue; // @synthesize sizeValue=_sizeValue;
@property(copy, nonatomic) NSString *sizeName; // @synthesize sizeName=_sizeName;
@property(copy, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(copy, nonatomic) NSString *vPromoId; // @synthesize vPromoId=_vPromoId;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *rePrice; // @synthesize rePrice=_rePrice;
@property(copy, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
@property(copy, nonatomic) NSString *promoId; // @synthesize promoId=_promoId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *point; // @synthesize point=_point;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *num; // @synthesize num=_num;
@property(nonatomic) long long internationalType; // @synthesize internationalType=_internationalType;
@property(nonatomic) long long thirdCategoryId; // @synthesize thirdCategoryId=_thirdCategoryId;
@property(nonatomic) long long serviceItemId; // @synthesize serviceItemId=_serviceItemId;
@property(nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(nonatomic) long long venderType; // @synthesize venderType=_venderType;
@property(nonatomic) long long taxAmount; // @synthesize taxAmount=_taxAmount;
@property(nonatomic) long long num_int; // @synthesize num_int=_num_int;
@property(nonatomic) long long weight; // @synthesize weight=_weight;
@property(nonatomic) long long volume; // @synthesize volume=_volume;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isSamMemberPrice; // @synthesize isSamMemberPrice=_isSamMemberPrice;
@property(nonatomic) _Bool overseaPurchase; // @synthesize overseaPurchase=_overseaPurchase;
@property(nonatomic) _Bool isSamGoods; // @synthesize isSamGoods=_isSamGoods;
@property(nonatomic) _Bool isXuzhong; // @synthesize isXuzhong=_isXuzhong;
@property(nonatomic) _Bool isBigItem; // @synthesize isBigItem=_isBigItem;
@property(nonatomic) _Bool isMainSku; // @synthesize isMainSku=_isMainSku;
@property(nonatomic) _Bool isFresh; // @synthesize isFresh=_isFresh;
@property(nonatomic) _Bool isLoc; // @synthesize isLoc=_isLoc;
- (void).cxx_destruct;

@end

