//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableDictionary, NSString;

@interface VirtualProtocolModel : JDModel
{
    NSString *_type;
    NSString *_url;
    NSMutableDictionary *_param;
}

@property(retain, nonatomic) NSMutableDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
