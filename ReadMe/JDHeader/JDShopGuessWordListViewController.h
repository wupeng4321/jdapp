//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDShopDelegate-Protocol.h"

@class JDShopAssociativeSearchListViewController, JDShopCancleStyleSearchBar, JDStoreNetwork, NSArray, NSString, UIView;

@interface JDShopGuessWordListViewController : JDViewController <JDShopDelegate>
{
    JDStoreNetwork *netWork;
    JDShopAssociativeSearchListViewController *m_associativeSearchView;
    UIView *m_shadow;
    _Bool _isFromProductDetail;
    NSString *_shopId;
    NSString *_suggestWord;
    NSString *_suggestFromDetail;
    JDShopCancleStyleSearchBar *_jdNationBar;
    NSArray *_hotWordArray;
    NSString *_hotWordAbVersion;
}

@property(nonatomic) _Bool isFromProductDetail; // @synthesize isFromProductDetail=_isFromProductDetail;
@property(retain, nonatomic) NSString *hotWordAbVersion; // @synthesize hotWordAbVersion=_hotWordAbVersion;
@property(retain, nonatomic) NSArray *hotWordArray; // @synthesize hotWordArray=_hotWordArray;
@property(retain, nonatomic) JDShopCancleStyleSearchBar *jdNationBar; // @synthesize jdNationBar=_jdNationBar;
@property(retain, nonatomic) NSString *suggestFromDetail; // @synthesize suggestFromDetail=_suggestFromDetail;
@property(retain, nonatomic) NSString *suggestWord; // @synthesize suggestWord=_suggestWord;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)searchResultWithSuggestTxt:(id)arg1;
- (void)searchResultWithBarTxt:(id)arg1;
- (void)searchResultWithText:(id)arg1;
- (void)searchResultWithAssociatTxt:(id)arg1;
- (void)searchTextFieldChanged:(id)arg1;
- (void)cancelShadow;
- (void)showSearchView:(_Bool)arg1 withPlaceHolderStr:(id)arg2;
- (void)getHotWord;
- (void)initUIView;
- (void)viewDidLoad;
- (id)initWithControllerWithShopId:(id)arg1 suggestWord:(id)arg2 suggestFromDetail:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

