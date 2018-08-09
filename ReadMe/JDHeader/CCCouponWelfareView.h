//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CCCouponGiftCollectionView, CCCouponGiftPackageReceiveView, CCCouponWelfareCollectionView, NSMutableArray, NSString, UICollectionView, UILabel;

@interface CCCouponWelfareView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, CAAnimationDelegate>
{
    _Bool _isReceiveCouponAnimating;
    CCCouponWelfareCollectionView *_welfareImageView;
    struct CGPoint _welfarePoint;
    CCCouponGiftCollectionView *_giftView;
    _Bool _isIPhone5Or4;
    UICollectionView *_collectionView;
    NSMutableArray *_itemsArray;
    CDUnknownBlockType _updateBlock;
    UILabel *_welfareTitleLabel;
    UILabel *_welfareTipsLabel;
    NSMutableArray *_giftPackageItems;
    NSString *_giftPackageTitle;
    NSString *_giftPackageSuccessMsg;
    NSString *_giftPackageId;
    CCCouponGiftPackageReceiveView *_giftReceiveView;
    UIView *_bgView;
}

@property(nonatomic) _Bool isIPhone5Or4; // @synthesize isIPhone5Or4=_isIPhone5Or4;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) CCCouponGiftPackageReceiveView *giftReceiveView; // @synthesize giftReceiveView=_giftReceiveView;
@property(copy, nonatomic) NSString *giftPackageId; // @synthesize giftPackageId=_giftPackageId;
@property(copy, nonatomic) NSString *giftPackageSuccessMsg; // @synthesize giftPackageSuccessMsg=_giftPackageSuccessMsg;
@property(copy, nonatomic) NSString *giftPackageTitle; // @synthesize giftPackageTitle=_giftPackageTitle;
@property(retain, nonatomic) NSMutableArray *giftPackageItems; // @synthesize giftPackageItems=_giftPackageItems;
@property(retain, nonatomic) UILabel *welfareTipsLabel; // @synthesize welfareTipsLabel=_welfareTipsLabel;
@property(retain, nonatomic) UILabel *welfareTitleLabel; // @synthesize welfareTitleLabel=_welfareTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)getBatchIdString;
- (id)getCouponIdString;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationWithView:(id)arg1 point:(struct CGPoint)arg2;
- (void)receiveGiftCouponWithAnimation:(struct CGPoint)arg1;
- (void)revceiveWelfareCouponWithAnimation:(id)arg1 couponPoint:(struct CGPoint)arg2;
- (void)receiveGiftCouponSuccess:(struct CGPoint)arg1;
- (void)receiveWelfareCouponSuccess:(id)arg1 point:(struct CGPoint)arg2 index:(long long)arg3;
- (void)receiveCoupon:(id)arg1 index:(long long)arg2 couponPoint:(struct CGPoint)arg3 couponType:(long long)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadViewWithModel:(id)arg1 updateWelfareBlock:(CDUnknownBlockType)arg2;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

