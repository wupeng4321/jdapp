//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class NSArray, NSNumber, NSString;

@interface SingleKillGroupModel : SecKillBaseModel
{
    NSNumber *_timeRemain;
    NSString *_displayTime;
    NSString *_jumpUrl;
    NSString *_operateWord;
    NSString *_operateImg;
    NSString *_name;
    NSString *_gid;
    NSString *_functionId;
    NSString *_groupTime;
    NSString *_sourceValue;
    NSArray *_picList;
    NSString *_startTime;
    NSString *_subText;
    NSString *_titleText;
    unsigned long long _headerConfigType;
}

+ (id)objectClassInArray;
@property(nonatomic) unsigned long long headerConfigType; // @synthesize headerConfigType=_headerConfigType;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *picList; // @synthesize picList=_picList;
@property(retain, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(retain, nonatomic) NSString *groupTime; // @synthesize groupTime=_groupTime;
@property(retain, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
@property(retain, nonatomic) NSString *gid; // @synthesize gid=_gid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *operateImg; // @synthesize operateImg=_operateImg;
@property(retain, nonatomic) NSString *operateWord; // @synthesize operateWord=_operateWord;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *displayTime; // @synthesize displayTime=_displayTime;
@property(retain, nonatomic) NSNumber *timeRemain; // @synthesize timeRemain=_timeRemain;
- (void).cxx_destruct;
- (_Bool)p_isValidStyleTwoInSecondfloor:(long long)arg1;
- (_Bool)p_isValidStyleThree:(long long)arg1;
- (_Bool)p_isValidStyleTwo:(long long)arg1;
- (_Bool)p_isValidStyleOne:(long long)arg1;
- (void)p_setHeaderConfigType;
- (void)p_checkPattern;
- (void)keyValuesDidFinishConvertingToObject;

@end
