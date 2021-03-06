//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BJCCScenarioModel, BJMarketAggregatModel, BJMarketCouponModel, NSNumber, NSString;

@interface BJChoiceCouponModel : NSObject
{
    _Bool _isReceived;
    _Bool _ynPlus;
    NSString *_pid;
    NSString *_key;
    long long _rate;
    NSString *_imageUrl;
    long long _couponState;
    NSString *_shopId;
    NSString *_jumpUrl;
    long long _jumpFlag;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_quota;
    NSString *_limitInfo;
    long long _categoryLimit;
    NSString *_faceValue;
    NSString *_shopLogo;
    NSString *_categoryId;
    NSString *_ruleKey;
    long long _receiveNumber;
    long long _couponType;
    NSString *_effectStartDate;
    NSString *_effectEndDate;
    NSString *_batchId;
    NSString *_couponId;
    NSString *_roleId;
    long long _leftTime;
    NSString *_costBeanInfo;
    NSString *_whiteFaceValue;
    NSString *_whiteInfo;
    long long _couponCatalog;
    long long _beanCouponType;
    long long _totalBean;
    NSString *_operateWord;
    NSString *_backImage;
    NSString *_shareUrl;
    NSNumber *_batchCount;
    NSString *_successImg1;
    NSString *_successImg2;
    NSNumber *_promoteFlag;
    NSString *_mainCouponColor;
    NSString *_viceCouponColor;
    NSNumber *_toTopFlag;
    NSNumber *_ynLabel;
    NSString *_couponTagTitle;
    NSString *_couponTagColorFlag;
    NSNumber *_ynTop;
    NSString *_successLabel;
    NSString *_biInfoOrder;
    NSString *_remindPeople;
    NSString *_sellId;
    NSString *_guidePicture;
    NSString *_unifyFaceValue;
    NSString *_unifyQuota;
    NSString *_receiveKey;
    NSString *_catalogNew;
    BJMarketAggregatModel *_marketAggreatModel;
    NSString *_financeId;
    BJCCScenarioModel *_scenarioModel;
    NSString *_discountStr;
    NSString *_gifImgUrl;
    BJMarketCouponModel *_marketCouponModel;
    NSString *_topCategoryNum;
    NSString *_tagText;
    NSString *_unit;
    NSString *_biimpr;
    NSString *_labelPriority;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) NSString *labelPriority; // @synthesize labelPriority=_labelPriority;
