//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface OrderLogTraceModel : JDModel
{
    unsigned long long _type;
    double _cellHeight;
    NSString *_serviceIcon;
    NSString *_serviceName;
    NSString *_serviceContent;
    NSString *_createTime;
    NSString *_message;
    NSString *_stateIcon;
    long long _iconType;
}

@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(copy, nonatomic) NSString *stateIcon; // @synthesize stateIcon=_stateIcon;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *serviceContent; // @synthesize serviceContent=_serviceContent;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) NSString *serviceIcon; // @synthesize serviceIcon=_serviceIcon;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

