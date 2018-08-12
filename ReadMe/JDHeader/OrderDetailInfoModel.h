//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSDictionary, NSString;

@interface OrderDetailInfoModel : JDModel
{
    _Bool _canGoToShop;
    _Bool _isDuoBaoDao;
    _Bool _isVirtualOrder;
    _Bool _isLiPinGou;
    _Bool _showCourierStaffInfo;
    _Bool _showRecommendation;
    _Bool _isPreciseOrder;
    _Bool _isSamOrder;
    int _orderStatusId;
    int _idPymentType;
    int _yushouState;
    int _internationalType;
    int _uploadIDState;
    int _remainingPaymentTime;
    int _customsOrder;
    int _isShowShoppingCart;
    int _kaBaoStatus;
    int _yushouPayType;
    int _buyAgain;
    int _canEditRefundInfo;
    NSString *_orderId;
    NSString *_orderStatus;
    NSString *_orderStatusShow;
    NSString *_orderStatusName;
    NSString *_dataSubmit;
    NSString *_price;
    NSString *_parentId;
    NSString *_paymentType;
    NSString *_idCompanyBranch;
    NSString *_orderType;
    NSString *_message;
    NSString *_shopName;
    NSString *_messageTime;
    NSString *_ukey;
    NSString *_mobile;
    NSString *_discount;
    NSString *_carrier;
    NSString *_address;
    NSString *_customerName;
    NSString *_pickSiteAddress;
    NSString *_invoiceType;
    NSString *_invoiceTitle;
    NSString *_invoiceContent;
    NSString *_invaoiceDownloadUrl;
    NSString *_invoiceMobile;
    NSString *_remark;
    NSString *_sendTip;
    NSString *_yushouPayTime;
    NSString *_yushouBargin;
    NSString *_yushouBalance;
    NSString *_yushouEndPayTime;
    NSString *_yushouPromptMsg;
    NSString *_yushouBalanceShow;
    NSString *_yushouDiscountAmountContent;
    NSString *_yushouCountdownContent;
    NSString *_yushouDateTip;
    NSString *_yushouTimeTip;
    NSString *_sendPay;
    NSString *_shouldPay;
    NSString *_checkCode;
    NSString *_paymentTip;
    NSString *_internationalMark;
    NSString *_uploadIDCardTitle;
    NSString *_uploadIDCardText;
    NSString *_uploadIDCardButton;
    NSString *_uploadIDCardUrl;
    NSString *_sendWord;
    NSString *_installationMessage;
    NSString *_encryptMobile;
    NSString *_carrierMobile;
    NSString *_cancelProgressText;
    NSString *_promiseText;
    NSString *_isOldChangeForNew;
    NSString *_viewInvitationUrl;
    NSString *_payTypeCode;
    NSString *_addToKaBao;
    NSString *_installDate;
    NSString *_customMadeMesage;
    NSString *_customMadeUrl;
    NSString *_verCodeTips;
    NSString *_freightInsuranceTips;
    NSString *_wareCountMessage;
    NSString *_checkStockTip;
    NSString *_detailPrice;
    NSString *_repairUrl;
    NSString *_toCourierUrl;
    NSString *_shareCourierUrl;
    NSString *_buyAgainUrl;
    NSString *_buyAgainSku;
    NSString *_repairAB;
    NSString *_serviceEmailAddr;
    NSString *_serviceEmailTitle;
    NSString *_invoiceAuthType;
    NSString *_invoiceAuthContentTitle;
    NSString *_invoiceAuthContentCancelText;
    NSString *_invoiceAuthContentAuthText;
    NSString *_couponResult;
    NSString *_configButtonExposurePoint;
    NSString *_configButtonExposureParam;
    NSString *_boldSeparator;
    NSArray *_dd;
    NSArray *_orderInfoButtons;
    NSDictionary *_toastAmount;
    NSDictionary *_contactInfoMap;
    long long _venderId;
    long long _shopId;
}

