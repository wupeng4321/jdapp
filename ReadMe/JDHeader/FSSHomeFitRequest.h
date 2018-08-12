//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSSearchBaseRequest.h"

@class NSString;

@interface FSSHomeFitRequest : FSSearchBaseRequest
{
    NSString *_keywordAlias;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_currentPage;
    NSString *_pageSize;
}

@property(copy, nonatomic) NSString *pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) NSString *currentPage; // @synthesize currentPage=_currentPage;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *keywordAlias; // @synthesize keywordAlias=_keywordAlias;
- (void).cxx_destruct;
- (id)parseWithCompoments:(id)arg1;
- (void)setupRequest:(id)arg1;

@end

