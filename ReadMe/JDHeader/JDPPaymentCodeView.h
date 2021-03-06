//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDPayUnfinishedOrderView, NSMutableArray, NSString, NSTimer, UIButton, UIImageView, UILabel, UIViewController;
@protocol JDPPaymentCodeViewDelegate;

@interface JDPPaymentCodeView : UIView
{
    _Bool _isEnterBackground;
    _Bool _isUnfinishedOrder;
    _Bool _isBarCodeOrientation;
    _Bool _isQrCodeOrientation;
    id <JDPPaymentCodeViewDelegate> _payCodeViewDelegate;
    long long _style;
    UIImageView *_topTipLogoImageView;
    UIView *_scanView;
    UIView *_barCodeFullScreenView;
    UIView *_topBarCodeCenterView;
    UILabel *_topBarCodeLabel;
    UIImageView *_topBarCodeImageView;
    UIImageView *_qrCodeImageView;
    UIView *_payMethodBackgroundView;
    UIView *_payMethodShowView;
    UIButton *_changePayMethodButton;
    UILabel *_payTitleLable;
    UIImageView *_payMethodLogoImageView;
    UILabel *_payMethodLable;
    UIImageView *_grayArrow;
    UIViewController *_payCodeViewController;
    UILabel *_fullBarCodeLabel;
    UIImageView *_fullBarCodeImageView;
    UIImageView *_fullBarCodeIconImageView;
    UILabel *_fullBarCodeIconLabel;
    UIView *_fullQRCodeView;
    UIImageView *_fullQRCodeImageView;
    NSTimer *_timer;
    NSTimer *_resultTimer;
    NSMutableArray *_summarys;
    NSString *_generateCode;
    JDPayUnfinishedOrderView *_unfinishOrderView;
    struct CGPoint _newTopCodeBarPosition;
    struct CGRect _orignTopCodeBarCenterFrame;
    struct CGRect _orignTopCodeBarCodeImageFrame;
    struct CGRect _newTopCodeBarFrame;
}

