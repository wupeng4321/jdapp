//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JDRankHotSearch : NSObject
{
    _Bool _newField;
    _Bool _operate;
    NSString *_currentRank;
    NSArray *_products;
    NSString *_ranking;
    NSString *_searchCount;
    NSString *_searchKey;
}

@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSString *searchCount; // @synthesize searchCount=_searchCount;
@property(retain, nonatomic) NSString *ranking; // @synthesize ranking=_ranking;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(nonatomic) _Bool operate; // @synthesize operate=_operate;
@property(nonatomic) _Bool newField; // @synthesize newField=_newField;
@property(retain, nonatomic) NSString *currentRank; // @synthesize currentRank=_currentRank;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

