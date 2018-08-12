//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSIndexPath, NSString;

@interface OrderOftenBuyModel : JDModel
{
    _Bool _canGoCart;
    _Bool _canGoSimilar;
    _Bool _canDelete;
    _Bool _isListStyle;
    int _type;
    int _buyCount;
    int _partBelong;
    NSString *_sku;
    NSString *_wareName;
    NSString *_imgUrl;
    NSString *_jdPrice;
    NSString *_historyPrice;
    NSString *_promotionText;
    NSIndexPath *_indexPath;
    long long _gridIndex;
    NSString *_mdType;
    long long _groupCount;
    long long _location;
}

@property(nonatomic) long long location; // @synthesize location=_location;
@property(nonatomic) long long groupCount; // @synthesize groupCount=_groupCount;
@property(nonatomic) int partBelong; // @synthesize partBelong=_partBelong;
@property(retain, nonatomic) NSString *mdType; // @synthesize mdType=_mdType;
@property(nonatomic) long long gridIndex; // @synthesize gridIndex=_gridIndex;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isListStyle; // @synthesize isListStyle=_isListStyle;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool canGoSimilar; // @synthesize canGoSimilar=_canGoSimilar;
@property(nonatomic) _Bool canGoCart; // @synthesize canGoCart=_canGoCart;
@property(nonatomic) int buyCount; // @synthesize buyCount=_buyCount;
@property(retain, nonatomic) NSString *promotionText; // @synthesize promotionText=_promotionText;
@property(retain, nonatomic) NSString *historyPrice; // @synthesize historyPrice=_historyPrice;
@property(retain, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *wareName; // @synthesize wareName=_wareName;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;
- (void)dealloc;

@end