@property(retain, nonatomic) JDPayUnfinishedOrderView *unfinishOrderView; // @synthesize unfinishOrderView=_unfinishOrderView;
@property(retain, nonatomic) NSString *generateCode; // @synthesize generateCode=_generateCode;
@property(retain, nonatomic) NSMutableArray *summarys; // @synthesize summarys=_summarys;
@property(retain, nonatomic) NSTimer *resultTimer; // @synthesize resultTimer=_resultTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *fullQRCodeImageView; // @synthesize fullQRCodeImageView=_fullQRCodeImageView;
@property(retain, nonatomic) UIView *fullQRCodeView; // @synthesize fullQRCodeView=_fullQRCodeView;
@property(retain, nonatomic) UILabel *fullBarCodeIconLabel; // @synthesize fullBarCodeIconLabel=_fullBarCodeIconLabel;
@property(retain, nonatomic) UIImageView *fullBarCodeIconImageView; // @synthesize fullBarCodeIconImageView=_fullBarCodeIconImageView;
@property(retain, nonatomic) UIImageView *fullBarCodeImageView; // @synthesize fullBarCodeImageView=_fullBarCodeImageView;
@property(retain, nonatomic) UILabel *fullBarCodeLabel; // @synthesize fullBarCodeLabel=_fullBarCodeLabel;
@property(nonatomic) __weak UIViewController *payCodeViewController; // @synthesize payCodeViewController=_payCodeViewController;
@property(nonatomic) struct CGPoint newTopCodeBarPosition; // @synthesize newTopCodeBarPosition=_newTopCodeBarPosition;
@property(nonatomic) struct CGRect newTopCodeBarFrame; // @synthesize newTopCodeBarFrame=_newTopCodeBarFrame;
@property(nonatomic) struct CGRect orignTopCodeBarCodeImageFrame; // @synthesize orignTopCodeBarCodeImageFrame=_orignTopCodeBarCodeImageFrame;
@property(nonatomic) struct CGRect orignTopCodeBarCenterFrame; // @synthesize orignTopCodeBarCenterFrame=_orignTopCodeBarCenterFrame;
@property(nonatomic) _Bool isQrCodeOrientation; // @synthesize isQrCodeOrientation=_isQrCodeOrientation;
@property(nonatomic) _Bool isBarCodeOrientation; // @synthesize isBarCodeOrientation=_isBarCodeOrientation;
@property(retain, nonatomic) UIImageView *grayArrow; // @synthesize grayArrow=_grayArrow;
@property(retain, nonatomic) UILabel *payMethodLable; // @synthesize payMethodLable=_payMethodLable;
@property(retain, nonatomic) UIImageView *payMethodLogoImageView; // @synthesize payMethodLogoImageView=_payMethodLogoImageView;
@property(retain, nonatomic) UILabel *payTitleLable; // @synthesize payTitleLable=_payTitleLable;
@property(retain, nonatomic) UIButton *changePayMethodButton; // @synthesize changePayMethodButton=_changePayMethodButton;
@property(retain, nonatomic) UIView *payMethodShowView; // @synthesize payMethodShowView=_payMethodShowView;
@property(retain, nonatomic) UIView *payMethodBackgroundView; // @synthesize payMethodBackgroundView=_payMethodBackgroundView;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) UIImageView *topBarCodeImageView; // @synthesize topBarCodeImageView=_topBarCodeImageView;
@property(retain, nonatomic) UILabel *topBarCodeLabel; // @synthesize topBarCodeLabel=_topBarCodeLabel;
@property(retain, nonatomic) UIView *topBarCodeCenterView; // @synthesize topBarCodeCenterView=_topBarCodeCenterView;
@property(retain, nonatomic) UIView *barCodeFullScreenView; // @synthesize barCodeFullScreenView=_barCodeFullScreenView;
@property(retain, nonatomic) UIView *scanView; // @synthesize scanView=_scanView;
@property(retain, nonatomic) UIImageView *topTipLogoImageView; // @synthesize topTipLogoImageView=_topTipLogoImageView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool isUnfinishedOrder; // @synthesize isUnfinishedOrder=_isUnfinishedOrder;
@property(nonatomic) __weak id <JDPPaymentCodeViewDelegate> payCodeViewDelegate; // @synthesize payCodeViewDelegate=_payCodeViewDelegate;
@property(nonatomic) _Bool isEnterBackground; // @synthesize isEnterBackground=_isEnterBackground;
- (void).cxx_destruct;
- (void)sendScreentCode;
- (void)jdp_getPayResult;
- (void)startResultTimer;
- (void)stopResultTimer;
- (void)closePollPayResult;
- (void)pollPayResult:(id)arg1;
- (void)refreshUnionOrNetQrCode;
- (void)refreshUnionOrNetCode:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)closeQrCode;
- (void)refreshQrCode:(id)arg1;
- (void)private_jumpUnFinishedController;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)recordConvertBarCodePosition;
- (void)recordOriginBarCodePosition;
- (void)recordOriginCenterViewPosition;
- (void)jdp_removeFullQRViewWhenScreenShort;
- (void)jdp_removeFullQRCodeView:(id)arg1;
- (void)jdp_zoomOutFullQRCodeView:(id)arg1;
- (void)jdp_changePaymethod;
- (void)jdp_removeFullBarViewWhenScreenShort;
- (void)jdp_removeFullBarCodeView:(id)arg1;
- (void)jdp_zoomOutFullBarCodeView:(id)arg1;
- (void)updatePayMethodFrameWithDeductionDesc:(id)arg1 logo:(id)arg2 channelName:(id)arg3 arrowLogo:(id)arg4;
- (void)jdp_preparePaymethodWithModel:(id)arg1;
- (void)jdp_prepareQRcodeImageView:(id)arg1;
- (void)jdp_prepareQRCodeWithCodeString:(id)arg1;
- (void)jdp_prepareBarCodeImageView:(id)arg1;
- (void)jdp_prepareBarCodeWithCodeString:(id)arg1;
- (void)jdp_loadLogo;
- (void)updatePaymentCodeViewWithPaymentCodeModel:(id)arg1;
- (void)updatePayMethodViewWithDeductionDesc:(id)arg1 logo:(id)arg2 channelName:(id)arg3 arrowLogo:(id)arg4;
- (void)updateFullBarCode:(id)arg1;
- (void)updateFullQrCodeImage:(id)arg1;
- (void)updateQrCodeImage:(id)arg1;
- (void)updateBarCodeImage:(id)arg1;
- (void)updateTopBarCodeLabelContent:(id)arg1;
- (void)loadLogoUrl:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 currentViewController:(id)arg3;

@end

