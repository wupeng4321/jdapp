//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCShopCartEditNumberViewDelegate-Protocol.h"
#import "SCShopCartSkuModelDelegate-Protocol.h"
#import "SCShopCartSkuPriceViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CALayer, CAShapeLayer, CATextLayer, JDButton, JDImageView, NSString, SCShopCartEditNumberView, SCShopCartMainFlowDataAccess, SCShopCartSkuModel, SCShopCartSkuPriceView, UILabel;

@interface SCShopCartSkuCardContentView : UIView <UITextFieldDelegate, UIActionSheetDelegate, SCShopCartSkuModelDelegate, SCShopCartSkuPriceViewDelegate, SCShopCartEditNumberViewDelegate>
{
    _Bool isEditing;
    _Bool isNoStock;
    _Bool isSoldOut;
    _Bool showDetailButton;
    _Bool wareNumIsOK;
    _Bool showTextField;
    _Bool showSuitLabel;
    _Bool reachMaxLimited;
    _Bool reachMinLimited;
    _Bool isShowKeyboard;
    _Bool showLowestIcon;
    struct CGRect detailBtnRect;
    double imageViewAlpha;
    double kAttributLabelOffsetY;
    long long maxLimitedNumber;
    long long wareNum;
    long long remainNumInt;
    _Bool _hasGift;
    CDUnknownBlockType _similarWaresActionBlock;
    CDUnknownBlockType _countChangeActionBlock;
    CDUnknownBlockType _warrantyActionBlock;
    CDUnknownBlockType _modifyPropertiesActionBlock;
    CDUnknownBlockType _didChangePlusPriceBlock;
    SCShopCartMainFlowDataAccess *_dataAccess;
    SCShopCartSkuModel *_skuModel;
    SCShopCartSkuPriceView *_priceView;
    JDImageView *_productImageView;
    JDButton *_checkBox;
    JDButton *_editCheckBox;
    UILabel *_countDownLabel;
    CAShapeLayer *_bookingLayer;
    CATextLayer *_bookTextLayer;
    CATextLayer *_remainTextLayer;
    CALayer *_imageLayer;
    long long _skuRemainCount;
    long long _sourceCount;
    long long _selectCount;
    long long _maxCount;
    NSString *_prompt;
    NSString *_lastValue;
    NSString *_suitInfoString;
    CDUnknownBlockType _skuCheckedAction;
    CDUnknownBlockType _skuPushToWareAction;
    SCShopCartEditNumberView *_editNumberView;
}

@property(retain, nonatomic) SCShopCartEditNumberView *editNumberView; // @synthesize editNumberView=_editNumberView;
@property(copy, nonatomic) CDUnknownBlockType skuPushToWareAction; // @synthesize skuPushToWareAction=_skuPushToWareAction;
@property(copy, nonatomic) CDUnknownBlockType skuCheckedAction; // @synthesize skuCheckedAction=_skuCheckedAction;
@property(copy, nonatomic) NSString *suitInfoString; // @synthesize suitInfoString=_suitInfoString;
@property(copy, nonatomic) NSString *lastValue; // @synthesize lastValue=_lastValue;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) long long selectCount; // @synthesize selectCount=_selectCount;
@property(nonatomic) long long sourceCount; // @synthesize sourceCount=_sourceCount;
@property(nonatomic) long long skuRemainCount; // @synthesize skuRemainCount=_skuRemainCount;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) CATextLayer *remainTextLayer; // @synthesize remainTextLayer=_remainTextLayer;
@property(retain, nonatomic) CATextLayer *bookTextLayer; // @synthesize bookTextLayer=_bookTextLayer;
@property(retain, nonatomic) CAShapeLayer *bookingLayer; // @synthesize bookingLayer=_bookingLayer;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) JDButton *editCheckBox; // @synthesize editCheckBox=_editCheckBox;
@property(retain, nonatomic) JDButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) SCShopCartSkuPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) SCShopCartSkuModel *skuModel; // @synthesize skuModel=_skuModel;
@property(retain, nonatomic) SCShopCartMainFlowDataAccess *dataAccess; // @synthesize dataAccess=_dataAccess;
@property(copy, nonatomic) CDUnknownBlockType didChangePlusPriceBlock; // @synthesize didChangePlusPriceBlock=_didChangePlusPriceBlock;
@property(copy, nonatomic) CDUnknownBlockType modifyPropertiesActionBlock; // @synthesize modifyPropertiesActionBlock=_modifyPropertiesActionBlock;
@property(copy, nonatomic) CDUnknownBlockType warrantyActionBlock; // @synthesize warrantyActionBlock=_warrantyActionBlock;
@property(copy, nonatomic) CDUnknownBlockType countChangeActionBlock; // @synthesize countChangeActionBlock=_countChangeActionBlock;
@property(copy, nonatomic) CDUnknownBlockType similarWaresActionBlock; // @synthesize similarWaresActionBlock=_similarWaresActionBlock;
@property(nonatomic) _Bool hasGift; // @synthesize hasGift=_hasGift;
- (void).cxx_destruct;
- (id)accessibilityAttributeInfo;
- (struct CGRect)accessibilityDetailRect;
- (struct CGRect)accessibilitySimilarRect;
- (struct CGRect)accessibilityWarrantyRect;
- (struct CGRect)accessibilityTextFieldRect;
- (struct CGRect)accessibilityPlusRect;
- (struct CGRect)accessibilityMinusRect;
- (id)accessibilityCheckBox;
- (id)accessibilityWarrantyInfo;
- (id)accessibilitySkuInfo;
- (_Bool)accessibilityPerformMagicTap;
- (void)keybordCancel;
- (void)notKeyboardConfim:(id)arg1;
- (void)notKeyboardCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)deleteItem;
- (id)favoriteItem;
- (void)showKeyboard;
- (void)keybordConfim;
- (void)setCountFieldValue:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)rightAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)didChangePlusPriceWithActionFrame:(struct CGRect)arg1;
- (void)__syncCartServerWithValue:(id)arg1 packModel:(id)arg2 skuModel:(id)arg3;
- (void)__syncCartServer;
- (void)__moreAction;
- (void)__lessAction;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)getWarrantyAndIouRect;
- (void)skuClick:(id)arg1;
- (void)__drawSuitLabel;
- (void)__drawDetailButton;
- (void)__drawSimilar;
- (void)__drawYanBao;
- (void)__drawSkuPrice;
- (void)__drawSkuName;
- (void)drawRect:(struct CGRect)arg1;
- (void)setCheckBoxHiddenOrShow;
- (void)__drawAttributesAAndB;
- (void)skuCountDown;
- (void)setEditing:(_Bool)arg1;
- (void)__updateIconsFrame;
- (void)__updateAllJDIcons;
- (void)__updateUIControls;
- (void)__updateStringValues;
- (void)__updateAllBooleans;
- (void)updateViewWithSKUModel:(id)arg1 dataAccess:(id)arg2 checkSkuAction:(CDUnknownBlockType)arg3 pushToWareViewAction:(CDUnknownBlockType)arg4;
- (void)__initNotification;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
