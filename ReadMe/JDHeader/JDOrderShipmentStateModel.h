//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface JDOrderShipmentStateModel : JDModel
{
    _Bool _isToSelectedPromise311;
    _Bool _isToSelectedPromise311JZD;
    _Bool _isToSelectedShipDate;
    _Bool _isToSelectedBigShipDate;
    _Bool _isToSelectedBigInstallDate;
    _Bool _isSelectedJZD;
    _Bool _isToSelectedDatePickSite;
    _Bool _isToSelected_JD;
    _Bool _isToSelected_Pick;
    _Bool _isToSelectedCardeliver;
    _Bool _isToSelectedCardeliverProtocolInfo;
    NSString *_promiseDate;
    NSString *_promiseTimeRange;
    NSString *_promiseWeek;
    NSString *_show311Text;
    NSString *_sopJDAndOtherShipmentId;
    NSString *_sop_Date_JD_JDAndOther;
    NSString *_sop_DateStr_JD_JDAndOther;
    NSNumber *_sop_BatchId_JD_JDAndOther;
    NSString *_sop_Date_Other_JDAndOther;
    NSString *_sop_DateStr_Other_JDAndOther;
    NSNumber *_sop_BatchId_Other_JDAndOther;
    NSString *_sopOther_ShipmentId;
    NSString *_sop_Date_Other;
    NSString *_sop_DateStr_Other;
    NSNumber *_sop_BatchId_Other;
    NSString *_sopJD_ShipmentId;
    NSString *_sop_Date_JD;
    NSString *_sop_DateStr_JD;
    NSNumber *_sop_BatchId_JD;
    NSString *_promise311BatchId;
    NSString *_promiseDateJZD;
    NSString *_promiseBatchIdJZD;
    NSString *_promiseWeekJZD;
    NSString *_show311TextJZD;
    NSString *_promiseTagType;
    NSString *_promiseMsgJSD;
    NSString *_promiseMsgBigItmeJSD;
    NSString *_bigShipDateNameJZD;
    NSString *_bigShipDateValueJZD;
    NSString *_bigShipDateBatchIdJZD;
    NSString *_bigShipDateNameBZD;
    NSString *_bigShipDateValueBZD;
    NSString *_bigShipDateBatchIdBZD;
    NSString *_shipDateName;
    NSNumber *_shipDateID;
    NSString *_bigShipDateName;
    NSString *_bigShipDateValue;
    NSString *_bigInstallDateName;
    NSString *_bigInstallDateValue;
    NSNumber *_pickSiteId;
    NSString *_pickSiteName;
    NSString *_pickSiteDateName;
    NSString *_pickSiteDateValue;
    NSNumber *_shipmentId_JD;
    NSNumber *_shipmentId_Pick;
}

