//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IAConfigModel, IAMainSessionActivityModel, NSString;

@interface IAMainSessionConfig : NSObject
{
    _Bool _ishaveShowedGuideTempVC;
    IAConfigModel *_configModel;
    long long _warePageSize;
    long long _jumpSouce;
    IAMainSessionActivityModel *_activityModel;
}

+ (id)shared;
+ (void)speakWord:(id)arg1;
+ (void)shareWithDic:(id)arg1;
+ (void)share:(id)arg1;
+ (id)defaultMoreMediaItems;
+ (void)setupVoiceRecognizeWithDelegate:(id)arg1;
+ (struct CGSize)normalCellContentSizeWithMessage:(id)arg1;
+ (id)normalCellMessageLabel;
+ (void)ABNoti:(id)arg1;
+ (void)load;
@property(retain, nonatomic) IAMainSessionActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(nonatomic) long long jumpSouce; // @synthesize jumpSouce=_jumpSouce;
@property(nonatomic) long long warePageSize; // @synthesize warePageSize=_warePageSize;
@property(retain, nonatomic) IAConfigModel *configModel; // @synthesize configModel=_configModel;
@property(nonatomic) _Bool ishaveShowedGuideTempVC; // @synthesize ishaveShowedGuideTempVC=_ishaveShowedGuideTempVC;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *iaLastNoticeUpdateTime;
@property(nonatomic) _Bool isShowToastWhenPop;
@property(nonatomic) _Bool isUseQuietMode;
- (_Bool)getQuietModeConfig;
- (_Bool)getQuietModeABTest;
@property(retain, nonatomic) NSString *toneName;
- (void)restoreData;
- (void)dealloc;

@end
