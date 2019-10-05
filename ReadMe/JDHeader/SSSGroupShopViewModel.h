//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SSSGroupShopViewModel : NSObject
{
    NSString *_cateId;
    NSArray *_dataArray;
    long long _modelStatus;
    NSNumber *_responTime;
    long long _tapPos;
    long long _tableDepth;
    NSString *_biInfo;
    NSString *_sourceValue;
}

@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(copy, nonatomic) NSString *biInfo; // @synthesize biInfo=_biInfo;
@property(nonatomic) long long tableDepth; // @synthesize tableDepth=_tableDepth;
@property(nonatomic) long long tapPos; // @synthesize tapPos=_tapPos;
@property(copy, nonatomic) NSNumber *responTime; // @synthesize responTime=_responTime;
@property(nonatomic) long long modelStatus; // @synthesize modelStatus=_modelStatus;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
- (void).cxx_destruct;
- (void)updateStatusWithRequestSuccess:(_Bool)arg1;
- (void)updateWithShopModel:(id)arg1;
- (id)initWithCateId:(id)arg1;
- (id)init;

@end
