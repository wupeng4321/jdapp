//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class BirthdayActivity, FestivalActivity, JDScore, MyJdXbCredit, NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface UserModel : JDModel
{
    _Bool _hasPlus;
    _Bool _plusBannerShow;
    _Bool _isGongyi;
    _Bool _isSchool;
    _Bool _isEmployee;
    _Bool _isWalletDegrade;
    _Bool _jdscoreAnimation;
    NSArray *_session;
    NSString *_userName;
    NSString *_password;
    NSString *_email;
    NSString *_nickName;
    NSNumber *_userScore;
    NSNumber *_balance;
    NSNumber *_level;
    NSString *_levelStr;
    NSString *_pin;
    NSNumber *_userID;
    NSString *_imgUrl;
    NSString *_schoolId;
    NSString *_type;
    NSString *_bean;
    NSNumber *_userSex;
    NSArray *_captchaArray;
    NSArray *_labels;
    NSDictionary *_customerService;
    NSString *_levelUrl;
    NSString *_levelNote;
    NSString *_plusUrl;
    NSString *_plusText;
    NSString *_plusBkImg;
    NSString *_plusRadianImg;
    NSString *_navColor;
    NSString *_plusHeadBkImg;
    NSString *_sPlusBgImg;
    NSString *_plusImgAbtest;
    NSString *_plusImgUrl;
    NSString *_xiaobaiText;
    MyJdXbCredit *_xbCredit;
    NSString *_gongyiImg;
    NSString *_schoolText;
    NSString *_employeeImg;
    NSString *_employeeUrl;
    NSString *_giftPackImageUrl;
    NSString *_giftPackJumpUrl;
    NSData *_a2;
    NSString *_birthday;
    NSString *_noModifyText;
    NSString *_tempCardTitle;
    NSString *_cardTitle;
    NSString *_cardSubTitle;
    NSString *_bannerType;
    NSString *_firstBuyJumpUrl;
    NSString *_firstBuyType;
    NSString *_firstBuyMUrl;
    BirthdayActivity *_birthdayActivity;
    FestivalActivity *_festivalActivity;
    JDScore *_jdscore;
    NSString *_selectedTabIcon;
    NSString *_unSelectedTabIcon;
    NSArray *_cardsResetOrderInfo;
}

@property(retain, nonatomic) NSArray *cardsResetOrderInfo; // @synthesize cardsResetOrderInfo=_cardsResetOrderInfo;
@property(copy, nonatomic) NSString *unSelectedTabIcon; // @synthesize unSelectedTabIcon=_unSelectedTabIcon;
@property(copy, nonatomic) NSString *selectedTabIcon; // @synthesize selectedTabIcon=_selectedTabIcon;
@property(retain, nonatomic) JDScore *jdscore; // @synthesize jdscore=_jdscore;
@property(nonatomic, getter=isJDScoreAnimation) _Bool jdscoreAnimation; // @synthesize jdscoreAnimation=_jdscoreAnimation;
@property(retain, nonatomic) FestivalActivity *festivalActivity; // @synthesize festivalActivity=_festivalActivity;
@property(retain, nonatomic) BirthdayActivity *birthdayActivity; // @synthesize birthdayActivity=_birthdayActivity;
@property(retain, nonatomic) NSString *firstBuyMUrl; // @synthesize firstBuyMUrl=_firstBuyMUrl;
@property(retain, nonatomic) NSString *firstBuyType; // @synthesize firstBuyType=_firstBuyType;
@property(retain, nonatomic) NSString *firstBuyJumpUrl; // @synthesize firstBuyJumpUrl=_firstBuyJumpUrl;
@property(retain, nonatomic) NSString *bannerType; // @synthesize bannerType=_bannerType;
@property(retain, nonatomic) NSString *cardSubTitle; // @synthesize cardSubTitle=_cardSubTitle;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(copy, nonatomic) NSString *tempCardTitle; // @synthesize tempCardTitle=_tempCardTitle;
@property(retain, nonatomic) NSString *noModifyText; // @synthesize noModifyText=_noModifyText;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSData *a2; // @synthesize a2=_a2;
@property(nonatomic) _Bool isWalletDegrade; // @synthesize isWalletDegrade=_isWalletDegrade;
@property(retain, nonatomic) NSString *giftPackJumpUrl; // @synthesize giftPackJumpUrl=_giftPackJumpUrl;
@property(retain, nonatomic) NSString *giftPackImageUrl; // @synthesize giftPackImageUrl=_giftPackImageUrl;
@property(retain, nonatomic) NSString *employeeUrl; // @synthesize employeeUrl=_employeeUrl;
@property(retain, nonatomic) NSString *employeeImg; // @synthesize employeeImg=_employeeImg;
@property(nonatomic) _Bool isEmployee; // @synthesize isEmployee=_isEmployee;
@property(retain, nonatomic) NSString *schoolText; // @synthesize schoolText=_schoolText;
@property(nonatomic) _Bool isSchool; // @synthesize isSchool=_isSchool;
@property(retain, nonatomic) NSString *gongyiImg; // @synthesize gongyiImg=_gongyiImg;
@property(nonatomic) _Bool isGongyi; // @synthesize isGongyi=_isGongyi;
@property(retain, nonatomic) MyJdXbCredit *xbCredit; // @synthesize xbCredit=_xbCredit;
@property(retain, nonatomic) NSString *xiaobaiText; // @synthesize xiaobaiText=_xiaobaiText;
@property(retain, nonatomic) NSString *plusImgUrl; // @synthesize plusImgUrl=_plusImgUrl;
@property(retain, nonatomic) NSString *plusImgAbtest; // @synthesize plusImgAbtest=_plusImgAbtest;
@property(retain, nonatomic) NSString *sPlusBgImg; // @synthesize sPlusBgImg=_sPlusBgImg;
@property(retain, nonatomic) NSString *plusHeadBkImg; // @synthesize plusHeadBkImg=_plusHeadBkImg;
@property(retain, nonatomic) NSString *navColor; // @synthesize navColor=_navColor;
@property(retain, nonatomic) NSString *plusRadianImg; // @synthesize plusRadianImg=_plusRadianImg;
@property(retain, nonatomic) NSString *plusBkImg; // @synthesize plusBkImg=_plusBkImg;
@property(nonatomic) _Bool plusBannerShow; // @synthesize plusBannerShow=_plusBannerShow;
@property(nonatomic) _Bool hasPlus; // @synthesize hasPlus=_hasPlus;
@property(retain, nonatomic) NSString *plusText; // @synthesize plusText=_plusText;
@property(retain, nonatomic) NSString *plusUrl; // @synthesize plusUrl=_plusUrl;
@property(retain, nonatomic) NSString *levelNote; // @synthesize levelNote=_levelNote;
@property(retain, nonatomic) NSString *levelUrl; // @synthesize levelUrl=_levelUrl;
@property(retain, nonatomic) NSDictionary *customerService; // @synthesize customerService=_customerService;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSArray *captchaArray; // @synthesize captchaArray=_captchaArray;
@property(retain, nonatomic) NSNumber *userSex; // @synthesize userSex=_userSex;
@property(retain, nonatomic) NSString *bean; // @synthesize bean=_bean;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *schoolId; // @synthesize schoolId=_schoolId;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) NSString *levelStr; // @synthesize levelStr=_levelStr;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSNumber *userScore; // @synthesize userScore=_userScore;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSArray *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)userInfoDictionary;
- (void)setDataWithDic:(id)arg1;

@end
