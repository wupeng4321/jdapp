//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDTreatyListItemModel : NSObject
{
    NSString *_cartText;
    NSString *_name;
    NSString *_ft;
    NSString *_oldType;
    NSString *_type;
    NSString *_sku;
    NSString *_ad;
    NSString *_murl;
}

@property(copy, nonatomic) NSString *murl; // @synthesize murl=_murl;
@property(copy, nonatomic) NSString *ad; // @synthesize ad=_ad;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *oldType; // @synthesize oldType=_oldType;
@property(copy, nonatomic) NSString *ft; // @synthesize ft=_ft;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *cartText; // @synthesize cartText=_cartText;
- (void).cxx_destruct;

@end

