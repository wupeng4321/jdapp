//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JumpToNativeModelProtocol-Protocol.h"

@class HomePageChannelAction, NSDictionary, NSString, ScanSearchResultPromotion, ShareModel;

@interface ScanSearchResultWare : NSObject <JumpToNativeModelProtocol>
{
    _Bool _isRearrange;
    NSString *_sku;
    NSString *_findCollocation;
    NSString *_rnUrl;
    NSString *_wareName;
    NSString *_color;
    NSString *_imageURL;
    NSString *_commentCount;
    NSString *_goodCommentRate;
    NSString *_price;
    ScanSearchResultPromotion *_promotion;
    long long _index;
    NSString *_resultsImgUrl;
    NSString *_mainCategoryName;
    NSString *_defaultMainCategoryName;
    NSString *_source;
    NSString *_modelType;
    NSDictionary *_jump;
    NSString *_impUrl;
    NSString *_clickUrl;
    long long _upcPosition;
}

@property(nonatomic) long long upcPosition; // @synthesize upcPosition=_upcPosition;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *impUrl; // @synthesize impUrl=_impUrl;
@property(retain, nonatomic) NSDictionary *jump; // @synthesize jump=_jump;
@property(nonatomic) _Bool isRearrange; // @synthesize isRearrange=_isRearrange;
@property(copy, nonatomic) NSString *modelType; // @synthesize modelType=_modelType;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *defaultMainCategoryName; // @synthesize defaultMainCategoryName=_defaultMainCategoryName;
@property(copy, nonatomic) NSString *mainCategoryName; // @synthesize mainCategoryName=_mainCategoryName;
@property(copy, nonatomic) NSString *resultsImgUrl; // @synthesize resultsImgUrl=_resultsImgUrl;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) ScanSearchResultPromotion *promotion; // @synthesize promotion=_promotion;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *goodCommentRate; // @synthesize goodCommentRate=_goodCommentRate;
@property(copy, nonatomic) NSString *commentCount; // @synthesize commentCount=_commentCount;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *wareName; // @synthesize wareName=_wareName;
@property(copy, nonatomic) NSString *rnUrl; // @synthesize rnUrl=_rnUrl;
@property(copy, nonatomic) NSString *findCollocation; // @synthesize findCollocation=_findCollocation;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *params;
@property(copy, nonatomic) NSString *des;
- (void)keyValuesDidFinishConvertingToObject;
@property(readonly, nonatomic) HomePageChannelAction *upcWareAction;
@property(readonly, nonatomic) HomePageChannelAction *wareAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool noAnimate;
@property(retain, nonatomic) ShareModel *shareModel;
@property(readonly) Class superclass;

@end

