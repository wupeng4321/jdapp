//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface BrandKillAwardListModel : NSObject
{
    NSString *_code;
    NSString *_subCode;
    NSArray *_list;
    NSNumber *_endTimeRemain;
    NSNumber *_startTimeRemain;
    NSString *_frameColor;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *frameColor; // @synthesize frameColor=_frameColor;
@property(retain, nonatomic) NSNumber *startTimeRemain; // @synthesize startTimeRemain=_startTimeRemain;
@property(retain, nonatomic) NSNumber *endTimeRemain; // @synthesize endTimeRemain=_endTimeRemain;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)fetchAwardModel:(id)arg1;
- (long long)numberOfItems;
- (void)keyValuesDidFinishConvertingToObject;

@end

