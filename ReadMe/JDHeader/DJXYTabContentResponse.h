//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DJXYTabContentResponse : NSObject
{
    NSString *_returnMsg;
    NSString *_code;
    NSString *_subCode;
    NSString *_biTestId;
    NSString *_biDisplayImpr;
    long long _page;
    long long _hasNext;
    NSString *_pageStyle;
    NSString *_banner;
    NSString *_bannerBg;
    NSString *_longSubTitle;
    NSArray *_data;
}

+ (id)ignoredPropertyNames;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *longSubTitle; // @synthesize longSubTitle=_longSubTitle;
@property(copy, nonatomic) NSString *bannerBg; // @synthesize bannerBg=_bannerBg;
@property(copy, nonatomic) NSString *banner; // @synthesize banner=_banner;
@property(copy, nonatomic) NSString *pageStyle; // @synthesize pageStyle=_pageStyle;
@property(nonatomic) long long hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *biDisplayImpr; // @synthesize biDisplayImpr=_biDisplayImpr;
@property(copy, nonatomic) NSString *biTestId; // @synthesize biTestId=_biTestId;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *returnMsg; // @synthesize returnMsg=_returnMsg;
- (void).cxx_destruct;

@end
