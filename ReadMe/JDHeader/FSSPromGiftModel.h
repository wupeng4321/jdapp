//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface FSSPromGiftModel : JDModel
{
    int _giftRemainNumInt;
    NSString *_giftId;
    NSString *_giftName;
    NSString *_giftImagePath;
    NSString *_giftAddMoney;
    NSString *_giftMsg;
    NSString *_giftNeedPrice;
    NSString *_giftNeedMsg;
    NSString *_imageDomin;
    NSNumber *_checkType;
    NSString *_maidian;
    unsigned long long _giftStockCode;
    NSString *_giftStockState;
    NSString *_giftRemainNum;
}

@property(nonatomic) int giftRemainNumInt; // @synthesize giftRemainNumInt=_giftRemainNumInt;
@property(copy, nonatomic) NSString *giftRemainNum; // @synthesize giftRemainNum=_giftRemainNum;
@property(copy, nonatomic) NSString *giftStockState; // @synthesize giftStockState=_giftStockState;
@property(nonatomic) unsigned long long giftStockCode; // @synthesize giftStockCode=_giftStockCode;
@property(copy, nonatomic) NSString *maidian; // @synthesize maidian=_maidian;
@property(retain, nonatomic) NSNumber *checkType; // @synthesize checkType=_checkType;
@property(copy, nonatomic) NSString *imageDomin; // @synthesize imageDomin=_imageDomin;
@property(copy, nonatomic) NSString *giftNeedMsg; // @synthesize giftNeedMsg=_giftNeedMsg;
@property(copy, nonatomic) NSString *giftNeedPrice; // @synthesize giftNeedPrice=_giftNeedPrice;
@property(copy, nonatomic) NSString *giftMsg; // @synthesize giftMsg=_giftMsg;
@property(copy, nonatomic) NSString *giftAddMoney; // @synthesize giftAddMoney=_giftAddMoney;
@property(copy, nonatomic) NSString *giftImagePath; // @synthesize giftImagePath=_giftImagePath;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(copy, nonatomic) NSString *giftId; // @synthesize giftId=_giftId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

