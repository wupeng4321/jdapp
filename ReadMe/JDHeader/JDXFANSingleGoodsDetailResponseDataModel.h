//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JumpToNativeModelProtocol-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, ShareModel;

@interface JDXFANSingleGoodsDetailResponseDataModel : NSObject <JumpToNativeModelProtocol>
{
    NSString *_ID;
    NSString *_authorId;
    NSString *_authorName;
    NSString *_authorPic;
    NSString *_imghost;
    NSNumber *_likeNum;
    NSNumber *_hasFollowed;
    NSNumber *_hasLiked;
    NSString *_recommendReason;
    NSString *_recommendTheme;
    NSString *_goodsPic;
    NSString *_shareImage;
    NSString *_shareUrl;
    NSString *_sku;
    NSString *_skuId;
    NSString *_skuPrice;
    NSNumber *_subPosition;
    NSNumber *_style;
    NSString *_pin;
    NSString *_unionId;
    NSString *_hiddenStore;
    NSArray *_similarRecommend;
    NSArray *_summaryPicInfo;
    NSArray *_tagList;
}

+ (id)replacedKeyFromPropertyName;
+ (id)objectClassInArray;
@property(copy, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(copy, nonatomic) NSArray *summaryPicInfo; // @synthesize summaryPicInfo=_summaryPicInfo;
@property(copy, nonatomic) NSArray *similarRecommend; // @synthesize similarRecommend=_similarRecommend;
@property(copy, nonatomic) NSString *hiddenStore; // @synthesize hiddenStore=_hiddenStore;
@property(copy, nonatomic) NSString *unionId; // @synthesize unionId=_unionId;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSNumber *style; // @synthesize style=_style;
@property(copy, nonatomic) NSNumber *subPosition; // @synthesize subPosition=_subPosition;
@property(copy, nonatomic) NSString *skuPrice; // @synthesize skuPrice=_skuPrice;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *goodsPic; // @synthesize goodsPic=_goodsPic;
@property(copy, nonatomic) NSString *recommendTheme; // @synthesize recommendTheme=_recommendTheme;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSNumber *hasLiked; // @synthesize hasLiked=_hasLiked;
@property(copy, nonatomic) NSNumber *hasFollowed; // @synthesize hasFollowed=_hasFollowed;
@property(copy, nonatomic) NSNumber *likeNum; // @synthesize likeNum=_likeNum;
@property(copy, nonatomic) NSString *imghost; // @synthesize imghost=_imghost;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *skuPriceShowFommatStr;
@property(readonly, nonatomic) _Bool hasSimilarItemsData;
@property(readonly, nonatomic) _Bool disableFavourite;
@property(readonly, nonatomic) _Bool hasShareData;
@property(readonly, nonatomic) _Bool isFavourite;
@property(readonly, nonatomic) NSString *absoluteShareUrl;
@property(readonly, nonatomic) NSString *absoluteShareImage;
@property(readonly, nonatomic) NSString *absoluteGoodsPic;
@property(retain, nonatomic) NSDictionary *params;
@property(copy, nonatomic) NSString *des;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool noAnimate;
@property(retain, nonatomic) ShareModel *shareModel;
@property(readonly) Class superclass;

@end

