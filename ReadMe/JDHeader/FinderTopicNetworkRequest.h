//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FinderTopicNetworkRequest : NSObject
{
    NSString *_tagId;
    NSString *_page;
    NSString *_offSet;
    NSString *_subPosition;
    NSString *_from;
}

@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *subPosition; // @synthesize subPosition=_subPosition;
@property(copy, nonatomic) NSString *offSet; // @synthesize offSet=_offSet;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *pageParam;
- (void)resetParam;
- (id)initWithTagID:(id)arg1 subPostion:(id)arg2;
- (id)init;

@end

