//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSSearchBaseRequest.h"

@class FSSearchService;

@interface FSSearchRequest : FSSearchBaseRequest
{
    FSSearchService *_service;
}

@property(retain, nonatomic) FSSearchService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)parseWithCompoments:(id)arg1;
- (void)setupRequest:(id)arg1;

@end

