//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSArray, NSNumber, NSString;

@interface TTTTimeLineConfigModel : TTTBaseModel
{
    _Bool _shouldHideTimeLineFloor;
    NSNumber *_num;
    NSString *_timelineColor;
    NSString *_picUrl;
    NSString *_picName;
    NSNumber *_x;
    NSNumber *_y;
    NSString *_timeColor;
    NSString *_timeActiveColor;
    NSString *_timeBgColor;
    NSString *_timeActiveBgColor;
    NSString *_pointTextColor;
    NSString *_pointTextActiveColor;
    NSArray *_pointList;
}

+ (id)objectClassInArray;
@property(nonatomic) _Bool shouldHideTimeLineFloor; // @synthesize shouldHideTimeLineFloor=_shouldHideTimeLineFloor;
@property(retain, nonatomic) NSArray *pointList; // @synthesize pointList=_pointList;
@property(copy, nonatomic) NSString *pointTextActiveColor; // @synthesize pointTextActiveColor=_pointTextActiveColor;
@property(copy, nonatomic) NSString *pointTextColor; // @synthesize pointTextColor=_pointTextColor;
@property(copy, nonatomic) NSString *timeActiveBgColor; // @synthesize timeActiveBgColor=_timeActiveBgColor;
@property(copy, nonatomic) NSString *timeBgColor; // @synthesize timeBgColor=_timeBgColor;
@property(copy, nonatomic) NSString *timeActiveColor; // @synthesize timeActiveColor=_timeActiveColor;
@property(copy, nonatomic) NSString *timeColor; // @synthesize timeColor=_timeColor;
@property(copy, nonatomic) NSNumber *y; // @synthesize y=_y;
@property(copy, nonatomic) NSNumber *x; // @synthesize x=_x;
@property(copy, nonatomic) NSString *picName; // @synthesize picName=_picName;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *timelineColor; // @synthesize timelineColor=_timelineColor;
@property(copy, nonatomic) NSNumber *num; // @synthesize num=_num;
- (void).cxx_destruct;
- (id)p_safeFetch:(unsigned long long)arg1;
- (void)keyValuesDidFinishConvertingToObject;

@end

