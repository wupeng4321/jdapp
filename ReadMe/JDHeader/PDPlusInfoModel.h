//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PDPlusInfoModel : NSObject
{
    long long _iconType;
    long long _priceType;
    NSString *_text;
    NSString *_url;
    NSArray *_serverText;
    NSString *_plusPrice;
    long long _memberType;
    NSString *_plusIcon;
    NSNumber *_showButton;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSNumber *showButton; // @synthesize showButton=_showButton;
@property(copy, nonatomic) NSString *plusIcon; // @synthesize plusIcon=_plusIcon;
@property(nonatomic) long long memberType; // @synthesize memberType=_memberType;
@property(copy, nonatomic) NSString *plusPrice; // @synthesize plusPrice=_plusPrice;
@property(retain, nonatomic) NSArray *serverText; // @synthesize serverText=_serverText;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long priceType; // @synthesize priceType=_priceType;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
- (void).cxx_destruct;

@end

