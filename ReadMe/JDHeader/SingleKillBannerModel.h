//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class NSArray, NSString;

@interface SingleKillBannerModel : SecKillBaseModel
{
    NSString *_pattern;
    NSString *_borderColor;
    NSString *_bgImg;
    NSArray *_moduleList;
    long long _styleAndType;
}

+ (id)objectClassInArray;
@property(nonatomic) long long styleAndType; // @synthesize styleAndType=_styleAndType;
@property(retain, nonatomic) NSArray *moduleList; // @synthesize moduleList=_moduleList;
@property(copy, nonatomic) NSString *bgImg; // @synthesize bgImg=_bgImg;
@property(copy, nonatomic) NSString *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (void)p_configPatternType;
- (void)keyValuesDidFinishConvertingToObject;

@end

