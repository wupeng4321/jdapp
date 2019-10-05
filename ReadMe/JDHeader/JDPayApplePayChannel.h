//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayBaseChannel.h"

#import "UPAPayPluginDelegate-Protocol.h"

@class NSString;

@interface JDPayApplePayChannel : JDPayBaseChannel <UPAPayPluginDelegate>
{
    _Bool _isGoods;
    NSString *_tn;
}

@property(nonatomic) _Bool isGoods; // @synthesize isGoods=_isGoods;
@property(copy, nonatomic) NSString *tn; // @synthesize tn=_tn;
- (void).cxx_destruct;
- (void)willEnterbackground:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)UPAPayPluginResult:(id)arg1;
- (_Bool)startPay;
- (id)initWithTn:(id)arg1 isGoods:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
