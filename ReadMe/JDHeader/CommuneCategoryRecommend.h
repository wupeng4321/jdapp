//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface CommuneCategoryRecommend : JDModel
{
    NSString *_categoryId;
    NSString *_categoryName;
    NSString *_categoryIdType;
}

@property(copy, nonatomic) NSString *categoryIdType; // @synthesize categoryIdType=_categoryIdType;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

