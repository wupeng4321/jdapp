//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JDXFanCardCollectionResponseDataModel : NSObject
{
    NSArray *_cardList;
    NSString *_name;
    NSString *_nameColor;
    NSString *_logoImg;
    NSString *_topBgImg;
    NSString *_mainColor;
    NSString *_code;
    NSString *_bgImg;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *bgImg; // @synthesize bgImg=_bgImg;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *mainColor; // @synthesize mainColor=_mainColor;
@property(copy, nonatomic) NSString *topBgImg; // @synthesize topBgImg=_topBgImg;
@property(copy, nonatomic) NSString *logoImg; // @synthesize logoImg=_logoImg;
@property(copy, nonatomic) NSString *nameColor; // @synthesize nameColor=_nameColor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
- (void).cxx_destruct;

@end
