//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractApi.h"

@class COCheckoutCardReq;

@interface COCheckoutGetCardsGiftsApi : COCheckoutAbstractApi
{
    COCheckoutCardReq *_apiModel;
}

@property(retain, nonatomic) COCheckoutCardReq *apiModel; // @synthesize apiModel=_apiModel;
- (void).cxx_destruct;
- (id)parseWithKeyValues:(id)arg1;
- (id)requestParams;
- (id)functionId;
- (id)initWithApiModel:(id)arg1;

@end

