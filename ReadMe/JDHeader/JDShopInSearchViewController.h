//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDShopCommonErrorViewDelegate-Protocol.h"
#import "JDShopDelegate-Protocol.h"
#import "JDShopInResultCollectionViewCellDelegate-Protocol.h"
#import "JDShopInResultPlayerManagerDelegate-Protocol.h"
#import "JDShopInSearchFlowLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class JDCategoryViewController, JDFooterLoadingView, JDShopAssociativeSearchListViewController, JDShopCommonErrorView, JDShopInSearchFlowLayout, JDShopNationBar, JDShopSearchFilterView, JDStoreNetwork, NSArray, NSDictionary, NSMutableArray, NSString, UICollectionView, UIImageView, UITapGestureRecognizer, UIView;
@protocol JDShopInSearchViewControllerDelegate;

@interface JDShopInSearchViewController : JDViewController <JDShopCommonErrorViewDelegate, JDShopInResultCollectionViewCellDelegate, JDShopInResultPlayerManagerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, JDShopInSearchFlowLayoutDelegate, UIScrollViewDelegate, JDShopDelegate>
{
    JDShopNationBar *m_jdNationBar;
    UIView *m_barView;
    UIView *m_shadow;
    UICollectionView *m_collectionView;
    NSMutableArray *m_resultArray;
    JDShopSearchFilterView *m_filterView;
    JDFooterLoadingView *footerView_;
    _Bool isGrid;
    JDStoreNetwork *netWork;
    long long currentPage;
    long long resultCount;
    _Bool loadMore;
    double offsetY1;
    double topUp;
    JDCategoryViewController *m_categoryView;
    _Bool needLeftGesture;
    _Bool categorySearch;
    long long viewType;
    _Bool isNavHidden;
    _Bool bAttachedFootView;
    _Bool isFirstRequest;
    JDShopAssociativeSearchListViewController *m_associativeSearchView;
    long long totalPage;
    long long pageSize;
    _Bool _bFromHome;
    _Bool _bShowJdDeliver;
    _Bool _bHaveBottomToolView;
    _Bool _isFromeCatogoryOrSearch;
    _Bool _allowReportPV;
    _Bool _isFromNewGuessWordVC;
    _Bool _isSelectJdDeliver;
    _Bool _isCurrentClickJdDeliver;
    _Bool _isJDDeliver;
    _Bool _isLonger;
    _Bool _isSelectInStock;
    _Bool _isCurrentClickInStock;
    _Bool _isInStock;
    _Bool _isSearchProductsInShop;
    _Bool _animationFinish;
    _Bool _isHasCurrentPlayer;
    _Bool _isShowAssociativeSearchView;
    int _sourceType;
    id <JDShopInSearchViewControllerDelegate> _delegate;
    NSString *_pageId;
    CDUnknownBlockType _scrollBlock;
    NSString *_shopNameAbTest;
    NSString *_flt;
    CDUnknownBlockType _addCartAnimationBlock;
    CDUnknownBlockType _addingCartBlock;
    NSArray *_hotWordArray;
    NSString *_suggestWord;
    NSString *_hotWordAbVersion;
    NSString *_suggestFromProductDetail;
    NSString *_shopId;
    NSString *_keyWord;
    NSString *_categoryId;
    JDShopCommonErrorView *_errorView;
    NSString *_clickSku;
    NSString *_skuidList;
    NSMutableArray *_topWareArray;
    double _footerViewHeight;
    JDShopInSearchFlowLayout *_layout;
    NSString *_sortType;
    NSString *_identifier;
    NSMutableArray *_categoryArray;
    UITapGestureRecognizer *_tapTableWhenError;
    UIImageView *_viewAnimation;
    long long _currentPlayItem;
    NSMutableArray *_hasPlayedVideosArr;
    NSString *_searchInitStatus;
    NSString *_userStockStatus;
    NSDictionary *_searchMidPoint;
    NSString *_clickSkuFromDetail;
    NSString *_fromSource;
}

