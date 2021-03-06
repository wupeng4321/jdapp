//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JumpToNativeModel, NSArray, NSDictionary, NSString, ZDMArticle, ZDMArticleBackFlow, ZDMBanner, ZDMBannerItem, ZDMBannerMixTabList, ZDMPost, ZDMProduct, ZDMProductRecommendation, ZDMProductRecommendationList, ZDMProductRecommendationVideo, ZDMShareInfoModel, ZDMTab, ZDMTabPointer, ZDMTag, ZDMUser, ZDMVideoInfo;

@interface ZDMAction : NSObject
{
    NSString *_type;
    NSString *_subtype;
    NSDictionary *_payload;
    id _sender;
}

+ (id)searchButtonItemActionWithJump:(id)arg1;
+ (id)moreButtonItemActionWithItems:(id)arg1;
+ (id)preferencesButtonItemActionWithJump:(id)arg1;
+ (id)guideButtonItemActionWithJump:(id)arg1;
+ (id)favoritesButtonItemAction;
+ (id)shareButtonItemActionWithSharingInfo:(id)arg1;
@property(nonatomic) __weak id sender; // @synthesize sender=_sender;
@property(readonly, copy, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1 subtype:(id)arg2 payload:(id)arg3;
- (id)initWithType:(id)arg1 payload:(id)arg2;
- (id)initWithType:(id)arg1;
@property(readonly, nonatomic) ZDMVideoInfo *videoInfo;
@property(readonly, nonatomic) ZDMTab *tab;
@property(readonly, nonatomic) ZDMTabPointer *tabPointer;
@property(readonly, nonatomic) ZDMBannerMixTabList *bannerMixTab;
@property(readonly, nonatomic) long long clickPosition;
@property(readonly, nonatomic) ZDMTag *tag;
@property(readonly, nonatomic) ZDMArticleBackFlow *backFlow;
@property(readonly, nonatomic) ZDMUser *user;
@property(readonly, nonatomic) ZDMArticle *article;
@property(readonly, nonatomic) ZDMProductRecommendationList *productRecommendationList;
@property(readonly, nonatomic) ZDMProductRecommendationVideo *productRecommendationVideo;
@property(readonly, nonatomic) ZDMProductRecommendation *productRecommendation;
@property(readonly, nonatomic) ZDMProduct *product;
@property(readonly, nonatomic) ZDMPost *post;
@property(readonly, nonatomic) ZDMBannerItem *bannerItem;
@property(readonly, nonatomic) ZDMBanner *banner;
@property(readonly, nonatomic) long long index;
@property(readonly, nonatomic) NSArray *floatingMenuItems;
@property(readonly, nonatomic) JumpToNativeModel *jump;
@property(readonly, nonatomic) ZDMShareInfoModel *sharingInfo;

@end

