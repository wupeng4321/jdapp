//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSArray, NSNumber, NSString;

@interface TTTPagedFloorModel : TTTBaseModel
{
    _Bool _isDegraded;
    _Bool _hasNextpage;
    NSNumber *_code;
    NSString *_subCode;
    NSArray *_floorList;
    NSString *_queryCode;
    long long _pageNum;
}

+ (id)objectClassInArray;
@property(nonatomic) _Bool hasNextpage; // @synthesize hasNextpage=_hasNextpage;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(copy, nonatomic) NSString *queryCode; // @synthesize queryCode=_queryCode;
@property(retain, nonatomic) NSArray *floorList; // @synthesize floorList=_floorList;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(nonatomic) _Bool isDegraded; // @synthesize isDegraded=_isDegraded;
@property(copy, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)addGapFloor:(id)arg1;
- (void)updatePagedFloors:(id)arg1;
- (_Bool)isHasNextPage;
- (void)keyValuesDidFinishConvertingToObject;
- (id)init;

@end

