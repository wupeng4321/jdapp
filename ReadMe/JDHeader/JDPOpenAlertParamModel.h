//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JDPOpenAlertParamModel : NSObject
{
    NSString *_title;
    NSString *_content;
    NSString *_linkContent;
    NSArray *_buttonArray;
}

@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(copy, nonatomic) NSString *linkContent; // @synthesize linkContent=_linkContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

