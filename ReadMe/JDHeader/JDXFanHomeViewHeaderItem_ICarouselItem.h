//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDXFanJumpModel, NSString;

@interface JDXFanHomeViewHeaderItem_ICarouselItem : NSObject
{
    NSString *_ID;
    NSString *_name;
    long long _frame;
    NSString *_imgUrl;
    NSString *_title;
    NSString *_subTitle;
    JDXFanJumpModel *_jump;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) JDXFanJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) long long frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end

