//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface JDAntiBrushManager : NSObject
{
    NSMutableDictionary *_antiBrushTokenMutableDictionary;
}

+ (id)shareJDAntiBrushManager;
@property(retain, nonatomic) NSMutableDictionary *antiBrushTokenMutableDictionary; // @synthesize antiBrushTokenMutableDictionary=_antiBrushTokenMutableDictionary;
- (void).cxx_destruct;
- (void)setAntiBurshToken:(id)arg1 moduleId:(id)arg2;
- (id)getAntiBurshTokenByModuleId:(id)arg1;

@end

