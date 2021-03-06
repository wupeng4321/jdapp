//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface FinderAttentionFeedListRequset : NSObject
{
    _Bool _getFeedList;
    _Bool _mask;
    NSString *_lastvisitTime;
    NSString *_offSet;
    NSNumber *_upwardTime;
    NSNumber *_downwardNum;
    NSNumber *_page;
    NSString *_readIds;
    NSNumber *_upItemSize;
    long long _requestType;
    NSNumber *_direction;
}

@property(retain, nonatomic) NSNumber *direction; // @synthesize direction=_direction;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) _Bool mask; // @synthesize mask=_mask;
@property(retain, nonatomic) NSNumber *upItemSize; // @synthesize upItemSize=_upItemSize;
@property(nonatomic) _Bool getFeedList; // @synthesize getFeedList=_getFeedList;
@property(copy, nonatomic) NSString *readIds; // @synthesize readIds=_readIds;
@property(retain, nonatomic) NSNumber *page; // @synthesize page=_page;
@property(retain, nonatomic) NSNumber *downwardNum; // @synthesize downwardNum=_downwardNum;
@property(retain, nonatomic) NSNumber *upwardTime; // @synthesize upwardTime=_upwardTime;
@property(retain, nonatomic) NSString *offSet; // @synthesize offSet=_offSet;
@property(retain, nonatomic) NSString *lastvisitTime; // @synthesize lastvisitTime=_lastvisitTime;
- (void).cxx_destruct;
- (void)configureWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *pagingParam;
- (void)setup;
- (id)init;

@end

