//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDChatInfooModel : NSObject
{
    _Bool _isBubble;
    NSString *_shopText;
    NSString *_shopIcon;
    NSString *_bottomText;
    NSString *_bottomIcon;
    NSString *_allGoodText;
    NSString *_allGoodIcon;
    NSString *_tips;
}

@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *allGoodIcon; // @synthesize allGoodIcon=_allGoodIcon;
@property(copy, nonatomic) NSString *allGoodText; // @synthesize allGoodText=_allGoodText;
@property(nonatomic) _Bool isBubble; // @synthesize isBubble=_isBubble;
@property(copy, nonatomic) NSString *bottomIcon; // @synthesize bottomIcon=_bottomIcon;
@property(copy, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(copy, nonatomic) NSString *shopIcon; // @synthesize shopIcon=_shopIcon;
@property(copy, nonatomic) NSString *shopText; // @synthesize shopText=_shopText;
- (void).cxx_destruct;

@end

