//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface JDScore : JDModel
{
    NSNumber *_thisPeriodScore;
    NSNumber *_currentScore;
    NSNumber *_flashTime;
    NSNumber *_flashStartTime;
    NSNumber *_flashEndTime;
    NSString *_scorePrefix;
}

@property(retain, nonatomic) NSString *scorePrefix; // @synthesize scorePrefix=_scorePrefix;
@property(retain, nonatomic) NSNumber *flashEndTime; // @synthesize flashEndTime=_flashEndTime;
@property(retain, nonatomic) NSNumber *flashStartTime; // @synthesize flashStartTime=_flashStartTime;
@property(retain, nonatomic) NSNumber *flashTime; // @synthesize flashTime=_flashTime;
@property(retain, nonatomic) NSNumber *currentScore; // @synthesize currentScore=_currentScore;
@property(retain, nonatomic) NSNumber *thisPeriodScore; // @synthesize thisPeriodScore=_thisPeriodScore;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end
