//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork, NSMutableArray, NSString;
@protocol WanderShopCircleDataSourceDelegate;

@interface WanderShopCircleDataSourceBase : NSObject
{
    _Bool _isLoading;
    _Bool _isLoaded;
    NSMutableArray *_itemArray;
    JDStoreNetwork *_getDataDao;
    long long _currentPage;
    NSString *_currentOffSet;
    NSString *_pageSize;
    NSString *_contentId;
    NSString *_circleId;
    long long _tableViewOffset;
    id <WanderShopCircleDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <WanderShopCircleDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long tableViewOffset; // @synthesize tableViewOffset=_tableViewOffset;
@property(copy, nonatomic) NSString *circleId; // @synthesize circleId=_circleId;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) NSString *currentOffSet; // @synthesize currentOffSet=_currentOffSet;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) JDStoreNetwork *getDataDao; // @synthesize getDataDao=_getDataDao;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
- (void).cxx_destruct;
- (void)requestList;
- (void)convertToModel:(id)arg1;
- (void)reload:(_Bool)arg1;
- (void)refresh;
- (void)loadFirstPage;
- (id)init;

@end