@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
@property(nonatomic) long long venderId; // @synthesize venderId=_venderId;
@property(retain, nonatomic) NSDictionary *contactInfoMap; // @synthesize contactInfoMap=_contactInfoMap;
@property(retain, nonatomic) NSDictionary *toastAmount; // @synthesize toastAmount=_toastAmount;
@property(retain, nonatomic) NSArray *orderInfoButtons; // @synthesize orderInfoButtons=_orderInfoButtons;
@property(retain, nonatomic) NSArray *dd; // @synthesize dd=_dd;
@property(nonatomic) _Bool isSamOrder; // @synthesize isSamOrder=_isSamOrder;
@property(nonatomic) _Bool isPreciseOrder; // @synthesize isPreciseOrder=_isPreciseOrder;
@property(nonatomic) _Bool showRecommendation; // @synthesize showRecommendation=_showRecommendation;
@property(nonatomic) _Bool showCourierStaffInfo; // @synthesize showCourierStaffInfo=_showCourierStaffInfo;
@property(nonatomic) _Bool isLiPinGou; // @synthesize isLiPinGou=_isLiPinGou;
@property(nonatomic) _Bool isVirtualOrder; // @synthesize isVirtualOrder=_isVirtualOrder;
@property(nonatomic) _Bool isDuoBaoDao; // @synthesize isDuoBaoDao=_isDuoBaoDao;
@property(nonatomic) _Bool canGoToShop; // @synthesize canGoToShop=_canGoToShop;
@property(nonatomic) int canEditRefundInfo; // @synthesize canEditRefundInfo=_canEditRefundInfo;
@property(nonatomic) int buyAgain; // @synthesize buyAgain=_buyAgain;
@property(nonatomic) int yushouPayType; // @synthesize yushouPayType=_yushouPayType;
@property(nonatomic) int kaBaoStatus; // @synthesize kaBaoStatus=_kaBaoStatus;
@property(nonatomic) int isShowShoppingCart; // @synthesize isShowShoppingCart=_isShowShoppingCart;
@property(nonatomic) int customsOrder; // @synthesize customsOrder=_customsOrder;
@property(nonatomic) int remainingPaymentTime; // @synthesize remainingPaymentTime=_remainingPaymentTime;
@property(nonatomic) int uploadIDState; // @synthesize uploadIDState=_uploadIDState;
@property(nonatomic) int internationalType; // @synthesize internationalType=_internationalType;
@property(nonatomic) int yushouState; // @synthesize yushouState=_yushouState;
@property(nonatomic) int idPymentType; // @synthesize idPymentType=_idPymentType;
@property(nonatomic) int orderStatusId; // @synthesize orderStatusId=_orderStatusId;
@property(retain, nonatomic) NSString *boldSeparator; // @synthesize boldSeparator=_boldSeparator;
@property(retain, nonatomic) NSString *configButtonExposureParam; // @synthesize configButtonExposureParam=_configButtonExposureParam;
@property(retain, nonatomic) NSString *configButtonExposurePoint; // @synthesize configButtonExposurePoint=_configButtonExposurePoint;
@property(retain, nonatomic) NSString *couponResult; // @synthesize couponResult=_couponResult;
@property(retain, nonatomic) NSString *invoiceAuthContentAuthText; // @synthesize invoiceAuthContentAuthText=_invoiceAuthContentAuthText;
@property(retain, nonatomic) NSString *invoiceAuthContentCancelText; // @synthesize invoiceAuthContentCancelText=_invoiceAuthContentCancelText;
@property(retain, nonatomic) NSString *invoiceAuthContentTitle; // @synthesize invoiceAuthContentTitle=_invoiceAuthContentTitle;
@property(retain, nonatomic) NSString *invoiceAuthType; // @synthesize invoiceAuthType=_invoiceAuthType;
@property(retain, nonatomic) NSString *serviceEmailTitle; // @synthesize serviceEmailTitle=_serviceEmailTitle;
@property(retain, nonatomic) NSString *serviceEmailAddr; // @synthesize serviceEmailAddr=_serviceEmailAddr;
@property(retain, nonatomic) NSString *repairAB; // @synthesize repairAB=_repairAB;
@property(retain, nonatomic) NSString *buyAgainSku; // @synthesize buyAgainSku=_buyAgainSku;
@property(retain, nonatomic) NSString *buyAgainUrl; // @synthesize buyAgainUrl=_buyAgainUrl;
@property(retain, nonatomic) NSString *shareCourierUrl; // @synthesize shareCourierUrl=_shareCourierUrl;
@property(retain, nonatomic) NSString *toCourierUrl; // @synthesize toCourierUrl=_toCourierUrl;
@property(retain, nonatomic) NSString *repairUrl; // @synthesize repairUrl=_repairUrl;
@property(retain, nonatomic) NSString *detailPrice; // @synthesize detailPrice=_detailPrice;
@property(retain, nonatomic) NSString *checkStockTip; // @synthesize checkStockTip=_checkStockTip;
@property(retain, nonatomic) NSString *wareCountMessage; // @synthesize wareCountMessage=_wareCountMessage;
@property(retain, nonatomic) NSString *freightInsuranceTips; // @synthesize freightInsuranceTips=_freightInsuranceTips;
@property(retain, nonatomic) NSString *verCodeTips; // @synthesize verCodeTips=_verCodeTips;
@property(retain, nonatomic) NSString *customMadeUrl; // @synthesize customMadeUrl=_customMadeUrl;
@property(retain, nonatomic) NSString *customMadeMesage; // @synthesize customMadeMesage=_customMadeMesage;
@property(retain, nonatomic) NSString *installDate; // @synthesize installDate=_installDate;
@property(retain, nonatomic) NSString *addToKaBao; // @synthesize addToKaBao=_addToKaBao;
@property(retain, nonatomic) NSString *payTypeCode; // @synthesize payTypeCode=_payTypeCode;
@property(retain, nonatomic) NSString *viewInvitationUrl; // @synthesize viewInvitationUrl=_viewInvitationUrl;
@property(retain, nonatomic) NSString *isOldChangeForNew; // @synthesize isOldChangeForNew=_isOldChangeForNew;
@property(retain, nonatomic) NSString *promiseText; // @synthesize promiseText=_promiseText;
@property(retain, nonatomic) NSString *cancelProgressText; // @synthesize cancelProgressText=_cancelProgressText;
@property(retain, nonatomic) NSString *carrierMobile; // @synthesize carrierMobile=_carrierMobile;
@property(retain, nonatomic) NSString *encryptMobile; // @synthesize encryptMobile=_encryptMobile;
@property(retain, nonatomic) NSString *installationMessage; // @synthesize installationMessage=_installationMessage;
@property(retain, nonatomic) NSString *sendWord; // @synthesize sendWord=_sendWord;
@property(retain, nonatomic) NSString *uploadIDCardUrl; // @synthesize uploadIDCardUrl=_uploadIDCardUrl;
@property(retain, nonatomic) NSString *uploadIDCardButton; // @synthesize uploadIDCardButton=_uploadIDCardButton;
@property(retain, nonatomic) NSString *uploadIDCardText; // @synthesize uploadIDCardText=_uploadIDCardText;
@property(retain, nonatomic) NSString *uploadIDCardTitle; // @synthesize uploadIDCardTitle=_uploadIDCardTitle;
@property(retain, nonatomic) NSString *internationalMark; // @synthesize internationalMark=_internationalMark;
@property(retain, nonatomic) NSString *paymentTip; // @synthesize paymentTip=_paymentTip;
@property(retain, nonatomic) NSString *checkCode; // @synthesize checkCode=_checkCode;
@property(retain, nonatomic) NSString *shouldPay; // @synthesize shouldPay=_shouldPay;
@property(retain, nonatomic) NSString *sendPay; // @synthesize sendPay=_sendPay;
@property(retain, nonatomic) NSString *yushouTimeTip; // @synthesize yushouTimeTip=_yushouTimeTip;
@property(retain, nonatomic) NSString *yushouDateTip; // @synthesize yushouDateTip=_yushouDateTip;
@property(retain, nonatomic) NSString *yushouCountdownContent; // @synthesize yushouCountdownContent=_yushouCountdownContent;
@property(retain, nonatomic) NSString *yushouDiscountAmountContent; // @synthesize yushouDiscountAmountContent=_yushouDiscountAmountContent;
@property(retain, nonatomic) NSString *yushouBalanceShow; // @synthesize yushouBalanceShow=_yushouBalanceShow;
@property(retain, nonatomic) NSString *yushouPromptMsg; // @synthesize yushouPromptMsg=_yushouPromptMsg;
@property(retain, nonatomic) NSString *yushouEndPayTime; // @synthesize yushouEndPayTime=_yushouEndPayTime;
@property(retain, nonatomic) NSString *yushouBalance; // @synthesize yushouBalance=_yushouBalance;
@property(retain, nonatomic) NSString *yushouBargin; // @synthesize yushouBargin=_yushouBargin;
@property(retain, nonatomic) NSString *yushouPayTime; // @synthesize yushouPayTime=_yushouPayTime;
@property(retain, nonatomic) NSString *sendTip; // @synthesize sendTip=_sendTip;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *invoiceMobile; // @synthesize invoiceMobile=_invoiceMobile;
@property(retain, nonatomic) NSString *invaoiceDownloadUrl; // @synthesize invaoiceDownloadUrl=_invaoiceDownloadUrl;
@property(retain, nonatomic) NSString *invoiceContent; // @synthesize invoiceContent=_invoiceContent;
@property(retain, nonatomic) NSString *invoiceTitle; // @synthesize invoiceTitle=_invoiceTitle;
@property(retain, nonatomic) NSString *invoiceType; // @synthesize invoiceType=_invoiceType;
@property(retain, nonatomic) NSString *pickSiteAddress; // @synthesize pickSiteAddress=_pickSiteAddress;
@property(retain, nonatomic) NSString *customerName; // @synthesize customerName=_customerName;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *ukey; // @synthesize ukey=_ukey;
@property(retain, nonatomic) NSString *messageTime; // @synthesize messageTime=_messageTime;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) NSString *idCompanyBranch; // @synthesize idCompanyBranch=_idCompanyBranch;
@property(retain, nonatomic) NSString *paymentType; // @synthesize paymentType=_paymentType;
@property(retain, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *dataSubmit; // @synthesize dataSubmit=_dataSubmit;
@property(retain, nonatomic) NSString *orderStatusName; // @synthesize orderStatusName=_orderStatusName;
@property(retain, nonatomic) NSString *orderStatusShow; // @synthesize orderStatusShow=_orderStatusShow;
@property(retain, nonatomic) NSString *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;
- (void)dealloc;

@end