@property(retain, nonatomic) NSString *fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) NSString *clickSkuFromDetail; // @synthesize clickSkuFromDetail=_clickSkuFromDetail;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSDictionary *searchMidPoint; // @synthesize searchMidPoint=_searchMidPoint;
@property(retain, nonatomic) NSString *userStockStatus; // @synthesize userStockStatus=_userStockStatus;
@property(retain, nonatomic) NSString *searchInitStatus; // @synthesize searchInitStatus=_searchInitStatus;
@property(nonatomic) _Bool isShowAssociativeSearchView; // @synthesize isShowAssociativeSearchView=_isShowAssociativeSearchView;
@property(retain, nonatomic) NSMutableArray *hasPlayedVideosArr; // @synthesize hasPlayedVideosArr=_hasPlayedVideosArr;
@property(nonatomic) long long currentPlayItem; // @synthesize currentPlayItem=_currentPlayItem;
@property(nonatomic) _Bool isHasCurrentPlayer; // @synthesize isHasCurrentPlayer=_isHasCurrentPlayer;
@property(retain, nonatomic) UIImageView *viewAnimation; // @synthesize viewAnimation=_viewAnimation;
@property(retain, nonatomic) UITapGestureRecognizer *tapTableWhenError; // @synthesize tapTableWhenError=_tapTableWhenError;
@property(retain, nonatomic) NSMutableArray *categoryArray; // @synthesize categoryArray=_categoryArray;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *sortType; // @synthesize sortType=_sortType;
@property(nonatomic) _Bool animationFinish; // @synthesize animationFinish=_animationFinish;
@property(retain, nonatomic) JDShopInSearchFlowLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) double footerViewHeight; // @synthesize footerViewHeight=_footerViewHeight;
@property(nonatomic) _Bool isSearchProductsInShop; // @synthesize isSearchProductsInShop=_isSearchProductsInShop;
@property(nonatomic) _Bool isInStock; // @synthesize isInStock=_isInStock;
@property(nonatomic) _Bool isCurrentClickInStock; // @synthesize isCurrentClickInStock=_isCurrentClickInStock;
@property(nonatomic) _Bool isSelectInStock; // @synthesize isSelectInStock=_isSelectInStock;
@property(nonatomic) _Bool isLonger; // @synthesize isLonger=_isLonger;
@property(nonatomic) _Bool isJDDeliver; // @synthesize isJDDeliver=_isJDDeliver;
@property(nonatomic) _Bool isCurrentClickJdDeliver; // @synthesize isCurrentClickJdDeliver=_isCurrentClickJdDeliver;
@property(nonatomic) _Bool isSelectJdDeliver; // @synthesize isSelectJdDeliver=_isSelectJdDeliver;
@property(retain, nonatomic) NSMutableArray *topWareArray; // @synthesize topWareArray=_topWareArray;
@property(retain, nonatomic) NSString *skuidList; // @synthesize skuidList=_skuidList;
@property(retain, nonatomic) NSString *clickSku; // @synthesize clickSku=_clickSku;
@property(retain, nonatomic) JDShopCommonErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(nonatomic) _Bool isFromNewGuessWordVC; // @synthesize isFromNewGuessWordVC=_isFromNewGuessWordVC;
@property(retain, nonatomic) NSString *suggestFromProductDetail; // @synthesize suggestFromProductDetail=_suggestFromProductDetail;
@property(retain, nonatomic) NSString *hotWordAbVersion; // @synthesize hotWordAbVersion=_hotWordAbVersion;
@property(retain, nonatomic) NSString *suggestWord; // @synthesize suggestWord=_suggestWord;
@property(retain, nonatomic) NSArray *hotWordArray; // @synthesize hotWordArray=_hotWordArray;
@property(copy, nonatomic) CDUnknownBlockType addingCartBlock; // @synthesize addingCartBlock=_addingCartBlock;
@property(copy, nonatomic) CDUnknownBlockType addCartAnimationBlock; // @synthesize addCartAnimationBlock=_addCartAnimationBlock;
@property(retain, nonatomic) NSString *flt; // @synthesize flt=_flt;
@property(nonatomic) _Bool allowReportPV; // @synthesize allowReportPV=_allowReportPV;
@property(nonatomic) _Bool isFromeCatogoryOrSearch; // @synthesize isFromeCatogoryOrSearch=_isFromeCatogoryOrSearch;
@property(retain, nonatomic) NSString *shopNameAbTest; // @synthesize shopNameAbTest=_shopNameAbTest;
@property(nonatomic) _Bool bHaveBottomToolView; // @synthesize bHaveBottomToolView=_bHaveBottomToolView;
@property(copy, nonatomic) CDUnknownBlockType scrollBlock; // @synthesize scrollBlock=_scrollBlock;
@property(nonatomic) _Bool bShowJdDeliver; // @synthesize bShowJdDeliver=_bShowJdDeliver;
@property(nonatomic) _Bool bFromHome; // @synthesize bFromHome=_bFromHome;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(nonatomic) id <JDShopInSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)footerViewSizeInShopInSearchflowLayout:(id)arg1;
- (struct UIEdgeInsets)edgeInsetsInShopInSearchflowLayout:(id)arg1;
- (double)rowMarginInShopInSearchflowLayout:(id)arg1;
- (double)columnMargInShopInSearchflowLayout:(id)arg1;
- (double)columnCountInShopInSearchflowLayout:(id)arg1;
- (double)shopInSearchflowLayout:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 itemWidth:(double)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendRequstWithFunctionId:(id)arg1 params:(id)arg2;
- (void)searchProductsWithCategory:(long long)arg1 categoryName:(id)arg2;
- (void)getShopCategoryProductsWithSubDic:(id)arg1 withLevel:(long long)arg2;
- (void)turnToWareDetailView:(id)arg1 productType:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)removePlayerView;
- (void)playerError;
- (void)playerDidFinish;
- (void)stopPlayVideoIfNeed;
- (void)startPlayVideo:(id)arg1;
- (_Bool)isVisableCompletedAndCanPlayCell:(id)arg1;
- (void)setNeedPlayVideoOnCellWithNeedPlayFirst:(_Bool)arg1;
- (void)searchShoppingCartButtonClick;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateShoppingCartCountWithAnimation:(_Bool)arg1;
- (void)listMenuCellDidSelecAddingCartOption:(id)arg1 productDic:(id)arg2;
- (void)listMenuAddCartAnimationWith:(id)arg1;
- (void)showCategoryView;
- (void)showShopCategoryView;
- (void)searchResultWithSuggestTxt:(id)arg1;
- (void)searchResultWithBarTxt:(id)arg1;
- (void)searchResultWithText:(id)arg1;
- (void)searchResultWithAssociatTxt:(id)arg1;
- (void)searchTextFieldChanged:(id)arg1;
- (void)cancelShadow;
- (void)showSearchView:(_Bool)arg1 withPlaceHolderStr:(id)arg2;
- (void)hiddenSoftBoard:(_Bool)arg1;
- (void)filterResultByCondition:(long long)arg1;
- (void)showListViewWithGridType:(_Bool)arg1;
- (void)reloadDataAfterError;
- (void)isTapAllProuctTab:(_Bool)arg1;
- (void)otherButtonClickHiddenView;
- (void)clickTableWhenError:(id)arg1;
- (void)attachFooterViewForScrolling;
- (void)removeErrorView;
- (void)showErrorView:(long long)arg1 withTipText:(id)arg2;
- (void)resetSubViewFrame:(struct CGRect)arg1;
- (void)pvParamsLocal;
- (void)recordPV;
- (void)updateAllowReportPV:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)backButtonClicked;
- (void)back;
- (void)loadSearchWithResultArray;
- (void)bringSubViewTofrontView;
- (void)searchProductsInShop;
- (void)backTopButtonPressed:(id)arg1;
- (void)hotWordClock:(id)arg1;
- (void)setUpUI;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithControllerWithShopId:(id)arg1 categoryId:(id)arg2 sortType:(id)arg3;
- (id)initWithControllerWithShopId:(id)arg1 clickskuid:(id)arg2 categoryId:(id)arg3 source:(id)arg4;
- (id)initWithControllerWithShopId:(id)arg1 clickskuid:(id)arg2 skus:(id)arg3;
- (id)initWithControllerWithShopId:(id)arg1 categoryId:(long long)arg2 categoryTitle:(id)arg3;
- (id)initWithControllerWithShopId:(id)arg1 keyWord:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

