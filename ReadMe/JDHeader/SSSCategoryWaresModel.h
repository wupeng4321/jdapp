//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SSSCategoryWaresHeadingModel;

@interface SSSCategoryWaresModel : NSObject
{
    _Bool _isAddHeader;
    NSString *_code;
    NSMutableArray *_goodsList;
    NSMutableArray *_totalGoodsList;
    long long _page;
    long long _totalPages;
    NSString *_duplicateSkus;
    NSString *_jumpRemindUrl;
    NSString *_titleImg;
    NSMutableArray *_waitingBrands;
    NSMutableArray *_sellingBrands;
    SSSCategoryWaresHeadingModel *_headingModel;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) SSSCategoryWaresHeadingModel *headingModel; // @synthesize headingModel=_headingModel;
@property(nonatomic) _Bool isAddHeader; // @synthesize isAddHeader=_isAddHeader;
@property(retain, nonatomic) NSMutableArray *sellingBrands; // @synthesize sellingBrands=_sellingBrands;
@property(retain, nonatomic) NSMutableArray *waitingBrands; // @synthesize waitingBrands=_waitingBrands;
@property(retain, nonatomic) NSString *titleImg; // @synthesize titleImg=_titleImg;
@property(copy, nonatomic) NSString *jumpRemindUrl; // @synthesize jumpRemindUrl=_jumpRemindUrl;
@property(copy, nonatomic) NSString *duplicateSkus; // @synthesize duplicateSkus=_duplicateSkus;
@property(nonatomic) long long totalPages; // @synthesize totalPages=_totalPages;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *totalGoodsList; // @synthesize totalGoodsList=_totalGoodsList;
@property(retain, nonatomic) NSMutableArray *goodsList; // @synthesize goodsList=_goodsList;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)handleDataSource:(_Bool)arg1;

@end

