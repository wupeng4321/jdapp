//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol-Protocol.h"

@class NSString, TTTAdsModel;

@interface TTTAds1R2_Model : TTTBaseModel <TTTJumpProtocol>
{
    TTTAdsModel *_leftAds;
    TTTAdsModel *_rightAds;
}

@property(retain, nonatomic) TTTAdsModel *rightAds; // @synthesize rightAds=_rightAds;
@property(retain, nonatomic) TTTAdsModel *leftAds; // @synthesize leftAds=_leftAds;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

