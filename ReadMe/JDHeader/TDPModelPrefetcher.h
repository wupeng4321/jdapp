//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TDPModelInfoRequestor, TDPModelfilesTool;

@interface TDPModelPrefetcher : NSObject
{
    TDPModelInfoRequestor *_modelInfoRequestor;
    TDPModelfilesTool *_modelfilesTool;
}

@property(retain, nonatomic) TDPModelfilesTool *modelfilesTool; // @synthesize modelfilesTool=_modelfilesTool;
@property(retain, nonatomic) TDPModelInfoRequestor *modelInfoRequestor; // @synthesize modelInfoRequestor=_modelInfoRequestor;
- (void).cxx_destruct;
- (void)prefetchModelWithSku:(id)arg1 modelId:(long long)arg2;

@end

