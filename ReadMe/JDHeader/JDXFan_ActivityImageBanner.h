//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDXFan_ActivityImageBannerJump, NSString;

@interface JDXFan_ActivityImageBanner : NSObject
{
    NSString *_ID;
    NSString *_name;
    NSString *_imgUrl;
    JDXFan_ActivityImageBannerJump *_jump;
    double _height;
    double _width;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) JDXFan_ActivityImageBannerJump *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end

