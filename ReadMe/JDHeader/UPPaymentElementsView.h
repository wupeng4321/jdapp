//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UPPromotionViewDelegate-Protocol.h"

@class NSString, UPBankNumCell, UPKeyboard, UPPasswordCell, UPPointCell, UPWalletPwdCell;
@protocol UITextFieldDelegate><UPTextFieldDelegate;

@interface UPPaymentElementsView : UIView <UPPromotionViewDelegate>
{
    UPKeyboard *_keyboard;
    UPKeyboard *_keyboardWallet;
    id <UITextFieldDelegate><UPTextFieldDelegate> _delegate;
    UPPasswordCell *_securityCell;
    UPWalletPwdCell *_securityWalletCell;
    UPBankNumCell *_bankNumCell;
    UPPointCell *_pointCell;
    double _toplineLeftMargin;
    id <UITextFieldDelegate><UPTextFieldDelegate> textDelegate;
}

@property(nonatomic) __weak id <UITextFieldDelegate><UPTextFieldDelegate> textDelegate; // @synthesize textDelegate;
- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)makeKeyboardRandom;
- (void)cleanupPassword;
- (void)cleanupSecretInfo;
- (id)elementArray;
- (id)checkPaymentParamsError;
- (id)checkSmsParamsError;
- (id)walletPayData;
- (id)paymentParams;
- (id)smsParams;
- (id)panParamWithValue:(id)arg1;
- (void)addPointObservers;
- (void)removePointObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1 elements:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 elements:(id)arg2 delegate:(id)arg3 andInstalmentView:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 elements:(id)arg2 delegate:(id)arg3 andInstalmentView:(id)arg4 toplineLeftMargin:(double)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

