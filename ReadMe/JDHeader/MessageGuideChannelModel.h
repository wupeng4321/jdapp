//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@interface MessageGuideChannelModel : JDModel
{
    _Bool _isOn;
    long long _channel;
    long long _delayTime;
}

@property(nonatomic) long long delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
- (void)setDataWithDic:(id)arg1;
- (id)init;

@end

