//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyJdBaseFloor.h"

#import "MyJdCardFloorFooterDelegate-Protocol.h"
#import "PlusProductListDelegate-Protocol.h"

@class MyJdCardFloorFooterView, MyJdCardFloorHeaderView, NSMutableArray, NSMutableDictionary, NSString, PlusProductList;

@interface MyJdPlusProductFloor : MyJdBaseFloor <PlusProductListDelegate, MyJdCardFloorFooterDelegate>
{
    MyJdCardFloorHeaderView *_headerView;
    MyJdCardFloorFooterView *_footerView;
    NSMutableArray *_plusProductArr;
    NSMutableDictionary *_messageDic;
    double _firstContentOffset;
    double _lastContentOffset;
    PlusProductList *_plusProductList;
}

+ (void)load;
@property(retain, nonatomic) PlusProductList *plusProductList; // @synthesize plusProductList=_plusProductList;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) double firstContentOffset; // @synthesize firstContentOffset=_firstContentOffset;
@property(retain, nonatomic) NSMutableDictionary *messageDic; // @synthesize messageDic=_messageDic;
@property(retain, nonatomic) NSMutableArray *plusProductArr; // @synthesize plusProductArr=_plusProductArr;
@property(retain, nonatomic) MyJdCardFloorFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MyJdCardFloorHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)handleMoreButtonClickEvent:(id)arg1;
- (void)didScrollViewEndDecelerating:(id)arg1;
- (void)didMoreProductTapped;
- (void)didProductItemTapped:(unsigned long long)arg1 withModel:(id)arg2;
- (void)didProductListHeadTapped:(id)arg1;
- (void)cleanup;
- (double)myjd_heightForFooter;
- (id)myjd_viewForFooter;
- (double)myjd_heightForHeader;
- (id)myjd_viewForHeader;
- (void)myjd_updateData:(id)arg1 forKey:(id)arg2;
- (void)myjd_expoSpecialForRows:(id)arg1;
- (id)myjd_renderViewForRow:(long long)arg1 reusingView:(id)arg2;
- (id)myjd_reuseIdentifierForRow:(long long)arg1;
- (double)myjd_heightForRow:(long long)arg1;
- (long long)myjd_numberOfRows;
- (void)plusProductListExpo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

