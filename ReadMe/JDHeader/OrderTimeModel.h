//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableDictionary, NSString;

@interface OrderTimeModel : JDModel
{
    _Bool _enable;
    _Bool _selected;
    NSString *_timeRange;
    NSMutableDictionary *_sendPay;
    NSString *_batchId;
}

@property(copy, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(retain, nonatomic) NSMutableDictionary *sendPay; // @synthesize sendPay=_sendPay;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) NSString *timeRange; // @synthesize timeRange=_timeRange;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
