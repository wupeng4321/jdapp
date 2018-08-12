//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IABackImgModel, NSDictionary, NSMutableArray, NSString;

@interface IAConfigModel : NSObject
{
    _Bool _canShare;
    _Bool _showQuitGuide;
    _Bool _isCanShake;
    _Bool _isOpenVoice;
    long long _warePageSize;
    NSMutableArray *_moreModels;
    NSString *_textInputHint;
    NSDictionary *_shareDic;
    IABackImgModel *_backImageModel;
    NSString *_toneId;
    NSDictionary *_bubbleInfo;
    NSDictionary *_functionNoticeInfo;
    double _silentTimeLimit;
    NSString *_xdVoiceSignBtn;
    NSDictionary *_homeSmartGuideConfig;
    NSString *_startSpeechSwitch;
    NSString *_lottieSwitch;
}

@property(copy, nonatomic) NSString *lottieSwitch; // @synthesize lottieSwitch=_lottieSwitch;
@property(copy, nonatomic) NSString *startSpeechSwitch; // @synthesize startSpeechSwitch=_startSpeechSwitch;
@property(retain, nonatomic) NSDictionary *homeSmartGuideConfig; // @synthesize homeSmartGuideConfig=_homeSmartGuideConfig;
@property(copy, nonatomic) NSString *xdVoiceSignBtn; // @synthesize xdVoiceSignBtn=_xdVoiceSignBtn;
@property(nonatomic) double silentTimeLimit; // @synthesize silentTimeLimit=_silentTimeLimit;
@property(retain, nonatomic) NSDictionary *functionNoticeInfo; // @synthesize functionNoticeInfo=_functionNoticeInfo;
@property(nonatomic) _Bool isOpenVoice; // @synthesize isOpenVoice=_isOpenVoice;
@property(nonatomic) _Bool isCanShake; // @synthesize isCanShake=_isCanShake;
@property(retain, nonatomic) NSDictionary *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(nonatomic) _Bool showQuitGuide; // @synthesize showQuitGuide=_showQuitGuide;
@property(retain, nonatomic) NSString *toneId; // @synthesize toneId=_toneId;
@property(retain, nonatomic) IABackImgModel *backImageModel; // @synthesize backImageModel=_backImageModel;
@property(retain, nonatomic) NSDictionary *shareDic; // @synthesize shareDic=_shareDic;
@property(retain, nonatomic) NSString *textInputHint; // @synthesize textInputHint=_textInputHint;
@property(retain, nonatomic) NSMutableArray *moreModels; // @synthesize moreModels=_moreModels;
@property(nonatomic) long long warePageSize; // @synthesize warePageSize=_warePageSize;
@property(nonatomic) _Bool canShare; // @synthesize canShare=_canShare;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

