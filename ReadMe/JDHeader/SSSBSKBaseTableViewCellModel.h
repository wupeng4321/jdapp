//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSSBSKBaseModel.h"

@class NSNumber, NSString;

@interface SSSBSKBaseTableViewCellModel : SSSBSKBaseModel
{
    NSString *_brandImg;
    NSString *_logoImg;
    NSString *_subTitle;
    NSString *_title;
    NSNumber *_startTimeRemain;
    NSNumber *_endTimeRemain;
    NSString *_sourceValue;
    NSString *_clk;
}

@property(copy, nonatomic) NSString *clk; // @synthesize clk=_clk;
@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(copy, nonatomic) NSNumber *endTimeRemain; // @synthesize endTimeRemain=_endTimeRemain;
@property(copy, nonatomic) NSNumber *startTimeRemain; // @synthesize startTimeRemain=_startTimeRemain;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *logoImg; // @synthesize logoImg=_logoImg;
@property(retain, nonatomic) NSString *brandImg; // @synthesize brandImg=_brandImg;
- (void).cxx_destruct;

@end

