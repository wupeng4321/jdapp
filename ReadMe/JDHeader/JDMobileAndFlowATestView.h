//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "JDBaseToastPasswordViewDelegate-Protocol.h"
#import "JDBaseToastShortPasswordViewDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDChargeCentreAccessoryViewDelegate-Protocol.h"
#import "JDChargeIconAndTextViewDelegate-Protocol.h"
#import "JDFlowIntroduceViewDelegate-Protocol.h"
#import "JDSegmentedViewDelegate-Protocol.h"
#import "QBCouponDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class JDBaseToastView, JDChargeCentreAccessoryView, JDChargeFaceValueButton, JDChargeIconAndTextView, JDFlowChargeInfo, JDFlowIntroduceView, JDMobileChargeInfo, JDRechargeTextModel, JDSegmentedView, JDStoreNetwork, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UINavigationController, UITableView, UITextField, UITextRange, UIView;
@protocol JDMobileAndFlowATestViewDelegate;

@interface JDMobileAndFlowATestView : JDView <JDSegmentedViewDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, JDBaseToastViewDelegate, UIGestureRecognizerDelegate, JDChargeCentreAccessoryViewDelegate, QBCouponDelegate, JDBaseToastPasswordViewDelegate, JDBaseToastShortPasswordViewDelegate, JDFlowIntroduceViewDelegate, JDChargeIconAndTextViewDelegate>
{
    float faceBtnBgViewHeight;
    long long areaCode;
    long long mutCode;
    JDStoreNetwork *_net;
    _Bool hasDongFree;
    UIView *_historyFooterView;
    _Bool hasShowRuleToast;
    UILabel *_salesLabel;
    UIImageView *_salesIcon;
    _Bool hasClickSalesView;
    _Bool _AmountSloganExpo;
    _Bool _bMatchLocalContact;
    _Bool _exsitsContact;
    _Bool _bGetRegistedContact;
    _Bool _bChargeBtnClick;
    _Bool _selectCouponOnce;
    _Bool _bShowAlertView;
    _Bool _bHFJdShowConfig;
    _Bool _bLLJdShowConfig;
    _Bool _isPhoneNumInContact;
    _Bool _isClickClearInputBtn;
    _Bool _haveSpecialFlow;
    _Bool _haveSpecialFlowDicount;
    _Bool _hasChargeSale;
    int _abTestType;
    int _faceBtnType;
    int _userfulCount;
    int _accessorytype;
    int _couponTotalDiscout;
    float _priceBtnHeight;
    JDSegmentedView *_ABTestSegmentView;
    UIButton *_mobileChargeBtn;
    UIButton *_flowChargeBtn;
    UILabel *_firstTipLable;
    UILabel *_secondTipLable;
    UIImageView *_payInfoBgView;
    UIImageView *_faceBtnBgView;
    UIImageView *_useTipSeperator;
    JDChargeCentreAccessoryView *_couponAccessoryView;
    JDChargeCentreAccessoryView *_jingdouAccessoryView;
    UIImageView *_mobileInputBgView;
    UITextField *_inputMobileTextField;
    NSString *_previousTextFieldContent;
    UITextRange *_previousSelection;
    UIButton *_bigBtnBgBtn;
    UIButton *_selectLocalContactBtn;
    UIButton *_clearInputBtn;
    id <JDMobileAndFlowATestViewDelegate> _updateFrameDelegate;
    NSMutableArray *_chargeBtnTitleList;
    NSMutableArray *_flowBtnTitleList;
    UIImageView *_historyBgView;
    UITableView *_historyTableView;
    NSMutableDictionary *_all_Server_HistoryDict;
    NSMutableDictionary *_local_historyTelBillDict;
    NSMutableDictionary *_server_historyTelBillDict;
    NSMutableDictionary *_beansInfoDict;
    NSMutableArray *_server_historyTelBillList;
    NSMutableArray *_similarPhoneNumberList;
    NSString *_str_mobile_price;
    NSString *_strBindMobileNumb;
    JDChargeFaceValueButton *_selectedPriceBtn;
    UILabel *_mobielTipeLable;
    UILabel *_contactNameLable;
    NSMutableArray *_chargeBtnList;
    NSString *_strPassword;
    NSMutableArray *_selectedCouponsArray;
    NSMutableArray *_couponsArray;
    NSMutableArray *_noUseCouponsArray;
    JDBaseToastView *_toastView;
    JDBaseToastView *_payPwdToastView;
    NSString *_strNeedToPay;
    NSString *_payBackUrl;
    JDMobileChargeInfo *_mobileChargeInfo;
    JDFlowChargeInfo *_flowChargeInfo;
    UINavigationController *_navigationController;
    NSMutableDictionary *_defaultBetweenPriceData;
    long long _lastSelectMobileBtnIndex;
    JDFlowIntroduceView *_flowIntroduceView1;
    JDFlowIntroduceView *_flowIntroduceView2;
    JDFlowChargeInfo *_specialFlowDTO;
    JDRechargeTextModel *_textModel;
    NSString *_flowPromotionImgUrl;
    JDChargeIconAndTextView *_jingdouView;
    JDChargeIconAndTextView *_couponView;
    UIView *_salesView;
    NSString *_promotionIns;
    NSString *_promotionConnect;
    NSString *_saleType;
    NSDictionary *_cfsData;
}

