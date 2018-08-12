//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderDetailFloorBaseView.h"

#import "FleElementViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface OrderDetailFloorView_ConfigTemp01 : OrderDetailFloorBaseView <FleElementViewDelegate>
{
    int _jumpState;
    NSMutableDictionary *_elementViewDic;
    NSString *_jumpUrl;
}

@property(nonatomic) int jumpState; // @synthesize jumpState=_jumpState;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSMutableDictionary *elementViewDic; // @synthesize elementViewDic=_elementViewDic;
- (void).cxx_destruct;
- (void)config01Tap:(id)arg1;
- (void)jumpToWebWithJumpUrl:(id)arg1 opType:(int)arg2;
- (double)getViewHeight;
- (void)setUpUI;
- (void)setViewWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

