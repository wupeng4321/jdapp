//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface COCheckoutSiteMapCalloutVM : NSObject
{
    _Bool _selected;
    _Bool _avaiable;
    _Bool _nearest;
    unsigned long long _style;
    NSNumber *_siteId;
    NSString *_siteName;
    NSString *_siteOpeningTime;
    NSString *_sitePhone;
    NSString *_siteAddress;
    NSString *_siteDistance;
}

@property(copy, nonatomic) NSString *siteDistance; // @synthesize siteDistance=_siteDistance;
@property(copy, nonatomic) NSString *siteAddress; // @synthesize siteAddress=_siteAddress;
@property(copy, nonatomic) NSString *sitePhone; // @synthesize sitePhone=_sitePhone;
@property(copy, nonatomic) NSString *siteOpeningTime; // @synthesize siteOpeningTime=_siteOpeningTime;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
@property(retain, nonatomic) NSNumber *siteId; // @synthesize siteId=_siteId;
@property(nonatomic) _Bool nearest; // @synthesize nearest=_nearest;
@property(nonatomic) _Bool avaiable; // @synthesize avaiable=_avaiable;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;

@end