@property(retain, nonatomic) NSDictionary *cfsData; // @synthesize cfsData=_cfsData;
@property(nonatomic) _Bool hasChargeSale; // @synthesize hasChargeSale=_hasChargeSale;
@property(retain, nonatomic) NSString *saleType; // @synthesize saleType=_saleType;
@property(retain, nonatomic) NSString *promotionConnect; // @synthesize promotionConnect=_promotionConnect;
@property(retain, nonatomic) NSString *promotionIns; // @synthesize promotionIns=_promotionIns;
@property(retain, nonatomic) UIView *salesView; // @synthesize salesView=_salesView;
@property(retain, nonatomic) JDChargeIconAndTextView *couponView; // @synthesize couponView=_couponView;
@property(retain, nonatomic) JDChargeIconAndTextView *jingdouView; // @synthesize jingdouView=_jingdouView;
@property(retain, nonatomic) NSString *flowPromotionImgUrl; // @synthesize flowPromotionImgUrl=_flowPromotionImgUrl;
@property(retain, nonatomic) JDRechargeTextModel *textModel; // @synthesize textModel=_textModel;
@property(retain, nonatomic) JDFlowChargeInfo *specialFlowDTO; // @synthesize specialFlowDTO=_specialFlowDTO;
@property(retain, nonatomic) JDFlowIntroduceView *flowIntroduceView2; // @synthesize flowIntroduceView2=_flowIntroduceView2;
@property(retain, nonatomic) JDFlowIntroduceView *flowIntroduceView1; // @synthesize flowIntroduceView1=_flowIntroduceView1;
@property(nonatomic) _Bool haveSpecialFlowDicount; // @synthesize haveSpecialFlowDicount=_haveSpecialFlowDicount;
@property(nonatomic) _Bool haveSpecialFlow; // @synthesize haveSpecialFlow=_haveSpecialFlow;
@property(nonatomic) _Bool isClickClearInputBtn; // @synthesize isClickClearInputBtn=_isClickClearInputBtn;
@property(nonatomic) long long lastSelectMobileBtnIndex; // @synthesize lastSelectMobileBtnIndex=_lastSelectMobileBtnIndex;
@property(retain, nonatomic) NSMutableDictionary *defaultBetweenPriceData; // @synthesize defaultBetweenPriceData=_defaultBetweenPriceData;
@property(nonatomic) _Bool isPhoneNumInContact; // @synthesize isPhoneNumInContact=_isPhoneNumInContact;
@property(nonatomic) _Bool bLLJdShowConfig; // @synthesize bLLJdShowConfig=_bLLJdShowConfig;
@property(nonatomic) _Bool bHFJdShowConfig; // @synthesize bHFJdShowConfig=_bHFJdShowConfig;
@property(nonatomic) float priceBtnHeight; // @synthesize priceBtnHeight=_priceBtnHeight;
@property(nonatomic) _Bool bShowAlertView; // @synthesize bShowAlertView=_bShowAlertView;
@property(nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool selectCouponOnce; // @synthesize selectCouponOnce=_selectCouponOnce;
@property(retain, nonatomic) JDFlowChargeInfo *flowChargeInfo; // @synthesize flowChargeInfo=_flowChargeInfo;
@property(retain, nonatomic) JDMobileChargeInfo *mobileChargeInfo; // @synthesize mobileChargeInfo=_mobileChargeInfo;
@property(retain, nonatomic) NSString *payBackUrl; // @synthesize payBackUrl=_payBackUrl;
@property(nonatomic) _Bool bChargeBtnClick; // @synthesize bChargeBtnClick=_bChargeBtnClick;
@property(retain, nonatomic) NSString *strNeedToPay; // @synthesize strNeedToPay=_strNeedToPay;
@property(retain, nonatomic) JDBaseToastView *payPwdToastView; // @synthesize payPwdToastView=_payPwdToastView;
@property(retain, nonatomic) JDBaseToastView *toastView; // @synthesize toastView=_toastView;
@property(nonatomic) int couponTotalDiscout; // @synthesize couponTotalDiscout=_couponTotalDiscout;
@property(nonatomic) int accessorytype; // @synthesize accessorytype=_accessorytype;
@property(nonatomic) int userfulCount; // @synthesize userfulCount=_userfulCount;
@property(retain, nonatomic) NSMutableArray *noUseCouponsArray; // @synthesize noUseCouponsArray=_noUseCouponsArray;
@property(retain, nonatomic) NSMutableArray *couponsArray; // @synthesize couponsArray=_couponsArray;
@property(retain, nonatomic) NSMutableArray *selectedCouponsArray; // @synthesize selectedCouponsArray=_selectedCouponsArray;
@property(retain, nonatomic) NSString *strPassword; // @synthesize strPassword=_strPassword;
@property(retain, nonatomic) NSMutableArray *chargeBtnList; // @synthesize chargeBtnList=_chargeBtnList;
@property(retain, nonatomic) UILabel *contactNameLable; // @synthesize contactNameLable=_contactNameLable;
@property(retain, nonatomic) UILabel *mobielTipeLable; // @synthesize mobielTipeLable=_mobielTipeLable;
@property(retain, nonatomic) JDChargeFaceValueButton *selectedPriceBtn; // @synthesize selectedPriceBtn=_selectedPriceBtn;
@property(retain, nonatomic) NSString *strBindMobileNumb; // @synthesize strBindMobileNumb=_strBindMobileNumb;
@property(retain, nonatomic) NSString *str_mobile_price; // @synthesize str_mobile_price=_str_mobile_price;
@property(retain, nonatomic) NSMutableArray *similarPhoneNumberList; // @synthesize similarPhoneNumberList=_similarPhoneNumberList;
@property(retain, nonatomic) NSMutableArray *server_historyTelBillList; // @synthesize server_historyTelBillList=_server_historyTelBillList;
@property(retain, nonatomic) NSMutableDictionary *beansInfoDict; // @synthesize beansInfoDict=_beansInfoDict;
@property(retain, nonatomic) NSMutableDictionary *server_historyTelBillDict; // @synthesize server_historyTelBillDict=_server_historyTelBillDict;
@property(retain, nonatomic) NSMutableDictionary *local_historyTelBillDict; // @synthesize local_historyTelBillDict=_local_historyTelBillDict;
@property(retain, nonatomic) NSMutableDictionary *all_Server_HistoryDict; // @synthesize all_Server_HistoryDict=_all_Server_HistoryDict;
@property(retain, nonatomic) UITableView *historyTableView; // @synthesize historyTableView=_historyTableView;
@property(retain, nonatomic) UIImageView *historyBgView; // @synthesize historyBgView=_historyBgView;
@property(retain, nonatomic) NSMutableArray *flowBtnTitleList; // @synthesize flowBtnTitleList=_flowBtnTitleList;
@property(retain, nonatomic) NSMutableArray *chargeBtnTitleList; // @synthesize chargeBtnTitleList=_chargeBtnTitleList;
@property(nonatomic) _Bool bGetRegistedContact; // @synthesize bGetRegistedContact=_bGetRegistedContact;
@property(nonatomic) _Bool exsitsContact; // @synthesize exsitsContact=_exsitsContact;
@property(nonatomic) _Bool bMatchLocalContact; // @synthesize bMatchLocalContact=_bMatchLocalContact;
@property(nonatomic) id <JDMobileAndFlowATestViewDelegate> updateFrameDelegate; // @synthesize updateFrameDelegate=_updateFrameDelegate;
@property(nonatomic) int faceBtnType; // @synthesize faceBtnType=_faceBtnType;
@property(nonatomic) int abTestType; // @synthesize abTestType=_abTestType;
@property(retain, nonatomic) UIButton *clearInputBtn; // @synthesize clearInputBtn=_clearInputBtn;
@property(retain, nonatomic) UIButton *selectLocalContactBtn; // @synthesize selectLocalContactBtn=_selectLocalContactBtn;
@property(retain, nonatomic) UIButton *bigBtnBgBtn; // @synthesize bigBtnBgBtn=_bigBtnBgBtn;
@property(retain, nonatomic) UITextRange *previousSelection; // @synthesize previousSelection=_previousSelection;
@property(retain, nonatomic) NSString *previousTextFieldContent; // @synthesize previousTextFieldContent=_previousTextFieldContent;
@property(retain, nonatomic) UITextField *inputMobileTextField; // @synthesize inputMobileTextField=_inputMobileTextField;
@property(retain, nonatomic) UIImageView *mobileInputBgView; // @synthesize mobileInputBgView=_mobileInputBgView;
@property(retain, nonatomic) JDChargeCentreAccessoryView *jingdouAccessoryView; // @synthesize jingdouAccessoryView=_jingdouAccessoryView;
@property(retain, nonatomic) JDChargeCentreAccessoryView *couponAccessoryView; // @synthesize couponAccessoryView=_couponAccessoryView;
@property(retain, nonatomic) UIImageView *useTipSeperator; // @synthesize useTipSeperator=_useTipSeperator;
@property(retain, nonatomic) UIImageView *faceBtnBgView; // @synthesize faceBtnBgView=_faceBtnBgView;
@property(retain, nonatomic) UIImageView *payInfoBgView; // @synthesize payInfoBgView=_payInfoBgView;
@property(retain, nonatomic) UILabel *secondTipLable; // @synthesize secondTipLable=_secondTipLable;
@property(retain, nonatomic) UILabel *firstTipLable; // @synthesize firstTipLable=_firstTipLable;
@property(retain, nonatomic) UIButton *flowChargeBtn; // @synthesize flowChargeBtn=_flowChargeBtn;
@property(retain, nonatomic) UIButton *mobileChargeBtn; // @synthesize mobileChargeBtn=_mobileChargeBtn;
@property(retain, nonatomic) JDSegmentedView *ABTestSegmentView; // @synthesize ABTestSegmentView=_ABTestSegmentView;
- (void)expoPreDepositGift;
- (void)exposureRechargeSalesView;
- (void)didTapSalesView;
- (void)salesViewLayout;
- (void)priceButtonDidTapped:(id)arg1 skuID:(id)arg2 isFirstView:(_Bool)arg3;
- (void)updatePriceLableAndChargeBtnStatus;
- (void)clickAccessoryView:(int)arg1;
- (void)didClickedCouponView;
- (void)accessoryViewDidClicked:(id)arg1;
- (void)selectButtonDidClicked:(_Bool)arg1 object:(id)arg2;
- (void)selectButtonSetEnable:(_Bool)arg1 object:(id)arg2;
- (void)calcTotalPrice;
- (void)couponFeedBack:(id)arg1;
- (void)initFlowBeansData;
- (void)initBeansData;
- (id)getAttrTipsString:(id)arg1 beanCount:(long long)arg2;
- (void)sendTrackOrderNotification:(id)arg1 price:(id)arg2;
- (void)saveChargeHistory;
- (void)doSubmitOrder;
- (void)toastView:(id)arg1 beginLoadingWithPassword:(id)arg2;
- (void)clickedForgetPasswordInToastView:(id)arg1;
- (void)clickedForgetPasswordButton;
- (void)invalidPasWord:(id)arg1;
- (void)safetyCommit:(id)arg1;
- (void)toastView:(id)arg1 didFinishWithPassword:(id)arg2;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkNeedPwdAndShowAlert;
- (void)getPayInfoRequest:(id)arg1;
- (void)getCouponAndBeanState;
- (void)getCouponsAndBeans;
- (void)chargeBtnClick:(id)arg1;
- (void)chargeBtnStatsuNotification;
- (void)getFirstData;
- (id)getNamebyMobileNumb:(id)arg1;
- (void)constructServerData2LocalData:(id)arg1;
- (void)continueUseLocalData;
- (void)getHistoryChargeInfo;
- (void)getLastChargeInfo:(int)arg1;
- (void)getRegistedPhoneNumber;
- (void)getMaintainNotice:(long long)arg1;
- (void)getProductListBymobile;
- (void)getPriceAndAddress;
- (void)queryPriceConfig;
- (void)getMobileChargeProductLists;
- (void)removeRecord:(id)arg1;
- (_Bool)bExistInSimilarPhones:(id)arg1;
- (void)showWarningMessage:(id)arg1;
- (id)formmatString:(id)arg1;
- (_Bool)isMobileNumber:(id)arg1;
- (void)setFaceBtnEnable:(_Bool)arg1;
- (void)setDefaultFaceBtnView;
- (void)setSalePriceBtnTip:(id)arg1;
- (void)setChargeBtnStatus:(_Bool)arg1;
- (void)setUIControlState:(_Bool)arg1;
- (void)setChargeBtnText:(id)arg1;
- (void)clearHistoryRecord:(id)arg1;
- (void)clearAllHistory;
- (void)hideChargeHistoryInfo;
- (void)showChargeHistoryInfo;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)getHistoryChargeSimulorMobile;
- (void)getContactNameByPhoneNumber;
- (void)isPhoneNumInContact:(id)arg1;
- (void)phoneNumDidChange:(id)arg1;
- (void)keybordWillHide:(id)arg1;
- (void)finishBtnPressed:(id)arg1;
- (void)keybordWillShow:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)reformatAsCardNumber:(id)arg1;
- (void)resetViewDate;
- (void)clearInputTextBtnClick:(id)arg1;
- (id)viewController;
- (void)contactCancelClick:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)turnToABPeoplePickerController;
- (void)getAuthorizationOfContacts:(long long)arg1;
- (void)chooseContactBtnClick:(id)arg1;
- (void)finishBtnClick:(id)arg1;
- (void)showChargeCustomeView;
- (id)getFlowProductIntroduce:(id)arg1;
- (void)refreshTableViewCellHeight:(float)arg1;
- (void)priceBtnClick:(id)arg1;
- (void)showPayInfoViewAfterScroll;
- (void)initPayInfoView;
- (void)resetFlowChargeFaceBtn:(id)arg1;
- (void)setFaceBtnTitle:(id)arg1;
- (void)segmentedView:(id)arg1 didSelectIndex:(long long)arg2 button:(id)arg3;
- (void)initSegmentView;
- (void)setSegmentView;
- (void)initFaceBtnBgViewWithFaceBtnType:(int)arg1;
- (void)initHistoryTableView;
- (void)initInputView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
