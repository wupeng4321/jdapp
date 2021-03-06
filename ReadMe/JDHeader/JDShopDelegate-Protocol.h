//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDGoodShopResultModel, JDShopAddCartWareModel, NSDictionary, NSMutableArray, NSNumber, NSString, UIImageView;

@protocol JDShopDelegate <NSObject>

@optional
- (void)listMenuCellDidSelecAddingCartOption:(JDShopAddCartWareModel *)arg1;
- (void)listMenuAddCartAnimationWith:(UIImageView *)arg1;
- (void)clickWareImageInGoodShop:(long long)arg1 imageTag:(long long)arg2;
- (void)goToShopActivityPage:(JDGoodShopResultModel *)arg1;
- (void)pushToShopMemberView;
- (void)queryProductInfoByCate:(NSDictionary *)arg1 existRedPoint:(_Bool)arg2;
- (void)dealWithRankFilter:(NSDictionary *)arg1 withTag:(long long)arg2;
- (void)showOrHideCategoryView:(_Bool)arg1;
- (void)jdSwitchDidUpdate:(id)arg1;
- (void)dealWithCategoryFilteConditons:(long long)arg1 withDic:(NSDictionary *)arg2;
- (void)updateViewWithCoupons;
- (void)updateViewWithCategoryView;
- (void)filterCouponByCondition:(id)arg1;
- (void)takeNavtiveMoreDiscount;
- (void)takeNavtiveDiscount:(NSNumber *)arg1;
- (void)selectCouponViewWithDictionary:(NSDictionary *)arg1;
- (void)filterCouponsByConditons:(NSDictionary *)arg1;
- (void)followShopInDetail:(NSString *)arg1;
- (void)dismissDiscountViewWithAnimation;
- (void)showShopMoreBrands;
- (void)showShopCompanyLicense;
- (void)updateShopDetailView:(float)arg1 module:(NSString *)arg2;
- (void)beforFollowOrShieldShopWhenUnLogin;
- (void)willShieldUnlikeShop:(long long)arg1 login:(_Bool)arg2;
- (void)shiledLoginViewWithShop;
- (void)takeCouponWithCode:(long long)arg1 withModel:(id)arg2;
- (void)takeCouponWithCode:(long long)arg1;
- (void)shopDetailBottomClick:(long long)arg1;
- (void)turnToShopDetailController;
- (void)turnToBrandViewController:(NSDictionary *)arg1 withShopInfo:(NSDictionary *)arg2 withPay:(_Bool)arg3 withIndex:(long long)arg4;
- (void)willDeleteRightButton;
- (void)willAddRightButtonToArray:(NSMutableArray *)arg1 withView:(id)arg2;
- (void)willDealWithShopCard:(id)arg1 withTag:(long long)arg2 withIndex:(long long)arg3;
- (void)willClickButton:(id)arg1;
- (void)willFilterProductByCategoryDic:(NSDictionary *)arg1 withTag:(long long)arg2;
- (void)finishTakeCoupon:(NSString *)arg1 takeResult:(_Bool)arg2 toastMessage:(NSString *)arg3;
- (void)needOpenPayPassword:(NSDictionary *)arg1;
- (void)searchTypedProduct:(int)arg1;
- (void)updateWebViewHeightByJS:(float)arg1;
- (void)updateDiscountTicketViews;
- (void)turnToWebActivity:(NSDictionary *)arg1;
- (void)changeToastButState:(_Bool)arg1;
- (void)hiddenOrShareShopToSNS:(long long)arg1;
- (void)showMoreOnShopHomeNavigationBar:(id)arg1;
- (void)showListViewWithGridType:(_Bool)arg1;
- (void)hiddenSoftBoard:(_Bool)arg1;
- (void)searchTextFieldChanged:(NSString *)arg1;
- (void)textFieldTouchUpInside:(NSString *)arg1;
- (void)searchResultWithSuggestTxt:(NSString *)arg1;
- (void)searchResultWithBarTxt:(NSString *)arg1;
- (void)searchResultWithAssociatTxt:(NSString *)arg1;
- (void)showShopCategoryView;
- (void)showSearchView:(_Bool)arg1 withPlaceHolderStr:(NSString *)arg2;
- (void)filterResultByCondition:(long long)arg1 select:(_Bool)arg2;
- (void)didCancelAttentionedShopWithIndex:(long long)arg1;
- (void)turnToActivityWithBannerId:(NSString *)arg1;
- (void)updateHeadBannerView:(struct CGRect)arg1;
- (void)updateHomeViewSubView:(struct CGRect)arg1;
- (void)connectPayWebView:(_Bool)arg1 WithPayDic:(NSDictionary *)arg2;
- (void)turnToWareInfoViewControllerWithWareId:(NSDictionary *)arg1 position:(long long)arg2;
- (void)turnToLoginViewController;
- (void)getShopAllProducts;
- (void)getShopCategoryProductsWithSubDic:(NSDictionary *)arg1 withLevel:(long long)arg2;
- (void)turnToShopHomeViewController;
- (void)discountTicketViewWithPayDic:(NSDictionary *)arg1;
- (void)isTakeSecurityCodeDelegate:(_Bool)arg1;
- (void)updateJDDiscountTicketViewOriginY:(long long)arg1 withView:(id)arg2;
- (void)contactMerchant;
@end

