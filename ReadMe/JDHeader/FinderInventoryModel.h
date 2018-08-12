//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FinderContentModel.h"

@class NSArray, NSString;

@interface FinderInventoryModel : FinderContentModel
{
    NSString *_mainTitle;
    NSString *_inventoryId;
    NSString *_desc;
    NSArray *_summaryList;
    NSString *_publishTime;
    long long _pageView;
    NSString *_authorName;
    NSString *_authorPic;
    long long _goodsNum;
    NSString *_testId;
    NSArray *_tagsList;
    NSString *_subTitle;
    NSString *_displayView;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *displayView; // @synthesize displayView=_displayView;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSArray *tagsList; // @synthesize tagsList=_tagsList;
@property(copy, nonatomic) NSString *testId; // @synthesize testId=_testId;
@property(nonatomic) long long goodsNum; // @synthesize goodsNum=_goodsNum;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(nonatomic) long long pageView; // @synthesize pageView=_pageView;
@property(copy, nonatomic) NSString *publishTime; // @synthesize publishTime=_publishTime;
@property(retain, nonatomic) NSArray *summaryList; // @synthesize summaryList=_summaryList;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *inventoryId; // @synthesize inventoryId=_inventoryId;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
- (void).cxx_destruct;
- (double)cellHeight;

@end
