//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface MyJdCardFloorBubbleModel : JDModel
{
    _Bool _display;
    NSString *_functionId;
    NSString *_icon;
    long long _showTime;
    NSString *_refreshTimestamp;
}

@property(copy, nonatomic) NSString *refreshTimestamp; // @synthesize refreshTimestamp=_refreshTimestamp;
@property(nonatomic) long long showTime; // @synthesize showTime=_showTime;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool display; // @synthesize display=_display;
@property(copy, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

