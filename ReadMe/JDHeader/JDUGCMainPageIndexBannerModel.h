//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDUGCBaseJumpModel, NSString;

@interface JDUGCMainPageIndexBannerModel : NSObject
{
    NSString *_tabId;
    JDUGCBaseJumpModel *_jump;
    NSString *_title;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) JDUGCBaseJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
- (void).cxx_destruct;

@end
