//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSSearchBaseRequest.h"

@class NSString;

@interface FSFilterAllCategoryRequest : FSSearchBaseRequest
{
    NSString *_searchKeyword;
    NSString *_cid;
    NSString *_filed;
}

@property(copy, nonatomic) NSString *filed; // @synthesize filed=_filed;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void).cxx_destruct;
- (void)setupRequest:(id)arg1;

@end