@property(retain, nonatomic) NSString *biimpr; // @synthesize biimpr=_biimpr;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(retain, nonatomic) NSString *topCategoryNum; // @synthesize topCategoryNum=_topCategoryNum;
@property(retain, nonatomic) BJMarketCouponModel *marketCouponModel; // @synthesize marketCouponModel=_marketCouponModel;
@property(retain, nonatomic) NSString *gifImgUrl; // @synthesize gifImgUrl=_gifImgUrl;
@property(retain, nonatomic) NSString *discountStr; // @synthesize discountStr=_discountStr;
@property(retain, nonatomic) BJCCScenarioModel *scenarioModel; // @synthesize scenarioModel=_scenarioModel;
@property(copy, nonatomic) NSString *financeId; // @synthesize financeId=_financeId;
@property(nonatomic) _Bool ynPlus; // @synthesize ynPlus=_ynPlus;
@property(retain, nonatomic) BJMarketAggregatModel *marketAggreatModel; // @synthesize marketAggreatModel=_marketAggreatModel;
@property(copy, nonatomic) NSString *catalogNew; // @synthesize catalogNew=_catalogNew;
@property(copy, nonatomic) NSString *receiveKey; // @synthesize receiveKey=_receiveKey;
@property(copy, nonatomic) NSString *unifyQuota; // @synthesize unifyQuota=_unifyQuota;
@property(copy, nonatomic) NSString *unifyFaceValue; // @synthesize unifyFaceValue=_unifyFaceValue;
@property(readonly, copy, nonatomic) NSString *guidePicture; // @synthesize guidePicture=_guidePicture;
@property(copy, nonatomic) NSString *sellId; // @synthesize sellId=_sellId;
@property(readonly, copy, nonatomic) NSString *remindPeople; // @synthesize remindPeople=_remindPeople;
@property(readonly, copy, nonatomic) NSString *biInfoOrder; // @synthesize biInfoOrder=_biInfoOrder;
@property(copy, nonatomic) NSString *successLabel; // @synthesize successLabel=_successLabel;
@property(readonly, nonatomic) NSNumber *ynTop; // @synthesize ynTop=_ynTop;
@property(readonly, copy, nonatomic) NSString *couponTagColorFlag; // @synthesize couponTagColorFlag=_couponTagColorFlag;
@property(readonly, copy, nonatomic) NSString *couponTagTitle; // @synthesize couponTagTitle=_couponTagTitle;
@property(readonly, nonatomic) NSNumber *ynLabel; // @synthesize ynLabel=_ynLabel;
@property(readonly, nonatomic) NSNumber *toTopFlag; // @synthesize toTopFlag=_toTopFlag;
@property(readonly, copy, nonatomic) NSString *viceCouponColor; // @synthesize viceCouponColor=_viceCouponColor;
@property(readonly, copy, nonatomic) NSString *mainCouponColor; // @synthesize mainCouponColor=_mainCouponColor;
@property(readonly, nonatomic) NSNumber *promoteFlag; // @synthesize promoteFlag=_promoteFlag;
@property(copy, nonatomic) NSString *successImg2; // @synthesize successImg2=_successImg2;
@property(copy, nonatomic) NSString *successImg1; // @synthesize successImg1=_successImg1;
@property(readonly, nonatomic) NSNumber *batchCount; // @synthesize batchCount=_batchCount;
@property(readonly, copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(readonly, copy, nonatomic) NSString *backImage; // @synthesize backImage=_backImage;
@property(readonly, copy, nonatomic) NSString *operateWord; // @synthesize operateWord=_operateWord;
@property(readonly, nonatomic) long long totalBean; // @synthesize totalBean=_totalBean;
@property(nonatomic) long long beanCouponType; // @synthesize beanCouponType=_beanCouponType;
@property(readonly, nonatomic) long long couponCatalog; // @synthesize couponCatalog=_couponCatalog;
@property(readonly, copy, nonatomic) NSString *whiteInfo; // @synthesize whiteInfo=_whiteInfo;
@property(readonly, copy, nonatomic) NSString *whiteFaceValue; // @synthesize whiteFaceValue=_whiteFaceValue;
@property(copy, nonatomic) NSString *costBeanInfo; // @synthesize costBeanInfo=_costBeanInfo;
@property(nonatomic) long long leftTime; // @synthesize leftTime=_leftTime;
@property(copy, nonatomic) NSString *roleId; // @synthesize roleId=_roleId;
@property(readonly, copy, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
@property(copy, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(readonly, copy, nonatomic) NSString *effectEndDate; // @synthesize effectEndDate=_effectEndDate;
@property(readonly, copy, nonatomic) NSString *effectStartDate; // @synthesize effectStartDate=_effectStartDate;
@property(nonatomic) long long couponType; // @synthesize couponType=_couponType;
@property(readonly, nonatomic) long long receiveNumber; // @synthesize receiveNumber=_receiveNumber;
@property(nonatomic) _Bool isReceived; // @synthesize isReceived=_isReceived;
@property(readonly, copy, nonatomic) NSString *ruleKey; // @synthesize ruleKey=_ruleKey;
@property(readonly, copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(readonly, copy, nonatomic) NSString *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(copy, nonatomic) NSString *faceValue; // @synthesize faceValue=_faceValue;
@property(readonly, nonatomic) long long categoryLimit; // @synthesize categoryLimit=_categoryLimit;
@property(copy, nonatomic) NSString *limitInfo; // @synthesize limitInfo=_limitInfo;
@property(retain, nonatomic) NSString *quota; // @synthesize quota=_quota;
@property(readonly, copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(readonly, copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) long long jumpFlag; // @synthesize jumpFlag=_jumpFlag;
@property(readonly, copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(nonatomic) long long couponState; // @synthesize couponState=_couponState;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)newValueFromOldValue:(id)arg1 property:(id)arg2;

@end

