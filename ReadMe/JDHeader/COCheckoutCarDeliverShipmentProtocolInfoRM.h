//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface COCheckoutCarDeliverShipmentProtocolInfoRM : JDModel
{
    NSString *_clickStr;
    NSString *_clickStrColor;
    NSString *_protocolRule;
    NSString *_protocolOuterMsg;
    NSString *_protocolOuterMsgColor;
    NSString *_toastMsg;
}

@property(copy, nonatomic) NSString *toastMsg; // @synthesize toastMsg=_toastMsg;
@property(copy, nonatomic) NSString *protocolOuterMsgColor; // @synthesize protocolOuterMsgColor=_protocolOuterMsgColor;
@property(copy, nonatomic) NSString *protocolOuterMsg; // @synthesize protocolOuterMsg=_protocolOuterMsg;
@property(copy, nonatomic) NSString *protocolRule; // @synthesize protocolRule=_protocolRule;
@property(copy, nonatomic) NSString *clickStrColor; // @synthesize clickStrColor=_clickStrColor;
@property(copy, nonatomic) NSString *clickStr; // @synthesize clickStr=_clickStr;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

