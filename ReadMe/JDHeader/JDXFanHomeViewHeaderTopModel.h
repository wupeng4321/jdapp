//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDXFanHomeViewHeaderTopShareInfoModel, NSString;

@interface JDXFanHomeViewHeaderTopModel : NSObject
{
    NSString *_bgColor;
    NSString *_name;
    NSString *_nameColor;
    NSString *_logoImg;
    NSString *_topBgImg;
    JDXFanHomeViewHeaderTopShareInfoModel *_shareInfo;
}

@property(retain, nonatomic) JDXFanHomeViewHeaderTopShareInfoModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString *topBgImg; // @synthesize topBgImg=_topBgImg;
@property(copy, nonatomic) NSString *logoImg; // @synthesize logoImg=_logoImg;
@property(copy, nonatomic) NSString *nameColor; // @synthesize nameColor=_nameColor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
- (void).cxx_destruct;

@end

