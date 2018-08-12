//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyJdBaseFloor.h"

#import "RecommendTabScrollManagerDelegate-Protocol.h"

@class NSString, RecommendTabScrollManager, UITableView, UIView;

@interface MyJdRecommendFloor : MyJdBaseFloor <RecommendTabScrollManagerDelegate>
{
    RecommendTabScrollManager *_recommendManager;
    UITableView *_myTable;
    UIView *_recommendView;
}

+ (void)load;
@property(retain, nonatomic) UIView *recommendView; // @synthesize recommendView=_recommendView;
@property(nonatomic) __weak UITableView *myTable; // @synthesize myTable=_myTable;
@property(retain, nonatomic) RecommendTabScrollManager *recommendManager; // @synthesize recommendManager=_recommendManager;
- (void).cxx_destruct;
- (void)recommendScrollToHeight:(double)arg1;
- (void)recommendDataChanged:(_Bool)arg1;
- (void)cleanup;
- (id)myjd_renderViewForRow:(long long)arg1 reusingView:(id)arg2;
- (id)myjd_reuseIdentifierForRow:(long long)arg1;
- (double)myjd_heightForRow:(long long)arg1;
- (long long)myjd_numberOfRows;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

