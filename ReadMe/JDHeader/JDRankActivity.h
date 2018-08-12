//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JDRankActivity : NSObject
{
    _Bool _newField;
    NSString *_activityId;
    NSString *_activityName;
    NSString *_activityNote;
    NSString *_cateId;
    NSString *_cateName;
    NSString *_currentRank;
    NSString *_followNum;
    long long _isJdActivity;
    NSArray *_products;
    NSString *_ranking;
    NSArray *_brandNameList;
}

@property(retain, nonatomic) NSArray *brandNameList; // @synthesize brandNameList=_brandNameList;
@property(retain, nonatomic) NSString *ranking; // @synthesize ranking=_ranking;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(nonatomic) _Bool newField; // @synthesize newField=_newField;
@property(nonatomic) long long isJdActivity; // @synthesize isJdActivity=_isJdActivity;
@property(retain, nonatomic) NSString *followNum; // @synthesize followNum=_followNum;
@property(retain, nonatomic) NSString *currentRank; // @synthesize currentRank=_currentRank;
@property(retain, nonatomic) NSString *cateName; // @synthesize cateName=_cateName;
@property(retain, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
@property(retain, nonatomic) NSString *activityNote; // @synthesize activityNote=_activityNote;
@property(retain, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

