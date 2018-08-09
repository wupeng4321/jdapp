//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractVM.h"

@class COCheckoutTagLabelVM, NSArray, NSString;

@interface COCheckoutMainShipmentVM : COCheckoutMainAbstractVM
{
    _Bool _isHaveSecond;
    _Bool _isBigAndMid;
    _Bool _hasSelectedTime;
    long long _style;
    NSString *_shipmentName;
    NSString *_midSmallDate;
    NSString *_midSmallInstallDate;
    NSString *_midSmallDateIcon;
    NSString *_midSmallDateIconMsg;
    NSString *_bigItemDate;
    NSString *_bigItemInstallDate;
    NSString *_bigItemDateIcon;
    NSString *_bigItemDateIconMsg;
    NSString *_shipmentTipMessage;
    NSArray *_weekendDateList;
    COCheckoutTagLabelVM *_tag;
    NSString *_tipMessage;
    NSString *_tipIcon;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *tipIcon; // @synthesize tipIcon=_tipIcon;
@property(copy, nonatomic) NSString *tipMessage; // @synthesize tipMessage=_tipMessage;
@property(retain, nonatomic) COCheckoutTagLabelVM *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSArray *weekendDateList; // @synthesize weekendDateList=_weekendDateList;
@property(copy, nonatomic) NSString *shipmentTipMessage; // @synthesize shipmentTipMessage=_shipmentTipMessage;
@property(copy, nonatomic) NSString *bigItemDateIconMsg; // @synthesize bigItemDateIconMsg=_bigItemDateIconMsg;
@property(copy, nonatomic) NSString *bigItemDateIcon; // @synthesize bigItemDateIcon=_bigItemDateIcon;
@property(copy, nonatomic) NSString *bigItemInstallDate; // @synthesize bigItemInstallDate=_bigItemInstallDate;
@property(copy, nonatomic) NSString *bigItemDate; // @synthesize bigItemDate=_bigItemDate;
@property(copy, nonatomic) NSString *midSmallDateIconMsg; // @synthesize midSmallDateIconMsg=_midSmallDateIconMsg;
@property(copy, nonatomic) NSString *midSmallDateIcon; // @synthesize midSmallDateIcon=_midSmallDateIcon;
@property(copy, nonatomic) NSString *midSmallInstallDate; // @synthesize midSmallInstallDate=_midSmallInstallDate;
@property(copy, nonatomic) NSString *midSmallDate; // @synthesize midSmallDate=_midSmallDate;
@property(copy, nonatomic) NSString *shipmentName; // @synthesize shipmentName=_shipmentName;
@property(nonatomic) _Bool hasSelectedTime; // @synthesize hasSelectedTime=_hasSelectedTime;
@property(nonatomic) _Bool isBigAndMid; // @synthesize isBigAndMid=_isBigAndMid;
@property(nonatomic) _Bool isHaveSecond; // @synthesize isHaveSecond=_isHaveSecond;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (unsigned long long)type;

@end

