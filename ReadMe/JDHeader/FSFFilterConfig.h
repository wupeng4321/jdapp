//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FSFFilterConfig : NSObject
{
    _Bool _isFilterWorldBuy;
    _Bool _isCloseJinKanYouHuo;
    _Bool _needHiddenAllCategory;
    _Bool _clearFilterData;
    _Bool _isPromotionChecked;
    int _sourceType;
    NSString *_promotionId;
    NSString *_promotionType;
    NSArray *_expandPropertysArray;
}

@property(retain, nonatomic) NSArray *expandPropertysArray; // @synthesize expandPropertysArray=_expandPropertysArray;
@property(nonatomic) _Bool isPromotionChecked; // @synthesize isPromotionChecked=_isPromotionChecked;
@property(copy, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(nonatomic) _Bool clearFilterData; // @synthesize clearFilterData=_clearFilterData;
@property(nonatomic) _Bool needHiddenAllCategory; // @synthesize needHiddenAllCategory=_needHiddenAllCategory;
@property(nonatomic) _Bool isCloseJinKanYouHuo; // @synthesize isCloseJinKanYouHuo=_isCloseJinKanYouHuo;
@property(nonatomic) _Bool isFilterWorldBuy; // @synthesize isFilterWorldBuy=_isFilterWorldBuy;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (void)resetProperty;

@end
