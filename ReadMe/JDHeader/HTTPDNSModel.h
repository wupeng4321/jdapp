//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface HTTPDNSModel : JDModel
{
    NSString *_host;
    NSString *_ip;
    NSString *_ttl;
    NSString *_port;
    double _derivedTime;
}

@property(nonatomic) double derivedTime; // @synthesize derivedTime=_derivedTime;
@property(copy, nonatomic) NSString *port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *ttl; // @synthesize ttl=_ttl;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

