//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSDictionary, NSString;

@interface ShareOrderCarServiceModel : JDModel
{
    NSArray *_serviceModelArray;
    NSDictionary *_scoreTags;
    long long _limitWordCount;
    NSString *_storeName;
}

@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(nonatomic) long long limitWordCount; // @synthesize limitWordCount=_limitWordCount;
@property(retain, nonatomic) NSDictionary *scoreTags; // @synthesize scoreTags=_scoreTags;
@property(retain, nonatomic) NSArray *serviceModelArray; // @synthesize serviceModelArray=_serviceModelArray;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

