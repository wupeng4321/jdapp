//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork;

@interface PersonalRecManager : NSObject
{
    JDStoreNetwork *netWork;
}

- (void).cxx_destruct;
- (void)getRecWaresBySku:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)getRecWaresByGeneId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)cancelRequest;

@end
