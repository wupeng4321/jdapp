//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JZShareModel, NSArray, NSString;

@interface JZHomeHeaderResponse : NSObject
{
    NSArray *_tabList;
    NSString *_titleImg;
    JZShareModel *_shareInfo;
    NSString *_code;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) JZShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString *titleImg; // @synthesize titleImg=_titleImg;
@property(retain, nonatomic) NSArray *tabList; // @synthesize tabList=_tabList;
- (void).cxx_destruct;

@end
