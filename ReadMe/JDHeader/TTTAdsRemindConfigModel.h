//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TTTAdsRemindConfigModel : NSObject
{
    _Bool _isNeedNotify;
    NSString *_notifyBtColor;
    NSString *_cancelBtColor;
    NSString *_lookBtColor;
    NSNumber *_x;
    NSNumber *_y;
    NSNumber *_domWidth;
    NSNumber *_domHeight;
    NSNumber *_width;
    NSNumber *_height;
    unsigned long long _adsCount;
}

@property(nonatomic) _Bool isNeedNotify; // @synthesize isNeedNotify=_isNeedNotify;
@property(nonatomic) unsigned long long adsCount; // @synthesize adsCount=_adsCount;
@property(copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(copy, nonatomic) NSNumber *domHeight; // @synthesize domHeight=_domHeight;
@property(copy, nonatomic) NSNumber *domWidth; // @synthesize domWidth=_domWidth;
@property(copy, nonatomic) NSNumber *y; // @synthesize y=_y;
@property(copy, nonatomic) NSNumber *x; // @synthesize x=_x;
@property(copy, nonatomic) NSString *lookBtColor; // @synthesize lookBtColor=_lookBtColor;
@property(copy, nonatomic) NSString *cancelBtColor; // @synthesize cancelBtColor=_cancelBtColor;
@property(copy, nonatomic) NSString *notifyBtColor; // @synthesize notifyBtColor=_notifyBtColor;
- (void).cxx_destruct;

@end
