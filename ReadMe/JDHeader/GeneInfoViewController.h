//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "GeneInfoDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class JDStoreNetwork, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, UIButton, UIImageView, UIScrollView, UITableView, UIView;

@interface GeneInfoViewController : JDViewController <UIScrollViewDelegate, GeneInfoDelegate>
{
    NSMutableArray *geneArray;
    UIScrollView *geneTitleScrollView;
    UIScrollView *geneListScrollView;
    UITableView *geneTableView;
    NSMutableArray *buttonArray;
    NSMutableDictionary *geneTableDic;
    NSMutableDictionary *downImageViewDic;
    NSMutableDictionary *geneListDic;
    NSMutableArray *activityGeneArray;
    JDStoreNetwork *genInfo_netWork;
    JDStoreNetwork *gen_netWork;
    UIButton *activityButton;
    UIImageView *downImageView;
    UIView *lineView;
    _Bool moveScrollView;
    NSMutableString *geneIDString;
    float startContentOffsetY;
    NSString *titleString;
    _Bool isShowOneItem;
    int type;
    NSString *femalSkus;
    int geneEnterType;
}

- (void).cxx_destruct;
- (void)onClickCellButton:(id)arg1;
- (void)onClickGeneButton:(id)arg1;
- (void)wareTabelViewScrollsToTop;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestGetGene;
- (void)requestGetGeneInfo:(id)arg1 andIndexArray:(int)arg2;
- (void)initListScrollView;
- (void)initTitleScrollView;
- (void)initView;
- (void)initAllInfo;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithGeneID:(id)arg1 andTitle:(id)arg2 andType:(int)arg3 andSkus:(id)arg4 andEnterType:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

