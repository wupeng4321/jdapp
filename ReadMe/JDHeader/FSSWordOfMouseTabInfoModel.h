//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FSSWordOfMouseTabInfoModel : NSObject
{
    NSString *_moduleName;
    NSDictionary *_param;
    NSString *_praiseTitle;
}

@property(copy, nonatomic) NSString *praiseTitle; // @synthesize praiseTitle=_praiseTitle;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (_Bool)isValidateTabInfo;

@end

