//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSNumber, NSString, TTTJumpModel, TTTWebViewConfigModel;

@interface TTTWebViewFloorModel : TTTBaseModel
{
    NSNumber *_showTimes;
    long long _passthrough;
    NSString *_xviewTemplate;
    NSString *_img;
    TTTJumpModel *_jump;
    TTTWebViewConfigModel *_configData;
    NSString *_url;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) TTTWebViewConfigModel *configData; // @synthesize configData=_configData;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *xviewTemplate; // @synthesize xviewTemplate=_xviewTemplate;
@property(nonatomic) long long passthrough; // @synthesize passthrough=_passthrough;
@property(copy, nonatomic) NSNumber *showTimes; // @synthesize showTimes=_showTimes;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end

