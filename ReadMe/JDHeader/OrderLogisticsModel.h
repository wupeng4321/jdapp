//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableArray, NSString;

@interface OrderLogisticsModel : JDModel
{
    unsigned long long _dataState;
    NSString *_orderId;
    NSString *_headerPic;
    NSString *_title;
    NSMutableArray *_subTitles;
    NSString *_buttonText;
    NSMutableArray *_traceDataSource;
    NSString *_bottomText;
    NSString *_bottomUrl;
    long long _bottomOpType;
}

@property(nonatomic) long long bottomOpType; // @synthesize bottomOpType=_bottomOpType;
@property(copy, nonatomic) NSString *bottomUrl; // @synthesize bottomUrl=_bottomUrl;
@property(copy, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) NSMutableArray *traceDataSource; // @synthesize traceDataSource=_traceDataSource;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) NSMutableArray *subTitles; // @synthesize subTitles=_subTitles;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *headerPic; // @synthesize headerPic=_headerPic;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) unsigned long long dataState; // @synthesize dataState=_dataState;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

