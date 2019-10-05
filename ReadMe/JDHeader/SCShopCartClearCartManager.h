//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDBaseToastViewDelegate-Protocol.h"

@class NSDictionary, NSString, SCShopCartClearCartView, SCShopCartPlusToastView;

@interface SCShopCartClearCartManager : NSObject <JDBaseToastViewDelegate>
{
    _Bool _hasClearShow;
    _Bool _showSuccessToast;
    NSDictionary *_paramDic;
    SCShopCartClearCartView *_clearCartView;
    CDUnknownBlockType _hideBlock;
    SCShopCartPlusToastView *_plusToastView;
}

+ (void)unInitManager;
+ (void)openClearCart:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)sharedManager;
+ (void)savePlusToast;
+ (_Bool)showPlusToast;
+ (_Bool)hasUserLogined;
+ (void)saveHasShowShareTip:(_Bool)arg1;
+ (_Bool)HasShowShareTip;
+ (void)saveClearCartGuideDate:(id)arg1;
+ (id)clearCartGuideDate;
@property(nonatomic) _Bool showSuccessToast; // @synthesize showSuccessToast=_showSuccessToast;
@property(nonatomic) _Bool hasClearShow; // @synthesize hasClearShow=_hasClearShow;
@property(retain, nonatomic) SCShopCartPlusToastView *plusToastView; // @synthesize plusToastView=_plusToastView;
@property(copy, nonatomic) CDUnknownBlockType hideBlock; // @synthesize hideBlock=_hideBlock;
@property(retain, nonatomic) SCShopCartClearCartView *clearCartView; // @synthesize clearCartView=_clearCartView;
@property(retain, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
- (void).cxx_destruct;
- (void)plusUserExpandedCartToastMTA;
- (void)addSuccessToastMTA;
- (void)pointMTAClearCartDone;
- (void)pointMTAClearCartCancel;
- (void)pointMTAClearCartToast;
- (id)getPageParam;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)popClearCartViewandHideBlock:(CDUnknownBlockType)arg1;
- (void)plusUserExpandedCartToast;
- (void)popToastSuccess:(long long)arg1;
- (void)closeClearActionToast;
- (void)noClearActionOnlyStatusToast;
- (void)showClearCart:(id)arg1 hideBlock:(CDUnknownBlockType)arg2;
- (void)unInitContent;
- (id)cartAddClearGuide;
- (id)getNoTypeWithKey:(id)arg1;
- (_Bool)isDirectShow;
- (_Bool)cartIsSuccess;
- (long long)code;
- (_Bool)cartIsFull;
- (id)message;
- (id)sourceText;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