@property(nonatomic) _Bool isToSelectedCardeliverProtocolInfo; // @synthesize isToSelectedCardeliverProtocolInfo=_isToSelectedCardeliverProtocolInfo;
@property(nonatomic) _Bool isToSelectedCardeliver; // @synthesize isToSelectedCardeliver=_isToSelectedCardeliver;
@property(retain, nonatomic) NSNumber *shipmentId_Pick; // @synthesize shipmentId_Pick=_shipmentId_Pick;
@property(nonatomic) _Bool isToSelected_Pick; // @synthesize isToSelected_Pick=_isToSelected_Pick;
@property(retain, nonatomic) NSNumber *shipmentId_JD; // @synthesize shipmentId_JD=_shipmentId_JD;
@property(nonatomic) _Bool isToSelected_JD; // @synthesize isToSelected_JD=_isToSelected_JD;
@property(nonatomic) _Bool isToSelectedDatePickSite; // @synthesize isToSelectedDatePickSite=_isToSelectedDatePickSite;
@property(retain, nonatomic) NSString *pickSiteDateValue; // @synthesize pickSiteDateValue=_pickSiteDateValue;
@property(retain, nonatomic) NSString *pickSiteDateName; // @synthesize pickSiteDateName=_pickSiteDateName;
@property(retain, nonatomic) NSString *pickSiteName; // @synthesize pickSiteName=_pickSiteName;
@property(retain, nonatomic) NSNumber *pickSiteId; // @synthesize pickSiteId=_pickSiteId;
@property(nonatomic) _Bool isSelectedJZD; // @synthesize isSelectedJZD=_isSelectedJZD;
@property(nonatomic) _Bool isToSelectedBigInstallDate; // @synthesize isToSelectedBigInstallDate=_isToSelectedBigInstallDate;
@property(retain, nonatomic) NSString *bigInstallDateValue; // @synthesize bigInstallDateValue=_bigInstallDateValue;
@property(retain, nonatomic) NSString *bigInstallDateName; // @synthesize bigInstallDateName=_bigInstallDateName;
@property(nonatomic) _Bool isToSelectedBigShipDate; // @synthesize isToSelectedBigShipDate=_isToSelectedBigShipDate;
@property(retain, nonatomic) NSString *bigShipDateValue; // @synthesize bigShipDateValue=_bigShipDateValue;
@property(retain, nonatomic) NSString *bigShipDateName; // @synthesize bigShipDateName=_bigShipDateName;
@property(nonatomic) _Bool isToSelectedShipDate; // @synthesize isToSelectedShipDate=_isToSelectedShipDate;
@property(retain, nonatomic) NSNumber *shipDateID; // @synthesize shipDateID=_shipDateID;
@property(retain, nonatomic) NSString *shipDateName; // @synthesize shipDateName=_shipDateName;
@property(retain, nonatomic) NSString *bigShipDateBatchIdBZD; // @synthesize bigShipDateBatchIdBZD=_bigShipDateBatchIdBZD;
@property(retain, nonatomic) NSString *bigShipDateValueBZD; // @synthesize bigShipDateValueBZD=_bigShipDateValueBZD;
@property(retain, nonatomic) NSString *bigShipDateNameBZD; // @synthesize bigShipDateNameBZD=_bigShipDateNameBZD;
@property(retain, nonatomic) NSString *bigShipDateBatchIdJZD; // @synthesize bigShipDateBatchIdJZD=_bigShipDateBatchIdJZD;
@property(retain, nonatomic) NSString *bigShipDateValueJZD; // @synthesize bigShipDateValueJZD=_bigShipDateValueJZD;
@property(retain, nonatomic) NSString *bigShipDateNameJZD; // @synthesize bigShipDateNameJZD=_bigShipDateNameJZD;
@property(retain, nonatomic) NSString *promiseMsgBigItmeJSD; // @synthesize promiseMsgBigItmeJSD=_promiseMsgBigItmeJSD;
@property(retain, nonatomic) NSString *promiseMsgJSD; // @synthesize promiseMsgJSD=_promiseMsgJSD;
@property(retain, nonatomic) NSString *promiseTagType; // @synthesize promiseTagType=_promiseTagType;
@property(nonatomic) _Bool isToSelectedPromise311JZD; // @synthesize isToSelectedPromise311JZD=_isToSelectedPromise311JZD;
@property(retain, nonatomic) NSString *show311TextJZD; // @synthesize show311TextJZD=_show311TextJZD;
@property(retain, nonatomic) NSString *promiseWeekJZD; // @synthesize promiseWeekJZD=_promiseWeekJZD;
@property(retain, nonatomic) NSString *promiseBatchIdJZD; // @synthesize promiseBatchIdJZD=_promiseBatchIdJZD;
@property(retain, nonatomic) NSString *promiseDateJZD; // @synthesize promiseDateJZD=_promiseDateJZD;
@property(retain, nonatomic) NSString *promise311BatchId; // @synthesize promise311BatchId=_promise311BatchId;
@property(retain, nonatomic) NSNumber *sop_BatchId_JD; // @synthesize sop_BatchId_JD=_sop_BatchId_JD;
@property(retain, nonatomic) NSString *sop_DateStr_JD; // @synthesize sop_DateStr_JD=_sop_DateStr_JD;
@property(retain, nonatomic) NSString *sop_Date_JD; // @synthesize sop_Date_JD=_sop_Date_JD;
@property(retain, nonatomic) NSString *sopJD_ShipmentId; // @synthesize sopJD_ShipmentId=_sopJD_ShipmentId;
@property(retain, nonatomic) NSNumber *sop_BatchId_Other; // @synthesize sop_BatchId_Other=_sop_BatchId_Other;
@property(retain, nonatomic) NSString *sop_DateStr_Other; // @synthesize sop_DateStr_Other=_sop_DateStr_Other;
@property(retain, nonatomic) NSString *sop_Date_Other; // @synthesize sop_Date_Other=_sop_Date_Other;
@property(retain, nonatomic) NSString *sopOther_ShipmentId; // @synthesize sopOther_ShipmentId=_sopOther_ShipmentId;
@property(retain, nonatomic) NSNumber *sop_BatchId_Other_JDAndOther; // @synthesize sop_BatchId_Other_JDAndOther=_sop_BatchId_Other_JDAndOther;
@property(retain, nonatomic) NSString *sop_DateStr_Other_JDAndOther; // @synthesize sop_DateStr_Other_JDAndOther=_sop_DateStr_Other_JDAndOther;
@property(retain, nonatomic) NSString *sop_Date_Other_JDAndOther; // @synthesize sop_Date_Other_JDAndOther=_sop_Date_Other_JDAndOther;
@property(retain, nonatomic) NSNumber *sop_BatchId_JD_JDAndOther; // @synthesize sop_BatchId_JD_JDAndOther=_sop_BatchId_JD_JDAndOther;
@property(retain, nonatomic) NSString *sop_DateStr_JD_JDAndOther; // @synthesize sop_DateStr_JD_JDAndOther=_sop_DateStr_JD_JDAndOther;
@property(retain, nonatomic) NSString *sop_Date_JD_JDAndOther; // @synthesize sop_Date_JD_JDAndOther=_sop_Date_JD_JDAndOther;
@property(retain, nonatomic) NSString *sopJDAndOtherShipmentId; // @synthesize sopJDAndOtherShipmentId=_sopJDAndOtherShipmentId;
@property(nonatomic) _Bool isToSelectedPromise311; // @synthesize isToSelectedPromise311=_isToSelectedPromise311;
@property(retain, nonatomic) NSString *show311Text; // @synthesize show311Text=_show311Text;
@property(retain, nonatomic) NSString *promiseWeek; // @synthesize promiseWeek=_promiseWeek;
@property(retain, nonatomic) NSString *promiseTimeRange; // @synthesize promiseTimeRange=_promiseTimeRange;
@property(retain, nonatomic) NSString *promiseDate; // @synthesize promiseDate=_promiseDate;
- (void).cxx_destruct;
- (void)clearPickSiteData;
- (void)clearBidShipModelStatusForJZD;
- (void)clearMidSmallModelStatusForJZD;
- (void)recoveryPromise211:(id)arg1;
- (id)init;

@end
